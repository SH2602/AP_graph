#include "include/edge.hpp"

Edge::Edge(Node* from, Node* to, float weight) :
    from(from),
    to(to),
    weight(weight)
{ }

Node* Edge::getFrom()
{
    return from;
}

Node* Edge::getTo()
{
    return to;
}

float Edge::getWeight()
{
    return weight;
}

bool Edge::operator<(const IComparable& rhs) const
{
    const Edge& rhsEdge = dynamic_cast<const Edge&>(rhs);
    return weight < rhsEdge.weight;
}

bool Edge::operator>(const IComparable& rhs) const
{
    const Edge& rhsEdge = dynamic_cast<const Edge&>(rhs);
    return weight > rhsEdge.weight;
}