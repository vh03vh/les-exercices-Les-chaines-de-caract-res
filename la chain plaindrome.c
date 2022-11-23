#include<stdio.h>
#include<string.h>
main()
{
	
	char m[100];
	char r[100];
	int n;
	printf("veuillez une chain :");
	gets(m);
	strcpy(r,m);
	strrev(r);
	  n=strcmp(r,m);
	if(n==0){
		printf(" la chain est plaindrome ");

	}
	else{
		
		printf("la chain nest pas plaindrome ");
	}
	
	
	return 0;
}
