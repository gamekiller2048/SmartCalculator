#pragma once
#include <string>

namespace sc
{
	class Error
	{
	public:
		Error(const std::string& type, const std::string& msg);
		std::string getErrorString() const;

	protected:
		std::string type;
		std::string msg;
		std::string errorMsg;
	};

	class SyntaxError : public Error
	{
	public:
		SyntaxError(const std::string& msg);
	};
}