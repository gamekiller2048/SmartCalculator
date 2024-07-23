#include <iostream>
#include <sc/program.hpp>
#include <sc/lexer.hpp>
#include <sc/parser.hpp>
#include <sc/error.hpp>

int main()
{
	try {
		sc::Program program("1432.564.3 + 1");
		sc::Lexer lexer(&program);
		
		auto tokens = lexer.lex();

		for(const auto token : tokens)
			std::cout << token;

		sc::Parser parser(&program, tokens);
		auto ast = parser.parse();
	}
	catch(const sc::Error& error) {
		std::cout << error.getErrorString() << '\n';
	}
	return 0;
}