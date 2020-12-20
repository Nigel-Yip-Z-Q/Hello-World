#include<stdio.h>
#include<math.h>
#include<iostream>
int main(void)
{
	char a[100];
	char no;
	int i;
	printf("请输入一些字符：");
	scanf("%s",&a[i]);
	printf("请输入你想要删除的字符："); 
	for(i=0;i<=100;i++)
	{    
	    scanf("%s",&no);
	    if(a[i]=no)
	    {
	    	continue;
		}
	}
	printf("%s",a[i]);
} 
