#include<stdio.h>
#include<string.h>
main()
{
	char c[100];
	int i,n;
	printf("veuillez saisir une chain ");
	gets(c);
	n=0;
	for(i=0;c[i]!='\0' ; i++)
		n++;
		printf("la longeur de chain est:%d\n",n);
		
		
		
		return 0;
	
	
	
	
	
}
