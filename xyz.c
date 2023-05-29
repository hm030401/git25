#include<stdio.h>
int main(int argc,char *argv[])

{
	char st[10];
	printf("%d\n",argc);

	for(int i=1;i<argc;i++)
	{
    		st[i] = argv[i];
		printf("%s\n",st[i]);
	}
}
