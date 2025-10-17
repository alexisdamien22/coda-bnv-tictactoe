#include <stdlib.h>
#include <stdio.h>
#include "tic-tac-toe.h"

void main()
{
    int v = 0;
    char term;
    int diff = -1;
    while(v == 0)
    {
        printf("Choisissez votre difficulté (entre 0 et 3):\n");
        if(scanf("%d%c", &diff, &term) != 2 || term != '\n')
	    {
	    	printf("Choix inexistant...\n");
	    	term = '\n';
	        diff = -1;
        }
	    else
	    {
		    if(diff < 0 || diff > 3)
		    {
		    	printf("Choix inexistant...\n");
		    }
		    else
		    {
		        tictactoe(diff);
                v = 1;
            }
        }
    }
}