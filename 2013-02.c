#include <stdio.h>
#include <string.h>

int main()
{
    int n,i,j,num,m,q,p;

    printf("Please input a number: ");
    scanf("%d", &n);

    int A[n+1][n+1];
    //重置二维数组内容
    memset(A, 0, sizeof(A));

    //按要求将数存入二维数组
    //每个循环打印最外的一圈
    for (i = 1,j=n; i<=j; i++,j--){

        // 打印最上的横行
        num = n*n-(j-i+1)*(j-i+1) + 1;
        for (m =0 ; m < j-i+1; ++m)
        {
            A[i][i+m] = num+m;
        }
        // 打印最右的竖行
        num += m;
        for (m = 0; m < j-i; ++m)
        {
            A[m+i+1][j] = num+ m;
        }
        // 打印最下的横行
        num+=m;
        for (m = 0; m < j-i; ++m)
        {
            A[j][j-m-1] = num+ m;
        }
        // 打印最左的竖行
        num+=m;
        for (m = 0; m < j-i-1; ++m)
        {
            A[-m+j-1][i] = num+ m;
        }
        // 调试信息
        // {
        //     printf("---------------------\n");
        //     for (q = 1; q < n+1; ++q)
        //     {
        //         for (p = 1; p < n+1; ++p)
        //         {
        //             printf("%d ", A[q][p]);
        //         }
        //         printf("\n");
        //     }
        //     printf("---------------------\n");
        // }
    }

    // 按要求打印信息
    for (i = 1; i < n+1; ++i)
    {
        for (j = 1; j < n+1; ++j)
        {
            printf("%d", A[i][j]);
            if(A[i][j]<10){printf("  ");}
            else{printf(" ");}
        }
        printf("\n");
    }

    return 0;
}
