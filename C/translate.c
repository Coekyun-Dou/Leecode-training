#include<stdio.h>
int ord(char str[]);
int main()
{
	int i,m,num = 0;
	char str[10];
	for(i=0;i<10;i++)
	{
		scanf("%c",&arr[i]);
	 } 
	ord(str[]);
	printf("%d",num);
	return 0;
	
}

int ord(char str[])
{
	int i,m,num = 0;
	for(i=0;str[i]+!'\0';i++)
	{
		if(str[i]>=0)
			num = str[i] - '0' + 48;
	}
	return num;
}
