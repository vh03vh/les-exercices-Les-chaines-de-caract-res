#include<stdio.h>
#include<string.h>
const char * supprission(char*c ,const char s){
	
		int i,j;
	int taille;
		taille=strlen(c);
	for(i=0;i<taille;i++)
	{
		if(c[i]==s){
		//début de décalage bon cette moyenne qui aide du suprimer les carctere 	
			for(j=i;j<taille;j++){
				c[j]=c[j+1];
			}
				taille--;
				i--;		
		}
	}
	return c;
}
main()
{
	char c[100];
	char s;
	
	printf("entrer le chain ");
	gets(c);
	printf("entrer le carctere a supprimer :");
	scanf("%c",&s);	
	const char * resultat =supprission(c,s);
	
		printf("le nevelle chain apres supprimer est '%c' :%s ",s,resultat);
}
