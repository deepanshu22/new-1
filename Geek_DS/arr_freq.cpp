#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s = "aaabbbccccjashdasdblkasdkadskseff";

	int count=0;
	char check;
	vector<char> v;
	sort(s.begin(),s.end());
	for (int i = 0; i < s.length(); ++i)
	{
		count+=1;

		if(s[i]!=s[i+1])
		{
			v.push_back(s[i]);
			check = char(count+48);
			// cout<<count<<check<<endl;
			v.push_back(check);
			count=0;
		}
	}

	string str(v.begin(),v.end());
	cout<<str<<endl;
}