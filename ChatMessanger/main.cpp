#include <iostream>
#include <string>
#include <Windows.h>
#include "InputDetector.h"
#include "User.h"

using namespace std;



int main()
{
	string userInput, targetComputerIP;
	InputType inputType = InputType::CONNECT_TO_COMPUTER;
	User* user = new User();

	while (inputType != InputType::QUIT)
	{
		if (user->hasNewMessage())
		{
			cout << user->getIPConnectedTo() << ": " << user->getNewMessage() << endl;
		}
		getline(cin, userInput);

		InputType inputType = InputDetector::detect(userInput);

		switch (inputType)
		{
		case SEND_MESSAGE:
			if (user->isConnectedToAnother())
				user->sendMessage(userInput);
			else
				cout << "Please Connect to Another Computer First!!" << endl;
			break;
		case OPEN_MY_CAM:
			if (user->isConnectedToAnother())
				user->openCam();
			else
				cout << "Please Connect to Another Computer First!!" << endl;
			break;
		case CONNECT_TO_COMPUTER:
			cout << "Enter Target Computer IP Address: ";
			getline(cin, targetComputerIP);
			if (user->connectTo(targetComputerIP))
				cout << "Your Connected Successfuly to " << targetComputerIP << endl;
			else
				cout << "Sorry Connection to " << targetComputerIP << " Failed, Please try again later" << endl;
			break;
		}
	}
	

	system("pause");
	return 0;
}