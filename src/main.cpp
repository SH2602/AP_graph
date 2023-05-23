#include <iostream>
#include <queue>
#include "include/graph.hpp"

struct CompareNodes {
    bool operator()(const Node* lhs, const Node* rhs) const {
        return (*lhs) > (*rhs);
    }
};

int main()
{
    Node a = Node("a"); Node b = Node("b"); Node c = Node("c"); Node d = Node("d"); Node e = Node("e"); Node f = Node("f");

    Edge a1 = Edge(&a, &b, 4); Edge a2 = Edge(&a, &c, 3);    
    Edge b1 = Edge(&b, &a, 4); Edge b2 = Edge(&b, &c, 5); Edge b3 = Edge(&b, &d, 2);
    Edge c1 = Edge(&c, &a, 3); Edge c2 = Edge(&c, &b, 5); Edge c3 = Edge(&c, &d, 2); Edge c4 = Edge(&c, &e, 1);    
    Edge d1 = Edge(&d, &b, 2); Edge d2 = Edge(&d, &c, 2); Edge d3 = Edge(&d, &e, 1); Edge d4 = Edge(&d, &f, 1);    
    Edge e1 = Edge(&e, &c, 1); Edge e2 = Edge(&e, &d, 1); Edge e3 = Edge(&e, &f, 3);       
    Edge f1 = Edge(&f, &d, 1); Edge f2 = Edge(&f, &e, 3);

    Graph g = Graph(
        {&a, &b, &c, &d, &e, &f},
        {&a1, &a2, &b1, &b2, &b3, &c1, &c2, &c3, &c4, &d1, &d2, &d3, &d4, &e1, &e2, &e3, &f1, &f2}
    );

    std::cout << g << std::endl;
    
    std::cout << std::endl;

    std::priority_queue<Node, std::vector<Node>, std::greater<Node>> pq;

    pq.push(a); pq.push(b); pq.push(c); pq.push(d); pq.push(e); pq.push(f);

    std::cout << "First item: " << std::endl << pq.top();

    pq.pop();
    std::cout << std::endl;
    
    std::cout << "Second item: " << std::endl << pq.top() << std::endl;
    
    std::cout << std::endl << "And now with pointers: " << std::endl; 
    std::priority_queue<Node*, std::vector<Node*>, CompareNodes> pq2;
    pq2.push(&a); pq2.push(&b); pq2.push(&c); pq2.push(&d); pq2.push(&e); pq2.push(&f);

    std::cout << "First item: " << std::endl << (*pq2.top());

    pq2.pop();
    std::cout << std::endl;
    
    std::cout << "Second item: " << std::endl << (*pq2.top());
    
    return 0;
}
