#include "include/edge.hpp"

Edge::Edge(Node* from, Node* to, float weight) :
    from(from),
    to(to),
    weight(weight)
{ }

Node* Edge::getFrom() const
{
    return from;
}

Node* Edge::getTo() const
{
    return to;
}

float Edge::getWeight() const
{
    return weight;
}

void Edge::setWeight()
{
    this->weight = weight;
}