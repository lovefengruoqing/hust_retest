#include <stdio.h>


int isPrime(int n);
int main(int argc, char const *argv[])
{
    int n,i;
    printf("please input a integret number: ");
    scanf("%d",&n);
    for (i = n; i>1; i--)
    {
        if (isPrime(i))
        {
            if (isPrime(i-2)&&(i-2)>1)
            {
                printf("%d, %d\n", i, i-2);
                break;
            }
        }
    }
    return 0;
}

//判断素数的程序
int isPrime(int n){
    int i=n/2+1;
    while(i>=2&&n>2){
        if (n%i==0)
        {
            break;
        }
        i--;
    }
    if(n==2||i==1){
        return 1;
    }else{
        return 0;
    }
}
