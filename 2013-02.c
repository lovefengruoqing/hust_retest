#include <stdio.h>
#include <string.h>

// int r;
// void set(int A[][r],int i,int j,int n);
int main()
{
    int n,i,j,num,k,m,q,p;

    scanf("%d", &n);

    int A[n+1][n+1];
    memset(A, 0, sizeof(A));

    for (i = 1,j=n; i<=j; i++,j--)
    {
        num = n*n-(j-i+1)*(j-i+1) + 1;
        // printf("%d\n", num);
        k=i;
        for (m =0 ; m < j-i+1; ++m)
        {
            A[i][i+m] = num+m;
        }



        num += m;
        for (m = 0; m < j-i; ++m)
        {
            A[m+i+1][j] = num+ m;
        }

        num+=m;
        for (m = 0; m < j-i; ++m)
        {
            A[j][j-m-1] = num+ m;
        }
        num+=m;
        for (m = 0; m < j-i-1; ++m)
        {
            A[-m+j-1][i] = num+ m;
            printf("hello,%d,%d\n",-m+j-1,num+m);
        }
        {
            printf("---------------------\n");
            for (q = 1; q < n+1; ++q)
            {
                for (p = 1; p < n+1; ++p)
                {
                    printf("%d ", A[q][p]);
                }
                printf("\n");
            }
            printf("---------------------\n");
        }
    }

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

// void set(int A[][r],int i,int j,int n){
//     int num,k,m;
//     num = n*n-(j-i+1)*(j-i+1) + 1;
//     k=i;
//     printf("==hello==\n");
//     for (m =0 ; m < j-i+1; ++m)
//     {
//         A[i][i+m] = num+m;
//     }
//     num += m;
//     for (m = 0; m < j-i; ++m)
//     {
//         A[m+i][j] = num+ m;
//     }
//     num+=m;
//     for (m = 0; m < j-i; ++m)
//     {
//         A[j][j-m] = num+ m;
//     }
//     num+=m;
//     for (m = 0; m < j-i; ++m)
//     {
//         A[-m+i][j] = num+ m;
//     }
//     for (i = 1; i < n+1; ++i)
//     {
//         for (j = 1; j < n+1; ++j)
//         {
//             printf("%d ", A[i][j]);
//         }
//         printf("\n");
//     }
// }
