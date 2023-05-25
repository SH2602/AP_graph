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

std::ostream& operator<<(std::ostream& os, const Node& n)
{
    os << n.name << ": ";
    for(Edge* edge : n.edges)
    {
        os << edge->getTo()->getName() << " (" << edge->getWeight() << ") ";
    }

    return os;
}

bool Node::operator<(const Node& rhs) const
{
    const Node& rhsNode = dynamic_cast<const Node&>(rhs);
    return edges.size() < rhsNode.edges.size();
}

bool Node::operator>(const Node& rhs) const
{
    const Node& rhsNode = dynamic_cast<const Node&>(rhs);
    return edges.size() > rhsNode.edges.size();
}