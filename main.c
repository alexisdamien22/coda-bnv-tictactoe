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
		// should've been between 0 and 3 but last 2 bot were too difficult
		// letter block code don't work (l 15-20)
        printf("Choisissez votre difficulté (entre 0 et 1):\n");
        if(scanf("%d%c", &diff, &term) != 2 || term != '\n')
	    {
	    	printf("Choix inexistant...\n");
	    	term = '\n';
	        diff = -1;
        }
	    else
	    {
		    if(diff < 0 || diff > 1)
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