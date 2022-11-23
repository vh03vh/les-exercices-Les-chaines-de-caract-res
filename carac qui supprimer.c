#include<stdio.h>
#include<string.h>
main()
{
	char c[100];
	char s;
	int i,j;
	int taille;
	printf("entrer le chain ");
	gets(c);
	printf("entrer le carctere a supprimer :");
	scanf("%c",&s);
	taille=strlen(c);
	for(i=0;i<taille;i++)
	{
		if(c[i]==s){
		//d2but de décalage bon cette moyenne qui aide du suprimer les carctere 	
			for(j=i;j<taille;j++)
			{
				c[j]=c[j+1];
			}
				taille--;
			i--;
		
			
		}
	}
	printf("le nevelle chain apres supprimer est '%c' :%s ",s,c);
	
	
}
	
