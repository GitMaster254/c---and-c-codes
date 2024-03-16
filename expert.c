#include <stdio.h>
int main()
{
	int row;
	int colm;
	row=6;
	while(row>=0)
	{
		colm=0;
		while(colm<=row)
		{
			printf(" * ");
			colm++;
		}

	row--;
	printf("\n");
	}
	}
