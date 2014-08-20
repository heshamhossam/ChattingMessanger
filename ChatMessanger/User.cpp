#include "User.h"


User::User()
{
	_myIP = detectMyIP();
	//make my computer as a server that listens to all messages come to my ip address on port constant
	_serverConnector = new ServerConnector(_myIP);
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
	bool sent = _clientConnector->sendText(message);
	return true;
}

bool User::connectTo(std::string IP)
{
	bool connected = _clientConnector->connectTo(IP); //u will send my ip with this packet so he connects to me also
	return true;
}

std::string User::getIPConnectedTo()
{
	std::string ip = _clientConnector->getServerIP();
	return "127.0.0.1";
}
std::string User::getNewMessage()
{
	std::string message = _serverConnector->recieveText();
	//analys this message to check if its a connection request
	return "new message";
}

bool User::hasNewMessage()
{
	bool has = _serverConnector->hasNewTextMessages();
	return true;
}

std::string User::detectMyIP()
{
	return "127.0.0.1";
}