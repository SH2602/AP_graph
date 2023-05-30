#pragma once
#include <vector>
#include <string>
#include <iostream>
#include "edge.hpp"

class Node
{
    private:
        std::vector<Edge*> edges;
        std::string name;

    public:
        Node(std::string name);
        std::string getName() const;
        void addEdge(Edge* edge);
        std::vector<Edge*> getEdges() const;
        friend bool operator<(const Node& lhs, const Node& rhs);
        friend bool operator>(const Node& lhs, const Node& rhs);
        friend std::ostream& operator<<(std::ostream& os, const Node& n);
};