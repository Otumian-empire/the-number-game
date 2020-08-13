#include <stdio.h>
// #include <unistd.h>
// #include<stdlib.h>
#include <time.h>

void delay(int val)
{
	clock_t start = clock();
	while (clock() < (start + (val * 5)));
	
}

int main(int argc, char const *argv[])
{
	for (int i = 0; i < 5; i++)
	{
		delay(i);
		printf("%d", i);
	}
	printf("\n");
	return 0;
}
