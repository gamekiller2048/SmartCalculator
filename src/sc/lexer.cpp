#include <sc/lexer.hpp>
#include <sc/token.hpp>

namespace sc
{
	Lexer::Lexer(Program* program) :
		program(program)
	{
		step();
	}

    void Lexer::step()
    {
        index++;
		curr = program->getContent()[index];
    }

	std::vector<Token> Lexer::lex()
	{
		std::vector<Token> tokens;

		while(index < program->getContent().size()) {
			if(curr == ' ') // ignore whitespace
				step();
			else if(isdigit(curr)) {
				tokens.push_back(makeNumberToken());
			}
			else if(curr == '+') {
				tokens.push_back(Token{TokenType::ADD});
				step();
			}
			else if(curr == '-') {
				tokens.push_back(Token{TokenType::SUB});
				step();
			}
			else if(curr == '*') {
				tokens.push_back(Token{TokenType::MUL});
				step();
			}
			else if(curr == '/') {
				tokens.push_back(Token{TokenType::DIV});
				step();
			}
			else
				step(); // TODO: throw error invalid char
		}

		return tokens;
	}

	Token Lexer::makeNumberToken()
	{
		std::string num;
		bool hasDecimal = false;

		while(isdigit(curr) || curr == '.') {

			if(curr == '.') {
				if(hasDecimal)
					return Token{}; // TODO: throw error for another decimal in number
				hasDecimal = true;
			}

			num += curr;
			step();
		}

		return Token{TokenType::NUM, num};
	}
}