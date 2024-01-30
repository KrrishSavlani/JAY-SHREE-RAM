#include <stdio.h>



void printpatternM(int size)
{
    for (int i = 0 ; i < size ; i ++)
    {
        if(i==0)
        { printAsterisks(1);
          printSpaces(size -1);
          printAsterisks(1); 
        }
        
        if(i>0 && i< size -3)
        {   printf("\n");
            printAsterisks(1);
            printSpaces (i);
            printAsterisks(1);
            printSpaces (i);
            printAsterisks(1);
          if(i==size-5) 
          {printSpaces (i);
            printAsterisks(1);
          }
        }
        if(i> size-2)
        { printf("\n");
          printAsterisks(1);
          printSpaces(size -1);
          printAsterisks(1);
        }
    }
}


