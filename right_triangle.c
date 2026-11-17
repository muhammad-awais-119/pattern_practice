#include <stdio.h>
int main (){
   int row=0;
   printf("\nenter number of row for thre right triangle");
   scanf("%d",&row);
   int count=0;
   for (int i = 0; i <= row; i++)
   {
       for (int j = 1; j <= count; j++)
       {
           printf("%d",j);
       }
       count++;
       printf("\n");
   }
   

   return 0;
}