#include <stdio.h>

void main()
{
	int p, q;
	printf("Enter the number p:");
	scanf("%d", &p);
	printf("Enter the number q:");
	scanf("%d", &q);
	
	printf("%d&&%d : %d\n", p, q, p&&q);
	printf("%d<%d&&%d>%d : %d\n", p, q, p, q, p<q&&p>q);
	printf("%d<%d||%d>%d : %d\n", p, q, p, q, p+q||p-q);
	printf("!%d : %d\n", q, !q);
}