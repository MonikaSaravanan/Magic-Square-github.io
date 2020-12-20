
#include <stdio.h>

int main()
{
    int val=2,row,col,n;
    int arr[50][50]={0};
    printf("The magic square for n = ");
    scanf("%d",&n);
    row=n-1;
    col=(n)/2;
    arr[row][col] = 1; 
    while(val<=(n*n))
    {
        
        if(col==0 && row!=n-1)
        {
            row=row+1;
            col=n-1;
            arr[row][col]=val;
            val++;
        }
            
        if(row==n-1 && col>0)
        {
            row=0;
            col=col-1;
            arr[row][col]=val;
            val++;
        }
        
        if(row==n-1 && col==0)
        {
            row=row-1;
            arr[row][col]=val;
            val++;
        }
        
        if(col>0)
        {
            if(arr[row+1][col-1]==0)
            {
                row=row+1;
                col=col-1;
                arr[row][col]=val;
                val++;
            }
            else
            {
                row=row-1;
                arr[row][col]=val;
                val++;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d \t", arr[i][j]);
        printf("\n");
    }
    printf("\nSum is %d",(n*(n*n+1)/2));
    return 0;
}

