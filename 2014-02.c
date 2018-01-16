#include <stdio.h>

#define MAXSIZE 100

int main(int argc, char const *argv[])
{
    int stack1[MAXSIZE], top1=-1;
    int stack2[MAXSIZE], top2=-1;
    int temp,flag,pow;
    int num1,num2,num;

    char str[MAXSIZE];  //接受字符串
    char op;    //接受操作符

    printf("Please input two binary numbers and one opration mark. Remember divide by white space and end you input by enter key:\n");

    //取第一个数，并转化成十进制数
    scanf("%s",str);

    int i=0;
    while(str[i]!='\0'){
        stack1[++top1]=str[i] - '0';
        if(stack1[top1]==0||stack1[top1]==1){
           i++;
        }else{
            printf("Oh, sorry! Please enter binary number!!!\n");
            return -2;
        }
    }
    flag=1;
    num1=0;
    while(top1!=-1){
        if(flag==1){
            pow=1;
            flag=0;
        }else{
            pow*=2;
        }
        num1+=pow*stack1[top1--];
    }

     //取第二个数，并转化成十进制数
    scanf(" %s",str);   //加一个空格排除掉最前面的间隔空格

    i=0;
    while(str[i]!='\0'){
        stack2[++top2]=str[i] - '0';
        if(stack2[top2]==0||stack2[top2]==1){
            i++;
        }else{
            printf("Oh, sorry! Please enter binary number!!!\n");
            return -3;
        }
    }

    flag=1;
    num2=0;
    while(top2!=-1){
        if(flag==1){
            pow=1;
            flag=0;
        }else{
            pow*=2;
        }
        num2+=pow*stack2[top2--];
    }

    //以下代码完成对运算符的存取
    scanf(" %c",&op);   //加一个空格排除掉最前面的间隔空格

    //根据运算符，进行计算
    switch(op){
        case '+': num = num1+num2;break;
        case '-': num = num1-num2;break;
        case '*': num = num1*num2;break;
        case '/': if(num2==0){printf("ERROR!!!\n");return -1;}else{num = num1/num2;};break;
    }

    //转换成二进制存放在栈中
    while(num!=0){
        stack1[++top1] = num%2;
        num /= 2;
    }

    printf("The require number is:\n");
    while(top1!=-1){
        printf("%d", stack1[top1--]);
    }

    return 0;
}
