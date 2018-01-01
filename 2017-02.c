#include <stdio.h>

void convertPrint(char str[]);
int main(){
    char str[]="0123456789";

    convertPrint(str);
    return 0;
}

void convertPrint(char str[]){
    //先判断输入的字符串奇偶性
    int count = 0;
    int  i, j=0;
    int temp1,temp2,num;    //temp1用来存储头部字符对应的数字，temp2用来存储尾部字符对应的数字，num用来存储计算后的结果
    for(i=0; str[i]!='\0'; i++)count++; //此处也可替换为字符计数函数

    //判断字符个数的奇偶
    if(count>0&&count%2==0){
        i--;    //将i置为尾指针
        while(j<i){
            temp1 = str[j++] - '0';
            temp2 = str[i--] - '0';
            num = 10*temp1 + temp2 + 32;
            printf("%c", num);
        }
    }else{
        while(j<i){
            //如果是奇数个字符，要在末尾添加上0字符
            if(j==0){
                temp2 = 0;
            }else{
                temp2 = str[i--] - '0';
            }
            temp1 = str[j++] - '0';
            num = 10*temp1 + temp2 + 32;
            printf("*%c*", num);
        }
    }
}
