//��Ŀ��
//����A,B,C,������Z��a��b��c������z�е�����һ������������µ���ĸ���У�
//������D�������   A B C D C B A
//                    A B C B A
//     			        A B A
//                        A
//����c�������      a b c b a
//                     a b a
//                       a

#include <stdio.h>

void print(char ch);    //��ӡ�ַ�����
int main(){
    char ch;
    int n=0;
    do{
        if(n==0){
            printf("please enter char, rang are A-Z or a-z: ");
        }else{
            printf("Please enter the right char: ");
        }
        scanf(" %c",&ch);    //����������ַ�,ע��Ӹ��ո񣬲�Ȼ����뻺����������
        n++;
    }while(!((ch<='Z'&&ch>='A')||(ch<='z'&&ch>='a')));


    int i,j;
    int len = ch<'a'?ch-'A':ch-'a';     //�ж���Ҫ��ӡ���ַ�����
    printf("\nThe console follows: \n");
    for(i=0;i<=len;i++){
        j=i;
        while(j>0){     //��ӡ�ո�
            printf(" ");
            j--;
        }
        print(ch);  //���ú������д�ӡ
        ch--;
        printf("\n");
    }


    return 0;
}

void print(char ch){
    char temp, flag;
    flag = ch<'a'?'A':'a';  //ȷ����־
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
