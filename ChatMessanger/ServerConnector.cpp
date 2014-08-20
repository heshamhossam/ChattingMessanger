#include "ServerConnector.h"

ServerConnector::ServerConnector()
{
}


ServerConnector::~ServerConnector()
{
}

ServerConnector::ServerConnector(std::string IP)
{
	//makes this ip address the server which listens to all coming connections
}

std::string ServerConnector::recieveText()
{
	//recieves text from any connection connected to me 
	return "";
}

bool ServerConnector::hasNewTextMessages()
{
	//check if any connection made a connection and sent me a text message
	return true;
}