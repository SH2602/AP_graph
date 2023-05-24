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