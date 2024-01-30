	
#include <stdio.h>



void printpatternR (int size)
{
    for(int i = 0 ; i < size ; i++)
    {
        if(i == size -size) {printAsterisks(size);}
        if(i < size - 4) 
        {   printf("\n");
          if(i < size -5)
           {
            printAsterisks(1);
            printSpaces (size-2);
            printAsterisks (1);
           }
          
              
          }
          if(i == size -5){ printAsterisks(size);}
          if( i > size - 5)
          {   
              printf("\n");
              printAsterisks(1);
              printSpaces(i-2);
              printAsterisks(1);
        }
    }
}

