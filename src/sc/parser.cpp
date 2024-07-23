#include <sc/parser.hpp>

namespace sc
{
	Parser::Parser(Program* program, const std::vector<Token>& tokens) :
		program(program), tokens(tokens)
	{
		step();
	}

	void Parser::step()
	{
		index++;
		curr = tokens[index];
	}

	std::vector<std::shared_ptr<Node>> Parser::parse()
	{
		return {};
	}

	std::shared_ptr<Node> Parser::level0()
	{
		return nullptr;
	}

	std::shared_ptr<Node> Parser::level1()
	{
		return nullptr;
	}

	std::shared_ptr<Node> Parser::level2()
	{
		return nullptr;
	}
}