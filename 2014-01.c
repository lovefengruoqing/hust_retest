#include <stdio.h>

//定义常量
#define MAXSIZE 100

int main(int argc, char const *argv[])
{
    int que[MAXSIZE],front=0,rear=0;    //简单的定义一个循环队列
    int n=4;    //四轮
    int num,i,pow;
    int count;
    while(n>0){
        switch(n){  //根据轮数判断pow取值，
            case 3:pow=1;break;
            case 2:pow=10;break;
            case 1:pow=100;break;
        }
        i=0;
        if(n==4){   //初始时候，选取从1-10里面的素数
            while(i<10){
                if(isPrime(i)){
                    rear = (rear+1)%MAXSIZE;
                    que[rear]=i;
                }
                i++;
            }
        }else{  //这个部分实现，每次从队列中突出一个数，然后将其乘以10倍后，依次测定个位从1增长到10的时候，是否为素数
            while(que[(front+1)%MAXSIZE]/pow<10&&front!=rear){
                front = (front+1)%MAXSIZE;

                num = que[front]*10;
                while(i<10){    //对每一个数进行测定
                    if(isPrime(num+i)){
                        rear = (rear+1)%MAXSIZE;
                        que[rear] = num+i;
                    }
                    i++;
                }
                i=0;
            }
        }
        n--;
    }
    count=0;
    printf("The require numbers are below:\n");
    while(front!=rear){ //按要求输出所求得素数
        front = (front+1)%MAXSIZE;
        printf("%d\t", que[front]);
        count++;
        if(count==6){
            printf("\n");
            count=0;
        }
    }

    return 0;
}

int isPrime(int num){
    int i;
    if(num==2){
        return 1;
    }else if(num>2){
        for(i=2; i<=(num/2)+1; i++){
            if(num%i==0){
                return 0;
            }
        }
        return 1;
    }
    return 0;
}
