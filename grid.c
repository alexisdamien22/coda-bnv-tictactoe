#include <stdlib.h>
#include <stdio.h>

void grid(char *plays)
{
	printf(" %c | %c | %c \n",plays[0],plays[1],plays[2]);
	printf("---+---+---\n");
	printf(" %c | %c | %c \n",plays[3],plays[4],plays[5]);
	printf("---+---+---\n");
	printf(" %c | %c | %c \n",plays[6],plays[7],plays[8]);
}