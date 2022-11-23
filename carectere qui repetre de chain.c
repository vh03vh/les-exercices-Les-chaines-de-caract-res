#include<stdio.h>
#include<string.h>
main()
{
	char t[100];
	int frq[100];
	int i,j,conpture;
	int max, indice_max;
	printf("veuillez saisir une chaine ");
	gets(t);
	for(i=0;i<strlen(t);i++){
		frq[i]= -1;
	}
		for(i=0;i<strlen(t);i++){
			
			conpture=1	;
	
			for(j=i+1;j<strlen(t);j++){
				
				if(t[i]==t[j]){
					conpture++;
					frq[j]=0;	
				}
			}
			if(frq[i]!= 0){
			
				frq[i]=conpture;
			}
	
		}
	 	
		
		max=frq[0];
		indice_max=0;
		for(i=1;i<strlen(t);i++)
		{
			
			if(frq[i]>max){
				max= frq[i];
				indice_max=i;
			}
			
		}
		printf("le caracter se repeter le plus dans le chain est  '%c': %d fois  ",t[indice_max],max);
		
		
		
		
		
		
		
		
		
}

