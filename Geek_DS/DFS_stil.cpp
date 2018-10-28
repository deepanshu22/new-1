#include <bits/stdc++.h>

using namespace std;

void Add_Edge(vector<vector<int> > &adj, int a, int b)
{
	adj[a].push_back(b);
	// cout<<"yeh";
}


void DFS_util(vector<vector<int> > &adj,vector<bool> &Visited,int u)
{
	Visited[u]=true;

	cout<<u<<" ";
	for(int i=0;i<adj[u].size();i++)
	{
		if(Visited[adj[u][i]]!=true)
		{
			DFS_util(adj,Visited,adj[u][i]);
		}
	}
}
void DFS(vector<vector<int> > adj)
{
	vector<bool> Visited;
	Visited.assign(adj.size(),false);
	// cout<<adj.size()<<endl;
	for(int i=0;i<adj.size();i++)
	{
		if(Visited[i]==false)
		{
			DFS_util(adj, Visited, i);
		}
	}
		
}

int main()
{
	int n,e;

	cin>>n>>e;

	vector<vector<int> > adj;

	adj.assign(n,vector<int>());
	for(int i=0;i<e;i++)
	{
		int a,b;
		cin>>a>>b;
		Add_Edge(adj,a,b);
	}

	DFS(adj);
}