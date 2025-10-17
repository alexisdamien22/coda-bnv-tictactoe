#include <stdlib.h>
#include <stdio.h>

int win(char *str)
{
	int W_comb[8][3] = {{0,1,2},{3,4,5},{6,7,8},{0,3,6},{1,4,7},{2,5,8},{0,4,8},{2,4,6}};
	int i = 0;
	int j = 0;
	int W_check = 0;
	int draw_check = 0;
	while(i <= 8)
	{
		if(str[i] != ' ')
		{
			draw_check++;
		}
		i++;
	}
	if(draw_check == 9)
	{
		return(2);
	}
	i = 0;
	while(i <= 7)
	{
		while(j <= 2)
		{
			if(str[W_comb[i][j]] == 'x')
			{
				W_check++;
			}
			j++;
		}
		if (W_check == 3)
		{
			return(1);
		}
		i++;
		W_check = 0;
		j = 0;
	}
	i = 0;
	j = 0;
	while(i <= 7)
	{
		while(j <= 2)
		{
			if(str[W_comb[i][j]] == 'o')
			{
				W_check++;
			}
			j++;
		}
		if (W_check == 3)
		{
			return(-1);
		}
		i++;
		W_check = 0;
		j = 0;
	}
	i = 0;
	j = 0;
	return(0);
}