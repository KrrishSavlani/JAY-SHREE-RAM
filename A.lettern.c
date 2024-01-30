#include <stdio.h>



void printpatternA(int size)
{  // mid is 4 and i will be 3 at that
   for(int i = 0 ; i < size ; i++) 
   {
   
   if(i == 0 || i== size-3)
   {
   printAsterisks(size);
   printf("\n");
   }
   
   if(i > 0 && i<size && i!= size -4)
   { 
     printAsterisks(1);
     printSpaces(size-2) ;
     printAsterisks(1);
     printf("\n");
   }
}
}




