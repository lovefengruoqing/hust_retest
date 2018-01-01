#include <stdio.h>

#define MAXSIZE 100
int main(){
    int stack1[MAXSIZE],top1=-1;
    int stack2[MAXSIZE],top2=-1;
    int stack3[MAXSIZE],top3=-1;
    int num, flag=0;

    do{
        scanf("%d",&stack1[++top1]);
    }while(stack1[top1]!=0);

    do{
        scanf("%d",&stack2[++top2]);
    }while(stack2[top2]!=0);

    top1--;
    top2--;

    while(top1!=-1&&top2!=-1){
        num=stack1[top1--] + stack2[top2--];
        if(flag){
            num++;
        }
        stack3[++top3] = num%10;
        if(num>10)flag=1;
        else flag=0;
    }
    while(top1!=-1){
        num=stack1[top1--];
        if(flag)num++;
        stack3[++top3] = num%10;
        if(num>10)flag=1;
        else flag=0;
    }
    while(top2!=-1){
        num=stack2[top2--];
        if(flag)num++;
        stack3[++top3] = num%10;
        if(num>10)flag=1;
        else flag=0;
    }
    while(top3!=-1){
        printf("%d",stack3[top3--]);
    }
    printf("\n");

    return 0;
}
