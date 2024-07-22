#include <sc/errors.hpp>

namespace sc
{
	Error::Error(const std::string& type, const std::string& msg) :
		type(type), msg(msg) {}

	std::string Error::getErrorString() const
	{
		return type + " Error: " + msg;
	}

	SyntaxError::SyntaxError(const std::string& msg) :
		Error("Syntax", msg) {}
}