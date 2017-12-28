//题目：
//输入A,B,C,……，Z或a，b，c，……z中的任意一个数，输出如下的字母排列：
//如输入D，输出：   A B C D C B A
//                    A B C B A
//     			        A B A
//                        A
//输入c，输出：      a b c b a
//                     a b a
//                       a

#include <stdio.h>

void print(char ch);    //打印字符函数
int main(){
    char ch;
    int n=0;
    do{
        if(n==0){
            printf("please enter char, rang are A-Z or a-z: ");
        }else{
            printf("Please enter the right char: ");
        }
        scanf(" %c",&ch);    //读出输入的字符,注意加个空格，不然会读入缓冲区的内容
        n++;
    }while(!((ch<='Z'&&ch>='A')||(ch<='z'&&ch>='a')));


    int i,j;
    int len = ch<'a'?ch-'A':ch-'a';     //判断需要打印的字符个数
    printf("\nThe console follows: \n");
    for(i=0;i<=len;i++){
        j=i;
        while(j>0){     //打印空格
            printf(" ");
            j--;
        }
        print(ch);  //调用函数按行打印
        ch--;
        printf("\n");
    }


    return 0;
}

void print(char ch){
    char temp, flag;
    flag = ch<'a'?'A':'a';  //确定标志
    if((ch<='Z'&&ch>='A')||(ch<='z'&&ch>='a')){
        temp = flag;
        while(temp<=ch){
            printf("%c",temp++);
        }
        temp = ch-1;
        while(temp>=flag){
            printf("%c",temp--);
        }
    }
}
