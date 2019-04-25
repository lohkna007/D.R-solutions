#include<iostream>
using namespace std;
void  reverse(string s);
int main()
{
	string str;
	getline(cin,str);
	reverse(str);
return 0;
}

void reverse(string s)
{
	int len;
	len = s.length();
	for(int i=len-1;i>=0;i--)
	cout<<s[i];	
}
