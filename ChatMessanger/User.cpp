#include "User.h"


User::User()
{
	//make my computer as a server that listens to all messages come to my ip address on port constant
}


User::~User()
{
}

bool User::isConnectedToAnother()
{
	return true;
}

bool User::openCam()
{
	return true;
}

bool User::sendMessage(std::string message)
{
	return true;
}

bool User::connectTo(std::string IP)
{
	return true;
}

std::string User::getIPConnectedTo()
{
	return "127.0.0.1";
}
std::string User::getNewMessage()
{
	return "new message";
}

bool User::hasNewMessage()
{
	return true;
}