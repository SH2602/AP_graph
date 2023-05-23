#pragma once
#include <vector>
#include <string>
#include <iostream>
#include "IComparable.hpp"
#include "edge.hpp"

class Node : public IComparable
{
    private:
        std::vector<Edge*> edges;
        std::string name;

    public:
        Node(std::string name);
        std::string getName();
        void addEdge(Edge* edge);
        std::vector<Edge*> getEdges();
        bool operator<(const IComparable& rhs) const override;
        bool operator>(const IComparable& rhs) const override;
        friend std::ostream& operator<<(std::ostream& os, const Node& n);
};