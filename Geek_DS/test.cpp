#include <bits/stdc++.h>
using namespace std;


int main() {
	
	set<int> s1;
	map<char,int> m1;

	string str="Mynameisdeepanshudabas";

	for (int i = 0; i < str.length(); ++i)
	{
		m1[str[i]]+=1;
	}

	map<char,int> :: iterator itr;

	for(itr=m1.begin();itr!=m1.end();itr++)
	{
		cout<<itr->first<<"-"<<itr->second<<" ";
	}
	cout<<endl;

	// s1.insert(2);
	// s1.insert(44);
	// s1.insert(21);
	// s1.insert(24);
	// s1.insert(1);
	// s1.insert(21);
	// s1.insert(2);

	// cout<<s1.size()<<endl;

	// set<int> :: iterator itr;

	// for (itr = s1.begin(); itr != s1.end(); ++itr)
	// {
	// 	cout<<*itr<<endl;
	// }

	// if(s1.find(212)!=s1.end())
	// {
	// 	cout<<"Found"<<endl;
	// }
	// else
	// {
	// 	cout<<"not found"<<endl;
	// }

	// cout<<*s1.upper_bound(20)<<endl;
	// cout<<*s1.lower_bound(20)<<endl;
	// cout<<s1.count(21)<<endl;


}