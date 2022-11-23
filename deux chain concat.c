#include<stdio.h>
#include<string.h>
main()
{
	
	char a[100];
	char b[100];
	char *Pa=a;
	char *Pb=b;
	printf(" entre le premier chain : ");
	gets(a);
		printf(" entre le deuxiem chain : ");
	gets(b);
	Pa=Pa+strlen(a);
	while(*Pb != '\0')
	{
		*Pa=*Pb;
		*Pa++;
		*Pb++;
		
	}	
	*Pa='\0';
	printf(" le chain concat est  : %s ", a );
	
	
}
