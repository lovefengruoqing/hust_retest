#include <stdio.h>

void convertPrint(char str[]);
int main(){
    char str[]="0123456789";

    convertPrint(str);
    return 0;
}

void convertPrint(char str[]){
    //���ж�������ַ�����ż��
    int count = 0;
    int  i, j=0;
    int temp1,temp2,num;    //temp1�����洢ͷ���ַ���Ӧ�����֣�temp2�����洢β���ַ���Ӧ�����֣�num�����洢�����Ľ��
    for(i=0; str[i]!='\0'; i++)count++; //�˴�Ҳ���滻Ϊ�ַ���������

    //�ж��ַ���������ż
    if(count>0&&count%2==0){
        i--;    //��i��Ϊβָ��
        while(j<i){
            temp1 = str[j++] - '0';
            temp2 = str[i--] - '0';
            num = 10*temp1 + temp2 + 32;
            printf("%c", num);
        }
    }else{
        while(j<i){
            //������������ַ���Ҫ��ĩβ�����0�ַ�
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
