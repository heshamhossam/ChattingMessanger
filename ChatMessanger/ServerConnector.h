#pragma once

#include <iostream>

class ServerConnector
{
public:
	ServerConnector();
	ServerConnector(std::string IP);
	~ServerConnector();
	std::string recieveText();
	bool hasNewTextMessages();
};

