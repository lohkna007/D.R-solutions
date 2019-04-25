#include<iostream>
using namespace std;
int main()
{
  int digits[10];
  int c, i,nchar=0;
  int state = 1; //o = out

  for(i=0;i<10;i++)
   digits[i]=0;

 while((c = getchar())!= '\\')
      { ++nchar;
        if(c==' ' || c == '\t' || c == '\n')
           { state = 1;
             --nchar;
           }
           if(state == 1 )
              {
               if(nchar != 0 && nchar<=10)
                {
                  ++digits[nchar];
                   nchar = 0; state = 0; //i = in
                }
              }
      }

for(i = 1; i<=10; i++)
   {
     cout<< "|"<<i<<"|";
        for(int h = 0; h<digits[i]; h++)
            {putchar('*');}
putchar('\n');
            }







 return 0;

}
