#include <bits/stdc++.h>

using namespace std;


void addEdge(vector<int> adj[],int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}


void print_it(vector<int>adj[],int n)
{
	for(int i=0;i<n;++i)
	{
		cout<<"Head is : "<<i<<endl;

		for(int j=0;j<adj[i].size();++j)
		{
			cout<<adj[i][j]<<" -> ";
		}
		printf("\n");
	}
}

int main()
{
	int n;

	cout<<"Enter number of nodes: "<<endl;

	cin>>n;

	vector<int> adj[n];

	addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
	

	print_it(adj,n);



}