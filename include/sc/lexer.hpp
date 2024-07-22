#pragma once
#include <sc/program.hpp>
#include <sc/token.hpp>
#include <vector>

namespace sc
{
	class Lexer
	{
	public:
		Lexer(Program* program);
		void step();
		std::vector<Token> lex();

	private:
		Program* program;
		uint32_t index = -1; // current index of program content
		char curr; // current char of program content (content[index])

		Token makeNumberToken();
	};
}