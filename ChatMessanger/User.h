#pragma once
#include <iostream>
#include "ClientConnector.h"
#include "ServerConnector.h"


class User
{
protected:
	std::string _myIP;
	ClientConnector* _clientConnector = nullptr;
	ServerConnector* _serverConnector = nullptr;

	std::string detectMyIP();

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

