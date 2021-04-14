#include <iostream>
#include<stdlib.h>
using namespace std;

class Graph
{
    int V;
    int length = 9;
    char people[9] = {'A', 'B', 'C', 'K', 'M', 'N', 'P', 'U', 'X'};
    map<char, int> peoplesID;
    list<int> *adj;

public:
    Graph(int V);
    void addEdge(char v, char w);
    bool isReachable(char v, char w);
    void printAdjList();
    void printNotFriends();
};

void Graph::printNotFriends()
{
    int temp[9];
    int count = 0;
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {

            if (!isReachable(people[i], people[j]) && i != j)
            {
                temp[count] = j;
                count++;
            }
        }
        cout << people[i] << " is not friend with: ";
        for (int x = 0; x < count; x++)
        {
            cout << people[temp[x]] << ", ";
        }
        count = 0;
        cout << endl;
    }
}

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];

    for (int i = 0; i < length; i++)
    {
        peoplesID[people[i]] = i;
    }
}

void Graph::addEdge(char v, char w)
{
    map<char, int>::iterator it;
    it = peoplesID.find(v);

    int x = peoplesID.find(v)->second;
    int y = peoplesID.find(w)->second;

    adj[x].push_back(y);
    adj[y].push_back(x);
}

bool Graph::isReachable(char v, char w)
{

    int s = peoplesID.find(v)->second;
    int d = peoplesID.find(w)->second;
    bool isFriend = false;
    for (int nbr : adj[s])
    {
        if (nbr == d)
        {
            isFriend = true;
        }
    }
    return isFriend;
}

int main()
{
    char people[] = {'A', 'B', 'C', 'K', 'M', 'N', 'P', 'U', 'X'};
    int length = 9;
    map<char, int> peoplesID;
    map<char, int>::iterator it;

    Graph g(9);
    g.addEdge('N', 'K');
    g.addEdge('N', 'P');
    g.addEdge('N', 'U');
    g.addEdge('N', 'X');
    g.addEdge('X', 'A');
    g.addEdge('X', 'B');
    g.addEdge('X', 'C');
    g.addEdge('U', 'A');
    g.addEdge('U', 'B');
    g.addEdge('A', 'P');
    g.addEdge('P', 'K');
    g.addEdge('K', 'M');
    g.addEdge('M', 'C');
    g.addEdge('M', 'N');

    g.printNotFriends();

    return 0;
}
