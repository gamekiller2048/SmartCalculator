#pragma once
#include <string>
#include <iostream>
#include <unordered_map>

namespace sc
{
	enum class TokenType
	{
		NUM,
		ADD,
		SUB,
		MUL,
		DIV
	};

	struct Token
	{
		TokenType type;
		std::string value; // optional for some token types
	};

	// used for debugging purposes of tokens
	const extern std::unordered_map<TokenType, std::string> DEBUG_TOKEN_TYPE_MAP;
	std::ostream& operator<<(std::ostream& stream, const Token& other);
}