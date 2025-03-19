#include <stdio.h>

void main()
{
	float a = 646616.10;
	float b = 234732.45;

	float c = a + b;

	printf("%.2lf\n", a);
	printf("%.2lf\n", b);
	printf("%.2lf\n", c);

	if (c == 881348.55)
		printf("OK!\n");
	else
		printf("Error!\n");
}