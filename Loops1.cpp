#include <stdio.h>

int main (){
    printf("enter number of rows");
    int rows;
    int i,j,k;
    scanf("%d", &rows);

    for(i=1; i<=rows;i++){
        for(j=1;j<=i;j++)
        {
            printf(" ");}
            
        for(k=1;k< ( 2*(rows-i+1));k++)
            {printf("*");
    }
    printf("\n");
    }
    return 0;
}
