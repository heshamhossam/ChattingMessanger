#pragma once

#include <iostream>

class ClientConnector
{
protected:
	std::string _serverIP;
public:
	ClientConnector();
	~ClientConnector();
	bool sendText(std::string message);
	bool connectTo(std::string ip);
	std::string getServerIP();
};

