#include<stdio.h>
#include<stdlib.h>
#define INF 99999999
void floyd_warshall(int vertices , int A[vertices][vertices])
{
	int i , j , k;
	for(k = 0 ; k < vertices ; k++)
	{
		for(i = 0 ; i < vertices ; i++)
		{
			for(j = 0 ; j < vertices ; j++)
			{
				if(A[i][k] + A[k][j] < A[i][j])
					A[i][j] = A[i][k] + A[k][j]; 
			}
		}
	}
	printf("\nThe cost matrix after traversal through floyd-warshall algorithm----\n");
	for(i = 0 ; i < vertices ; i++)
	{
		for(j = 0 ; j < vertices ; j++)
		{
			if(A[i][j] == INF)
				printf("INF ");
			else
				printf("%d ",A[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int vertices , i , j;
	printf("Enter the number of vertices : ");
	scanf("%d",&vertices);
	int cost[vertices][vertices];
	printf("\nEnter the value -1000 where edge is not present.\n");
	printf("\nEnter the cost matrix : \n");
	for(i = 0 ; i < vertices ; i++)
		for (j = 0 ; j < vertices ; j++)
			scanf("%d",&cost[i][j]);
	for(i = 0 ; i < vertices ; i++)
	{
		for (j = 0 ; j < vertices ; j++)
		{
			if(cost[i][j] == -1000)
				cost[i][j] = INF;	
		}	
	}
	printf("\nThe cost matrix entered is : \n");
	for(i = 0 ; i < vertices ; i++)
	{
		for(j = 0 ; j < vertices ; j++)
		{
			if(cost[i][j] == INF)
				printf("INF ");
			else
				printf("%d ",cost[i][j]);
		}
		printf("\n");
	}
	floyd_warshall(vertices, cost);
	return 0;
}
