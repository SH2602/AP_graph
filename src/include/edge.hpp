#pragma once
#include <vector>
#include <iostream>
#include "IComparable.hpp"
//#include "Node.hpp"

class Node;

class Edge : public IComparable
{
    private:
        // Node from;
        Node* from;
        // Node to;
        Node* to;
        float weight;

    public:    
        Edge(Node* from, Node* to, float weight);
        Node* getFrom();
        Node* getTo();
        float getWeight();
        bool operator<(const IComparable& rhs) const override;
        bool operator>(const IComparable& rhs) const override;
};