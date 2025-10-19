#include <stdlib.h>
#include <stdio.h>

int robot(char *plays,int diff)
{
	int i = 0;
	int random_number;
	if(diff == 0)
	{
		while(i <= 8)
		{
			if(plays[i] == ' ')
			{
				return(i);
			}
			else
			{
				i++;
			}
		}
		i = 0;
	}
	else if(diff == 1)
	{
		while(i == 0)
		{
			random_number = rand() % 9;
			if(plays[random_number] == ' ')
			{
				return(random_number);
				i = 1;
			}
		}
		i = 0;
	}
	else if(diff == 2)
	{

	}
	else if(diff == 3)
	{
		if (plays[9] == 1)
		{
			if (plays[0] == 'x' || plays[2] == 'x' || plays[6] == 'x' || plays[8] == 'x')
			{
				return(4);
			}
		}
		else if (plays[9] == 2)
		{

		}
		else if (plays[9] == 3)
		{

		}
		else if (plays[9] == 4)
		{

		}
		else
		{
			while (i<=9)
			{
				if (plays[i] == ' ')
				{
					return(i);
				}
				else
				{
					i++;
				}
			}
		}
		i = 0;
	}
}
