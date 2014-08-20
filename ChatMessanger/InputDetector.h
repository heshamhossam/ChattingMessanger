#pragma once
#include <iostream>

enum InputType
{
	SEND_MESSAGE,
	OPEN_MY_CAM,
	CONNECT_TO_COMPUTER,
	QUIT
};


class InputDetector
{
public:
	InputDetector();
	~InputDetector();

	static InputType detect(std::string);
};

