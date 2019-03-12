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
	
