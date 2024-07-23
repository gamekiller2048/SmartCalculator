#pragma once
#include <sc/program.hpp>
#include <sc/token.hpp>
#include <sc/node.hpp>
#include <vector>
#include <memory>

namespace sc
{
	// uses a recursive descent parser model 
	class Parser
	{
	public:
		Parser(Program* program, const std::vector<Token>& tokens);
		void step();
		std::vector<std::shared_ptr<Node>> parse();
		
		// levels of descent
		std::shared_ptr<Node> level0();
		std::shared_ptr<Node> level1();
		std::shared_ptr<Node> level2();

	private:
		Program* program;
		std::vector<Token> tokens;
		uint32_t index = -1; // current index of tokens
		Token curr; // current token of tokens (tokens[index])
	};
}