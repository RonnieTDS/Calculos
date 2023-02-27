#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <string.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	
		
	int n1,n2;
		
		printf("Insira o primeiro numero:\n");
		scanf("%d",&n1);
		
		printf("Insira o segundo numero:\n");
		scanf("%d",&n2);
		
		
		if(n1==n2){
			printf("Resultado  da multiplicação: %d \n",n1*n2);}
			
		if(n1>n2){
			printf("Resultado  da subtração: %d\n",n1-n2);
		}
			
		if(n1<n2){
			printf("Resultado  da soma: %d\n",n1+n2);}
				
			
			
		
	
	
	return 0;
}

