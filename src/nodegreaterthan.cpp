#include "include/nodegreaterthan.hpp"

bool NodeGreaterThan::operator()(const Node* lhs, const Node* rhs) const
{
    return *lhs > *rhs;
}