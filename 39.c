#include<stdio.h>
int type1(int a[]);
int type2(int a[]);
int date(int a[]);
int main()
{
    int a[3],flag1=0,flag2=0;
    char *p[13]={"","January","February","March","April","May","June","July","August","September","October","November","December"};
    scanf("%d/%d/%d",&a[0],&a[1],&a[2]);
    flag1=type1(a);
    flag2=type2(a);
    if(flag2&&flag1)
    {
        printf("%ld",date(a));
    }
    else if(flag1)
    {
        printf("%s %d, 20%d",p[a[0]],a[1],a[2]);
    }
    else if(flag2)
    {
        printf("%s %d, 20%d",p[a[1]],a[2],a[0]);
    }
    system("pause");
    return 0;
}
int type1(int a[])
{
    int flag=1;
    if((a[0]<1)||(a[0]>12)||
    (a[0]<=7&&a[0]%2==1&&a[1]>31)||
    (a[0]!=2&&a[0]<=7&&a[0]%2==0&&a[1]>30)||
    (a[0]>=8&&a[0]%2==0&&a[1]>31)||
    (a[0]>=8&&a[0]%2==1&&a[1]>30)||
    (a[0]==2&&((a[2]+2000)%400==0||((a[2]+2000)%4==0&&(a[2]+2000)%100!=0))&&a[1]>29)||
    (a[0]==2&&!((a[2]+2000)%400==0||((a[2]+2000)%4==0&&(a[2]+2000)%100!=0))&&a[1]>28))
    flag=0;
    return flag;
}
int type2(int a[])
{
    int flag=1;
    if((a[1]<1)||(a[1]>12)||
    (a[1]<=7&&a[1]%2==1&&a[2]>31)||
    (a[1]!=2&&a[1]<=7&&a[1]%2==0&&a[2]>30)||
    (a[1]>=8&&a[1]%2==0&&a[2]>31)||
    (a[1]>=8&&a[1]%2==1&&a[2]>30)||
    (a[1]==2&&((a[0]+2000)%400==0||((a[0]+2000)%4==0&&(a[0]+2000)%100!=0))&&a[2]>29)||
    (a[1]==2&&!((a[0]+2000)%400==0||((a[0]+2000)%4==0&&(a[0]+2000)%100!=0))&&a[2]>28))
    flag=0;
    return flag;
}
int date(int a[])
{
    int d1=0,d2=0;
    int m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    d1=(a[2]+2000)*365;
    for(int i = 1;i <a[0];i++)
    {
        d1=d1+m[i];
    }
    if(a[0]==2&&a[1]==29)d1=d1-1;
    d1=d1+a[1];
    if(a[0]==1||(a[0]==2&&a[1]<=28))d1=d1+((a[2]+2000)-1)/4-((a[2]+2000)-1)/100+((a[2]+2000)-1)/400;
    else d1=d1+(a[2]+2000)/4-(a[2]+2000)/100+(a[2]+2000)/400;
    d2=(a[0]+2000)*365;
    for(int i = 1;i <a[1];i++)
    {
        d2=d2+m[i];
    }
    if(a[1]==2&&a[2]==29)d2=d2-1;
    d2=d2+a[2];
    if(a[1]==1||(a[1]==2&&a[2]<=28))d2=d2+((a[0]+2000)-1)/4-((a[0]+2000)-1)/100+((a[0]+2000)-1)/400;
    else d2=d2+(a[0]+2000)/4-(a[0]+2000)/100+(a[0]+2000)/400;
    if(d1>d2)return d1-d2;
    else return d2-d1;
}