#include "prime.h"
#define false 0
#define true 1


int prime(int a)

{
    int i;
     /* Return false for negative numbers which is defined as 0 */
    if(a <= 1)
    {
        return false;
    }
    for(i=2;i<(a-1);i++)
    {
        if((a%i)==0)
            /*return false if not prime which is defined as 0*/
            return false;
    }
   /*return true if it is prime which is defined as 1*/
      return true;
}
