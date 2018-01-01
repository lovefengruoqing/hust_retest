#include <stdio.h>

int test(char tel[]);
int main(){
    char tel[] = "13727402062";    //将待检测的号码存入字符数组tel中
    int result = test(tel);

    if(result)printf("It's a correct telephone number!");
    else printf("The number is illegal!");
    return 0;
}

int test(char tel[]){
    int i,j;
    int temp;
    for(i=0; tel[i]!='\0';)i++;
    if(i==11&&tel[0]=='1'){
        if(tel[1]=='3'||tel[1]=='5'||tel[1]=='6'||tel[1]=='8'){
            for(j=0; tel[j]!='\0';j++){ //依次检测每一位数字是否符合要求
                temp = tel[j] - '0';
                if(temp<0||temp>9){
                    break;
                }
            }
            if(tel[j]=='\0')return 1;   //如果全部数字测试完了符合要求返回1
        }
    }
    return 0;   //不符合要求返回0
}
