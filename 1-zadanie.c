#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define n 10
void zjednotenie(int mnozA[],int mnozB[]) {
	int i;
	for(i=0;i<n;i++)
		{
		mnozA[i]=rand()%25;
		printf(" %d ",mnozA[i]);
		}

	for(i=0;i<n;i++)
			{
			mnozB[i]=rand()%25;
			printf(" %d ",mnozB[i]);
			}
			
		printf("\n");
			printf("Mnozina C");
			printf("\n");\
			
		for(i=0;i<n;i++)
			{printf("%d ",mnozA[i]);
			printf("%d ",mnozB[i]);}
		
}
void prienik(int mnozinaA[],int mnozinaB[],int mnozinaC[] ){
	int i,j,a,p=0;
	for(i=0;i<n;i++){
		mnozinaA[i]=rand()%25;
		printf("%d ",mnozinaA[i]);
	}

	printf("\n");
	
	for(i=0;i<n;i++){
		mnozinaB[i]=rand()%25;
		printf(" %d ",mnozinaB[i]);
		
	}
	printf("\n");
	printf("Mnozina C");
	printf("\n");
	
	
	for(i=0;i<n;i++){
		j=0;
		a=0;
		while(mnozinaC[j]!=NULL){
			if(mnozinaA[i]==mnozinaC[j]){
				a=1;
				break;
			}
			j++;
		}
		if (a==0) {
			mnozinaC[j]=mnozinaA[i];
			p++;	
		}
	}
	for(i=0;i<n;i++){
		j=0;
		a=0;
		while(mnozinaC[j]!=NULL){
			if(mnozinaB[i]==mnozinaC[j]){
				a=1;
				break;
			}
			j++;
		}
		if (a==0) {
			mnozinaC[j]=mnozinaB[i];
			p++;
		}
	}
	for(i=0;i<p;i++){
		printf(" %d ",mnozinaC[i]);
	}
	
}
