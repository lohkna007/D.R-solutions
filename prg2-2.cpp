//this program is the conversion of the for loop 
// for(int i=0; i<limit-1 && (c=getchar()) != '\n' && c!= EOF;i++)

#include<stdio.h>
#define lim 100
int main()
{
    int i;char c;
    char var[lim];
    for(i=0;i<lim-1;)
        {
            if((c = getchar() != '\n'))
                {
                    if(c != EOF)
                    var[i]=c;
                }
            else
            printf("the loop's condtion is unsatisfied.");
    i++;
        }return 0;
}
