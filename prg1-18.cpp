#include<iostream>
using namespace std;
int main()
{
	string str;
	getline(cin,str,'\\');
	int len;
	len = str.length();
	cout<<str<<endl<<endl;	
	for(int i=0;i<len;i++)	
	{ 
           if(str[i] == ' ' || str[i] == '\t')
                 i++; 
		cout<<str[i];
		
				}
      

return 0;



}
