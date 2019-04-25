#include<iostream>
#define max 122
#define min 97
#define dif 32
using namespace std;
int main()
{
 int array [max - min];
int c,i;
  for(i=min;i<=max;i++)
         array[i]=0;

while((c=getchar()) != '\\')
	{
   		if(c>=min)
                 ++array[c];
                  else
                      { ++array[c+dif];}

	}
 for(i=min;i<=max;i++)
    { printf("|%c%c|",i,i-dif); // to convert any integer to the character value of its.
     for(int j=1;j<=array[i];j++)
        {putchar('*');
        }
       
      putchar('\n');
    }
return 0 ;




}
