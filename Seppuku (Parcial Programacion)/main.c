#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    for(;;i++)
    {
       printf("%d", i);
       if(i==9)
       {
           break;
       }
    }
    return 0;
}
