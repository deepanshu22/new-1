#include <bits/stdc++.h>

using namespace std;

int fact(int n)
{
	if(n==1)
		return 1;
	else
		return n*fact(n-1);
}
void printfun(int n)
{
	if (n<1)
		return;
	else
	{
		cout<<n<<" ";
		printfun(n-1);
		cout<<n<<" ";
		return;
	}
}

void fun1(int n)
{
	if (n>1)
		fun1(n-1);
	for (int i = 0; i < n; ++i)
		cout<<"*"<<" ";
	printf("\n");
}

void fun(int x)
{
  if(x > 0)
  {
     fun(--x);
     printf("%d\t", x);
     fun(--x);
  }
}
void test(int x)
{
	if(x%2)
		cout<<"Hello"<<'\n';
	else
		cout<<"nhi nhi "<<'\n';
}

int fibo(int n)
{
	if (n==0)
		return 0;
	if(n==1)
		return 1;

	return fibo(n-1)+fibo(n-2);
}
int main()
{
	int n;

	cout<<"Enter any mumber "<<endl;
	cin>>n;
	// printfun(n);
	// fun1(n);
	// fun(n);
	// test(n);
	// int ret=fact(n);
	for (int i = 0; i < n; ++i)
	{
		cout<<fibo(i)<<" "<<i<<endl;
	}
	// cout<<ret<<endl;

}