#include <stdio.h>
int main (){
    int row =0;
    printf("\nenter number of rows");
    scanf("%d",&row);
    int space=row-1;
    int array_2D[row][(row*2)-1];
    int count=0;
    int fixed=0;
    int x=1;
    for (int i = 0; i < row; i++)
    {
        x=1;
        for (int j = 0; j <= count; j++)
        {
            if (j<i)
            {
                array_2D[i][j]=j+1;
            }
            else if (i==j)
            {
                fixed=i+1;
                array_2D[i][j]=fixed;
            }
            else if (j>i)
            {
                // fixed=fixed-x;
                array_2D[i][j]=fixed-x;
                x++;
            }   
        }
        count=count+2;
        
    }
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j <7; j++)
    //     {
    //         printf("%d ",array_2D[i][j]);
    //     }
    //     printf("\n");
        
    // }
    count=0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        space=space-1;
        for (int j = 0; j <= count; j++)
        {
            printf("%d",array_2D[i][j]);
            
        }
        count=count+2;
        printf("\n");
        
        
    }
    
    
    

}    