#include<stdio.h>
int main (){
    int row=0;
    int count=0;
    printf("\n enter number of row for incerted pyramid ");
    scanf("%d",&row);
    count=row;
    for (int i = 0; i <= row; i++)
    {
        for (int j = count; j >=0 ; j=j-1)
        {
            printf("* ");
        }
        printf("\n");
        count=count-1;
        
    }
    

    return 0;
}