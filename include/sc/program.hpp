#pragma once
#include <string>

namespace sc
{
	// stores any data that is part of the input script (program)
	class Program
	{
	public:
		Program(const std::string& content);
		std::string getContent();

	private:
		std::string content;
	};
}