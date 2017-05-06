#include <stdio.h>
#include "graph.h"

int main()
{
	graph_p myGraph = createGraph(3, UNDIRECTED);
	addEdge(myGraph, 0, 1);
	addEdge(myGraph, 0, 2);
	addEdge(myGraph, 1, 2);
	
	displayGraph(myGraph);
	destroyGraph(myGraph);
}	
