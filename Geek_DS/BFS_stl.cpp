#include <bits/stdc++.h>

using namespace std;


void Add_Edge(vector<vector<int> > &adj,int a, int b)
{
	adj[a].push_back(b);
	// cout<<"hell0"<<endl;
}


void bfs(vector<vector<int> > adj, vector<bool> &v,int u)
{
	queue<int> q;

	q.push(u);

	v[u]=true;

	while(!q.empty())
	{
		int temp = q.front();
		q.pop();

		cout<<temp<<" ";
		// printf("\n");
		for(int j = 0; j<adj[temp].size();j++)
		{
			// cout<<v[j]<<" "<<j<<" "<<endl;
			if(v[adj[temp][j]]!=true)
			{
				v[adj[temp][j]]=true;
				q.push(adj[temp][j]);
				// cout<<adj[temp][j]<<" ";
			}
		}
		
	}
}


void print_it(vector<vector<int> >adj,int n)
{
	// vector<vector<int> > :: iterator i;
	// vector<int> :: iterator j;

	// cout<<adj[0].size();
	for(int i=0;i<n;i++)
	{	
		cout<<i<<"  head -> ";
		for(int j=0;j<adj[i].size();j++)
		{
			cout<<adj[i][j]<<"  ";
		}
		printf("\n");
	}
}
int main()
{
	int n,e;

	cin>>n>>e;

	// vector<int> adj[n];

	
	vector<bool> v;
	vector<vector<int> > adj;
	v.assign(n,false);
	adj.assign(n,vector<int>());
	for(int i=0;i<e;i++)
	{
		int a,b;
		cin>>a>>b;
		Add_Edge(adj,a,b);
	}

	print_it(adj,n);
	for(int i=0;i<n;i++)
	{
		if(!v[i])
		{
			bfs(adj,v,i);
		}
	}
	printf("\n");


}