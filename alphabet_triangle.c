#include <stdio.h>
int main (){
    int row=0;
    printf("\n enter number of row for alphabet triange ");
    scanf("%d",&row);
    char alpha='A';
    int count=0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= count; j++)
        {
            
            
            printf("%c ",alpha);
            alpha=alpha+1;
        }
        printf("\n");
        
        count++;

        
    }
    

    return 0;
}