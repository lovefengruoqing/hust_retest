#include "stdio.h"

int find(char *p,char *q,char *t1,char *t2);
void rtl(char *p);
void ltr(char *q);
int main(int argc, char const *argv[])
{
    char *p,*q,*r,*t1,*t2,*t3,*t4;
    int max,temp;
    char str[]="She say:Madam,I'm Adam.";
    p=str;  //将p指向str

    while(*p!='\0'){
        printf("%c", *p);
        p++;
    }
    printf("\n");
    q=p-1;
    p=str;
    ltr(p);
    rtl(q);
    t1=p;
    t2=q;

    printf("=====test1=====\n");
    max = find(p,q,t1,t2);
    printf("=====test2=====\n");
    t3=t1;
    t4=t2;
    // while(t2-str>max)
    // {
    //     printf("=====test=====\n");
    //     p=str;
    //     q=t2;
    //     temp=find(p,q,t1,t2);
    //     if(temp>max){
    //         max=temp;
    //         t3=t1;
    //         t4=t2;
    //     }
    // }

    // while(t3!=t4){
    //     printf("%c", *t3);
    //     t3++;
    // }
    // printf("%c\n", *t4);

    return 0;
}

int find(char *p,char *q,char *t1,char *t2){
    int flag=1,count=0;
    printf("p= %d, *q=%d\n",p,q);
    while(p<q){

        //跳过非字母字符
        ltr(p);
        rtl(q);
        printf("p= %d, *q=%d\n",p,q);
        if (*p==*q||*p-'a'==*q-'A'||*p-'A'==*q-'a')
        {
            //保存当前的p、q指针的状态
            if (flag==1)
            {
                flag=0;
                t1=p;
                t2=q;
            }
            p++;
            q--;
            count+=2;
        }else{
            q=t2;
            flag=1;
            p=t1+1;
            count=0;
        }
        // printf("p= %c, *q=%c\n",*p,*q);
        // p++;q--;
        
    }
    printf("%d\n", count+1);
    return count+1;
}

void rtl(char *p){
    while(!((*p-'a'>=0&&'z'-*p>=0)||(*p-'A'>=0&&'Z'-*p>=0))){
        p++;
    }
}

void ltr(char *q){
    while(!((*q-'a'>=0&&'z'-*q>=0)||(*q-'A'>=0&&'Z'-*q>=0))){
        q--;
    }
}
