#include <stdio.h>
#include <string.h>

void printChar(char A[]);
void trim(char A[]);
void convert(char A[]);

int main(int argc, char const *argv[])
{
    char A[]="3224fjstgkbkjqa";

    printChar(A);

    trim(A);
    convert(A);

    return 0;
}

void printChar(char A[]){
    // Remerber! You can use "%s" to output a string array directly.
    printf("1. The input string is \"%s\"!\n", A);
}

void trim(char A[]){
    int i;
    int ascillArray[256];
    memset(ascillArray, 0, sizeof(ascillArray));    //利用memset函数快速将数组内容重置为0

    printf("2. After trimmed, the string is \"");
    for (i = 0; A[i] != '\0'; i++)
    {
        //使用强制类型转换，将acsill码转换成对应的数字
        if (ascillArray[(int)A[i]]==0)
        {
            printf("%c", A[i]);
            ascillArray[(int)A[i]] = 1;
        }
    }
    printf("\"\n");
}

void convert(char A[]){
    int i,num,temp;
    int ascillArray[256];
    int count,pow;
    memset(ascillArray, 0, sizeof(ascillArray));
    printf("3. After trimmed and convert, the string is \"");
    for (i = 0; A[i] != '\0'; ++i)
    {
        num = (int)A[i];
        count=4;    //计算后四位
        temp=0;
        if(ascillArray[num]==0){
            ascillArray[num] = 1;
            if((num>=(int)'0' && num<=(int)'9') || (num>=(int)'A' && num<=(int)'F') || (num>=(int)'a' && num<=(int)'f')){
                while(count>0){
                    count--;
                    switch(count){
                        case 3: pow=8;break;
                        case 2: pow=4;break;
                        case 1: pow=2;break;
                        case 0: pow=1;break;
                    }
                    temp += (num%2)*pow;
                    num = num/2;
                }
                printf("%c", num*16+temp);
            }else{
                printf("%c", num);
            }
        }
    }
    printf("\"\n");
}
