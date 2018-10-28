#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int n,m,xc,yc,k;
	ios_base::sync_with_stdio(false);
	
	cin>>n>>m;

	cin>>xc>>yc;

	cin>>k;

	long long int dx,dy;
	long long int  step =0;
	for(int i = 1; i <=k ; ++i)
	{
		cin>>dx>>dy;

		xc+=dx;
		yc+=dy;

		if(xc > 0 && yc > 0 && xc <n && yc < m)
		{
			// cout<<step<<' ';
			if(dx== 1 && dy== 1)
			{
				step+=1;
				// printf("yeh\n");
			}
			if(dx==1 && dy== 0)
			{
				step+=1;
				// printf("eh\n");
			}
			if(dx==0 && dy== 1)
			{
				step+=1;
				// printf("h\n");
			}
			if(dx!=1 && dy!=1)
			{
				step+=abs(dx)+abs(dy);
				// printf("heheh\n");
			}
		}
	}

	cout<<step<<'\n';





}