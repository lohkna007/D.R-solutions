#include<iostream>
using namespace std;
int main()
{
  int c,i,copy;
 while((c=getchar()) != '?')
{
copy = 0;


if(c ==  '\t')
{
putchar('\\');
putchar('t');
copy = 1;
}


if(c =='\b')
{
  putchar('\\');
  putchar('b');

copy = 1;
}


if(c =='\\')
{
  putchar('\\');
  putchar('\\');

copy = 1;
}

if (copy == 0)
putchar(c);


}
return 0;









}
