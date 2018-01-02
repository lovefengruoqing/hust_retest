#include <stdio.h>

#define MAXSIZE 100
void manipulate(char str1[], char str2[]);
void quickSort(int num[], int l, int r);     //对数组进行快速排序

int main(){
    //str1、str2为给定的字符串
    char str1[] = "strjkljkljing";
    char str2[] = "buff";
    manipulate(str1, str2);

    return 0;
}

void manipulate(char str1[], char str2[]){
    //字符拼接
    int i=0,j=0,k=0;
    while(str1[i]!='\0')i++;
    while(str2[j]!='\0')j++;
    char temp[i+j+1];
    i=j=0;
    while(str1[i]!='\0')temp[k++]=str1[i++];
    while(str2[j]!='\0')temp[k++]=str2[j++];
    temp[k]=str2[j];
    printf("The concat string is:\t");
    printf("%s",temp);  //输出拼接后的字符串
    printf("\n");

    //奇子字符串
    printf("The odd substring is:\t");
    i=0;
    while(i<k){printf("%c",temp[i]);i+=2;}
    printf("\n");

    //偶子字符串
    printf("The even substring is:\t");
    i=1;
    while(i<k){printf("%c",temp[i]);i+=2;}
    printf("\n");

    int stack1[MAXSIZE], top1=-1;   //设置简单的栈，并当作数组进行排序
    int stack2[MAXSIZE], top2=-1;
    i=0;
    while(i<k){
        if(i%2==0){
            stack1[++top1] = temp[i];   //强制将字符赋给整型变量
        }else{
            stack2[++top2] = temp[i];
        }
        i++;
    }
    quickSort(stack1,0,top1);
    quickSort(stack2,0,top2);

    printf("After being sorted, the odd substring is:\t");
    while(top1!=-1){printf("%c", stack1[top1--]);}
    printf("\n");

    printf("After being sorted, the even substring is:\t");
    while(top2!=-1){printf("%c", stack2[top2--]);}
    printf("\n");
}

//快排实现算法
void quickSort(int num[], int l, int r){
    if(l<r){
        int temp = num[l];
        int i=l,j=r;
        while(i<j){
            while(num[j]<temp&&i<j)j--;
            if(i<j){
                num[i++]=num[j];
            }
            while(num[i]>temp&&i<j)i++;
            if(i<j){
                num[j--]=num[i];
            }
        }
        num[i]=temp;
        quickSort(num,l,i-1);
        quickSort(num,i+1,r);
    }
}
