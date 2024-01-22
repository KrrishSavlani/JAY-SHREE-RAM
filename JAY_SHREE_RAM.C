#include <stdio.h>

void printSpaces(int count)  
{  for (int i = 0; i< count ; i++ )
    {printf(" ");}
}
  
void printAsterisks(int count) 
{ for (int i = 0; i< count ; i++ )
    {printf("*");}
}


void printpatternJ (int size)
  {    
    
    int mid = size/2 ;
    for(int i = 0 ; (i < size -1 ) ; i++)
    { 
     if(i<size -1)
     {
         for (int i = 0; i< (size) ; i++)
         {
          if( i < size -1 ){ printSpaces(size-mid -2);}
          else{ printAsterisks(1);}
         }
     } printf("\n");
     
     if(i>size -3)
        {
           for(int i = 0 ; i < size ; i++)
           {
             printAsterisks(1);
           }
        }
    }
        
  }

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



void printpatternY(int size)
{
    for (int i = 0 ; i< size ; i++)
    {
       if(i<size -3)
       {
         printSpaces(i);
         printAsterisks(1);
         printSpaces(5-2*i);
         printAsterisks(1);
         printSpaces(i);
         printf("\n");
      }

      if(i>size - 4)
      {
          printSpaces(size -3);
          printAsterisks(1);
          printf("\n");

      }
    }
}


void printpatternS(int size)

{
    for (int i = 0 ; i< size ;i++)
    {
        if(i < 1){printAsterisks(size);}
        printf("\n");
        if(i < size-5)
        {printAsterisks(1);
         printf("\n");
          printAsterisks(1);}

        if(i< size -5){printf("\n");
        printAsterisks(size);}

         if(i< size - 5){printf("\n");
         printSpaces(size-1);
        printAsterisks(1);
        printf("\n");
        printSpaces(size-1);
        printAsterisks(1);}

        if(i< size -5){printf("\n");
        printAsterisks(size);}
    }
}

void printpatternH(int size)
{
    for (int i = 0; i< size ;i++)
    {
        if (i < size -4)
        { printAsterisks(1);
          printSpaces(4);
          printAsterisks(1);

          printf("\n");
        }
        if(i > size - 2)
        {
          printAsterisks (size);
        }

        if (i > size -2)
        { printf("\n");
        printAsterisks(1);
          printSpaces(4);
          printAsterisks(1);

          printf("\n");
        printAsterisks(1);
          printSpaces(4);
          printAsterisks(1);


        }
    }
}


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



void printpatternE(int size)
{
    for( int i = 0 ; i< size ; i++)
    {
        if(i< size -5){printAsterisks(size);}
        if (i > size -5 && i<= size-1)
        {
           printf("\n");
          if(i < size -3 || i == size -2)
          {printAsterisks(1);}
          if(i == size -3 || i == size -1)
          {printAsterisks (size);}
        }
    }
}

void printpatternM (int size)
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
        if(i>=size-1)
        {   printf("\n");
            printAsterisks(1);
            printSpaces(size-1);
            printAsterisks(1);

        }
    }
}

int main ()

{
	int size = 6;

	printpatternJ(size);
	printf("\n"); printf("\n");
	printpatternA(size);
	printf("\n"); printf("\n");
	printpatternY(size);
	printf("\n");
printf("\n");

	printpatternS(size);
	printf("\n");printf("\n");
	printpatternH(size);
	printf("\n");printf("\n");
	printpatternR(size);
	printf("\n");printf("\n");
	printpatternE(size);
	printf("\n");printf("\n");
	printpatternE(size);
	printf("\n");
	printf("\n");

	printpatternR(size);
	printf("\n");printf("\n");
	printpatternA(size);
	printf("\n");printf("\n");
	printpatternM(size);

}


