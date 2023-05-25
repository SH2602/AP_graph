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
        std::string getName();
        void addEdge(Edge* edge);
        std::vector<Edge*> getEdges();
        bool operator<(const Node& rhs) const;
        bool operator>(const Node& rhs) const;
        friend std::ostream& operator<<(std::ostream& os, const Node& n);
};