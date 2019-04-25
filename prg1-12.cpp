#include<iostream>
using namespace std;
int main()
{
 
int c;
while((c = getchar()) != '\\')
{
if(c == ' ' || c == '\t' || c == '\n')
{
 putchar('\n');
}
else
{ putchar(c);}
}



return 0;
}
