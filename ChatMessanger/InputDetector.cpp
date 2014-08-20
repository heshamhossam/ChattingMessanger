#include "InputDetector.h"


InputDetector::InputDetector()
{
}


InputDetector::~InputDetector()
{
}


InputType InputDetector::detect(std::string)
{
	return InputType::SEND_MESSAGE;
}