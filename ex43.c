#include<stdio.h>

int main()
{
    int m1,m2,m3,m4,m5,total,avg;
    printf("enter the marks: ");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    total = m1+m2+m3+m4+m5;
    avg = total/5;
    if(avg>=80)
        printf("A grade....");
    else if(avg>=60 && avg<=79)
        printf("B Grade....");
    else if(avg<59)
        printf("C grade....");
    return;
}