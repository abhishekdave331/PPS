#include <stdio.h>
void main()
{
	int x, y;
	printf("Enter value of x:");
	scanf("%d", &x);
	printf("Enter value of y:");
	scanf("%d", &y);

	printf("%d==%d : %d\n", x, y, x==y);
	printf("%d!=%d : %d\n", x, y, x!=y);
	printf("%d<%d : %d\n", x, y, x<y);
	printf("%d>%d : %d\n", x, y, x>y);
	printf("%d<=%d : %d\n", x, y, x<=y);
	printf("%d>=%d : %d\n", x, y, x>=y);
}
