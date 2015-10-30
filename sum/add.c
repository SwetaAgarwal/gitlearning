#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define A 5
#define B 7
int s;
int main()
{
	int a,b,sum;
	int *ab;
	double power;
	printf("Enter the numbers : ");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("\n Sum= %d",sum);
	sum=A+B;
	printf("\n Sum= %d",sum);
//	power=pow(A,3);
	ab=(int *)malloc(20);
	power=sqrt(A);
	printf("\nSqr root : %f\n",power);
	free(ab);
	return 0;
}
