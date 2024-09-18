#include<stdio.h>

int main()
{
	int n,temp;
	printf("enter the number: ");
	scanf("%d",&n);
	temp = n;
	n = n%7;
	if(n==1)
		printf("%d week and Monday",temp%7);
	if(n==2)
		printf("%d week and Tuesday",temp%7);
	if(n==3)
		printf("%d week and Wed",temp%7);
	if(n==4)
		printf("%d week and Thursday",temp%7);
	if(n==5)
		printf("%d week and Friday",temp%7);
	if(n==6)
		printf("%d week and Saturday",temp%7);
	if(n==7)
		printf("%d week and Sunday",temp%7);
//	else
//		printf("Enter the Valid Input");
}