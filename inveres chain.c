#include<stdio.h>
#include<string.h>
main()
{
	char m[100];
	int i;
	printf("veuillez saisir une chain : ");
	gets(m);
		for(i=strlen(m)-1;i>=0;i--)

	{
		printf("%c",m[i]);
	}
	return 0;
	
	
	
	
}
