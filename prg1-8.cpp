#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;
int main()
{
  int newlines=0,tabs=0,blanks=0;
  int c;
  while((c=getchar())!= '\\')
       {
         if(c == ' ')
           ++blanks;
         if(c == '\t')
           ++tabs;
         if(c == '\n')
           ++newlines;
       }
cout<<"\nblanks = "<<blanks;
cout<<"\ntabs = "<<tabs;
cout<<"\nnewlines = "<<newlines;
return 0;
}
