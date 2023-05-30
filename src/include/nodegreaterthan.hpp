#include "node.hpp"

struct NodeGreaterThan
{
    bool operator()(const Node* lhs, const Node* rhs) const;
};