#include "include/node.hpp"

Node::Node(std::string name) :
    name(name)
    
{}

std::string Node::getName()
{
    return name;
}

void Node::addEdge(Edge* edge)
{
    edges.push_back(edge);
}

std::vector<Edge*> Node::getEdges()
{
    return edges;
}

std::ostream &operator<<(std::ostream &os, const Node &n)
{
    os << n.name << ": ";
    for(Edge* edge : n.edges)
    {
        os << edge->getTo()->getName() << " (" << edge->getWeight() << ") ";
    }

    return os;
}

bool operator<(const Node& lhs, const Node& rhs)
{
    return lhs.edges.size() < rhs.edges.size();
}

bool operator>(const Node& lhs, const Node& rhs)
{
    return lhs.edges.size() > rhs.edges.size();
}