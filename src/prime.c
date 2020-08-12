#include "prime.h"
#define false 0
#define true 1


int prime(int a)

{
    int i;
     /* Return 1 for negative numbers */
    if(a <= 1)
    {
        return false;
    }
    for(i=2;i<(a-1);i++)
    {
        if((a%i)==0)
            /*return 1 if not prime*/
            return false;
    }
   /*return 0 if it is prime*/
      return true;
}
