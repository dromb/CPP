#include <stdio.h>
#include <math.h>

int main()
{
	int sum=0, i=10, n;
	
	for(i=20; i; i--)
	{
		printf("Unesi broj bodova\n");
		scanf("%d", &n);
		sum+=n;
		i--;
	}
	printf("Ukupno %d\n", sum);
	printf("Prosjecno %f\n", (float)sum/10);
}
