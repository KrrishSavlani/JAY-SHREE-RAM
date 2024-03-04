#include<stdio.h>
#include "j.lettern.c"
#include "A.lettern.c"               
#include "Y.lettern.c" 
#include "S.lettern.c"
#include "H.lettern.c"                                               
#include "R.lettern.c"
#include "E.lettern.c"
#include "M.lettern.c"                                                                                       
int main ()
{             
	 int size = 6;
         printpatternJ(size);
         printf("\n");                                                                                               
         printpatternA(size);
         printf("\n");
         printpatternY(size);

         printf("\n");
         printf("\n");

         printpatternS(size);
         printf("\n");
         printpatternH(size);
         printf("\n");
         printpatternR(size);
         printf("\n");
         printpatternE(size);
         printf("\n");
         printpatternE(size);
         printf("\n");

         printf("\n");
         printpatternR (size);
         printf("\n");
         printpatternA(size);
         printf("\n");
         printpatternM(size);

}
