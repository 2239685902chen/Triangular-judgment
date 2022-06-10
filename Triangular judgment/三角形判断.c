#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int q = 0, w = 0, e = 0;
	while (scanf("%d%d%d", &q, &w, &e) != EOF)
	{
		if (q + w > e && q + e > w && w + e > q)
		{
			if (!(q - w) && !(q - e) && !(w - e))
			{
				printf("Equilateral triangle!\n");
			}
			else if (!(q - w) || !(q - e) || !(w - e))
			{
				printf("Isosceles triangle!\n");
			}
			else
			{
				printf("Ordinary triangle!\n");
			}
		}
		else
		{
			printf("Not a triangle!\n");
		}
	}
	return 0;
}