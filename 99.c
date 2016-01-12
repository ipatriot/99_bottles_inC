#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 10;

	while (i > 0) {
		int minus = i - 1;

		// You can't really take an enter in a printf statement, resaerch how

		printf("%d bottles of beer on the wall, %d bottles of beer\n", i, i );
		printf("Take one down and pass it around, %d bottles of beer on the wall \n", minus);
		i--;
	}

	return 0;
}