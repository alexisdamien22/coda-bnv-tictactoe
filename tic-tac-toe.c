#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "grid.h"
#include "win.h"
#include "robot.h"

void tictactoe(int diff)
{
	int bot_play;
	int w_p;
	int W = 0;
	char term;
	int current_play;
	char *plays = malloc(11*sizeof(char));
	//plays 10 = human move counter
	plays[10] = '\0';
	int i = 0;
	while(i<=8)
	{
		plays[i]=' ';
		i++;
	}
	plays[9] = 0
	system("clear");
	grid(plays);
	while(W == 0)
	{
		printf("Choisissez où jouer :\n");
		// letter block code don't work (l 31-36)
		if(scanf("%d%c", &current_play, &term) != 2 || term != '\n')
		{
			printf("Coup invalide...\n");
			term = '\n';
			current_play = -1;
		}
		else
		{
			if(current_play < 0 || current_play > 8)
			{
				printf("Coup invalide...\n");
			}
			else
			{
				if(plays[current_play]!=' ')
				{
					printf("Coup invalide...\n");
				}
				else
				{
					plays[current_play]='x';
					plays[10]++;
					system("clear");
					grid(plays);
					W = win(plays);
					if (W == 0)
					{
						sleep(1);
						bot_play = robot(plays,diff);
						plays[bot_play] = 'o';
						W = win(plays);
						grid(plays);
						printf("\n");
					}
				}
			}
		}
	}
	if(W == 2)
	{
		system("clear");
		printf("Égalité !\n");
	}
	else if(W == 1)
	{
		system("clear");
		printf("C'est gagné !\n");
	}
	else if(W == -1)
	{
		system("clear");
		printf("C'est perdu !\n");
	}
}