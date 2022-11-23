#include<stdio.h>
#include<string.h>
main()
{
	 char m1[100];
	char m2[100];
	int n,i;
	printf("please entre le premier chain : ");
	gets(m1);
	
		printf("please entre le deuximme chain : ");
	gets(m2);
	 n=0;
	if(strlen(m1)!=strlen(m2)){
		printf("les deux chain n'ont pas le meme longeur");
	}
	else{
		for(i=0;i<strlen(m1);i++){
			if(m1[i]!=m2[i])
			n++;
			
		}
		printf("la distance de hamming est:%d",n);
	}
	return 0;
}
