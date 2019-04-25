#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;
int main()
{
  int read,copy;
  while((read=getchar()) != '\\')
       { 
         if(read == ' ')
           {
            putchar(read);
            while((read = getchar()) == ' '){}
           }

         if (read != '\\')
          putchar(read);
           
       }
          
return 0;
}
