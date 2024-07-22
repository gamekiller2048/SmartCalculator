#include <iostream>
#include <sc/program.hpp>
#include <sc/lexer.hpp>

int main()
{
	sc::Program program("1432.5643 + 1");
	sc::Lexer lexer(&program);
	
	auto tokens = lexer.lex();

	for(const auto token : tokens)
		std::cout << token;

	return 0;
}