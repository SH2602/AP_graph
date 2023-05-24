#pragma once
#include <vector>
#include <iostream>
//#include "Node.hpp" Dit gaat verkeerd...

class Node; //Forward declaration werkt ook, maar alleen als ik pointers van Nodes gebruik

class Edge
{
    private:
        // Node from; Dit kan dus niet, probeer maar!
        Node* from;
        Node* to;
        float weight;

    public:    
        Edge(Node* from, Node* to, float weight);
        Node* getFrom();
        Node* getTo();
        float getWeight();
};