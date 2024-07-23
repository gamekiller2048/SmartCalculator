#pragma once
#include <memory>

namespace sc
{
	// base class for all nodes in the ast
	class Node
	{
	public:
		Node() = default;
		virtual std::shared_ptr<Node> eval() = 0;
	};
}