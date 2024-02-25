

#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,j,k,m,n,p,q,sum,choice;
	int *A[3],*B[3],*C[3];
	printf("enter the order of matrix 1\n");
	scanf("%d%d",&m,&n);
	printf("enter the order of matrix 2\n");
	scanf("%d%d",&p,&q);
	for(i=0;i<m;i++){
		A[i]=(int*)malloc(n*sizeof(int));}
	for(i=0;i<p;i++){
		B[i]=(int*)malloc(q*sizeof(int));}
	 printf("enter elements of matrix 1\n");
			for(i=0;i<m;i++){
 					for(j=0;j<n;j++){
  							scanf("%d",A[i]+j);
					}
			}
	printf("enter elements of matrix 2\n");
			for(i=0;i<p;i++){
 				for(j=0;j<q;j++){
  						scanf("%d",B[i]+j);	
				}
			}
	while(1)
	{
	   	printf("\n 1->Addition of matrix  2->Multiplication of matrix   3->Exit");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: 
				if(m!=p || n!=q){
					printf("Matrix order mismatch - Addition not possible\n");}
				else{
					for(i=0;i<m;i++){
						C[i]=(int*)malloc(n*sizeof(int));
					}
					for(i=0;i<m;i++){
 						for(j=0;j<n;j++){
  							(*(C[i]+j))= ( *(A[i]+j)+ *(B[i]+j));
						}
					}
					printf("\n Result of matrix addition:\n");
					for(i=0;i<m;i++)
					{
 						for(j=0;j<n;j++)
						{
							printf("\t%d",*(C[i]+j));
						}
						printf("\n");
					}
				}
					break;	
			case 2:
				if(n!=p)
					printf("\nmatrices cannot be multiplied\n");
				else{
					for(i=0;i<p;i++)
					{
						C[i]=(int*)malloc(q*sizeof(int));
					}	

					for(i=0;i<m;i++)
						for(j=0;j<q;j++)
						{
						   (*(C[i]+j))=0; 
						   for(k=0;k<n;k++)
        						(*(C[i]+j))+=((*(A[i]+k)) * (*(B[k]+j)));
						}
					printf("\n Result of matrix Multiplicationn:\n");
					for(i=0;i<m;i++)
					{
 						for(j=0;j<q;j++)
						{
							printf("\t%d",*(C[i]+j));
						}
						printf("\n");
					}
				}
					break;
			case 3: exit(1);
			}
		}
}	


