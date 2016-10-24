#include "Node.h"
#include "LinkedList.h"

class Edge {
public:
    Edge();

    ~Edge();

    void setNodes(Node *node1, Node *node2);

    Node *getNodes();


    void addTime(int);
    int connectedTimes();
    int* getTimes();



private:
    Node *node1;
    Node *node2;
    LinkedList times;



};

Edge::Edge() {
}

Edge::~Edge() {
}