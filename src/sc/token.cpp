#include <sc/token.hpp>

namespace sc
{
	const std::unordered_map<TokenType, std::string> DEBUG_TOKEN_TYPE_MAP = {
		{TokenType::NUM, "NUM"},
		{TokenType::ADD, "ADD"},
		{TokenType::SUB, "SUB"},
		{TokenType::MUL, "MUL"},
		{TokenType::DIV, "DIV"}
	};

	std::ostream& operator<<(std::ostream& stream, const Token& other)
	{
		if(other.value.empty())
			return stream << '[' << DEBUG_TOKEN_TYPE_MAP.find(other.type)->second << ']';
		return stream << '[' << DEBUG_TOKEN_TYPE_MAP.find(other.type)->second << ":" << other.value << ']';
	}
}