#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<char,int> m; 
    set <char,greater <int> > s;

	string str;

	cin>>str;

	for (int i = 0; i < str.length(); ++i)
	{
		m[str[i]]+=1;
		s.insert(str[i]);
	}

	map<char, int> :: iterator itr;

	set <char, greater <int> > :: iterator itr1;

	for (itr1 = s.begin();itr1!=s.end();itr1++)
	{
		cout<<*itr1<<" ";
	}

	printf("\n");

	for (itr = m.begin();itr!=m.end(); itr++)
	{
		cout<<itr->first<<" "<<itr->second<<endl;
	}

	cout<<"enter The element to be found"<<endl;
    char temp;
	cin>>temp;
	

	itr1=s.find(temp);

	cout<<*itr1<<endl;

	// if()
	// {
	// 	cout<<found<<endl;
	// }
	// else
	// 	cout<<"not found"<<endl;


}