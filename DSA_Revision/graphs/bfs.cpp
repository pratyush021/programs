#include<bits/stdc++.h>
#include<list>
using namespace std;

 class Graph{
 	int v;
 	list<int> *adj;
 public:
 	Graph(int v);//construcer

 	void addEdge(int u, int w);// to add an edge between u & v

 	void bfs(int s); // bfs traversal 
 }


 Graph::Graph(int v) {
 	this->v = v;
 	adj = new list<int>[v];
 }



void Graph::addEdge(int u, int v) {
	adj[u].push_back(v);
}
void Graph::bfs(int s) {
	bool *visited = new bool[v];
	for(int i =0; i < v; i++) {
		visited[i]= false;//initializing all to false
	}
	list<int> queue;

	//Mark the current node as visited and enqueue it 
	visited[s] = true;
	queue.push_back(s);

	//'i' will be used to get all the adjacent vertices of the vertex
	list<int>::iterator i;

	while(!queue.empty()) {
		//dequeue a vertex and print it
		s = queue.front();
		cout << s << " ";
		queue.pop_front();

		for(int i = adjs[s].begin(); i != adj[s].end(); i++) {
			if(!visited[*i]) {
				visited[*i] = true;
				queue.push_back(*i);
			}
		}

	}
}

int main() {
	Graph g(4);
	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 2);
	g.addEdge(2, 0);
	g.addEdge(2, 3);
	g.addEdge(3, 3);

	cout << "Following is Breadth First Traversal " << "(starting from vertex 2) \n";
	g.bfs(2);
	return 0;

}
