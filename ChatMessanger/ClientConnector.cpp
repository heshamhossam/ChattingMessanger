#include "ClientConnector.h"


ClientConnector::ClientConnector()
{
}


ClientConnector::~ClientConnector()
{
}

bool ClientConnector::sendText(std::string message)
{
	return true;
}

bool ClientConnector::connectTo(std::string ip)
{
	//u will send my ip address in this packet so the server ask the user's client to connect to me
	return true;
}

std::string ClientConnector::getServerIP()
{
	return "";
}