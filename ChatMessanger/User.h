#pragma once
#include <iostream>

class User
{
protected:

public:
	User();
	~User();

	bool isConnectedToAnother();
	bool openCam();
	bool sendMessage(std::string message);
	bool connectTo(std::string IP);
	bool hasNewMessage();
	std::string getIPConnectedTo();
	std::string getNewMessage();

};

