#include <sc/program.hpp>

namespace sc
{
	Program::Program(const std::string& content) :
		content(content) {}

	std::string Program::getContent()
	{
		return content;
	}
}