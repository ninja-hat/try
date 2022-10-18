#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
int i;
typedef struct
{
	char id[50];char salary[50];char work_exp[50];
}employee;
int main()
{
	FILE *empl=fopen("Employee records.txt","r");if(empl==NULL){printf("\nFile does not exist!\n");exit(1);}
	char ch[50];int num=0;char buffer[500];
	while(fscanf(empl,"%s\n",buffer)!=EOF)
	{
		num+=1;
	}
	printf("%d",num);
	return 0;
}
