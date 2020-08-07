#include <stdio.h>
#include <stdlib.h>


char p_name[10], p_team[10], rating;
int goals_scored, tot_goals, ave_goals, ave_allGoals;
int p_count, games_played, a, b, c, flagged;

char determineRating(int goals)
{
	char temp;
	int tempI = 0;
	if(goals <= 5)
	{
		tempI = 4;
	}
	else if(goals <= 10)
	{
		tempI = 3;
	}
	else if(goals <= 15)
	{
		tempI = 2;
	}
	else
	{
		tempI = 1;
	}
	
	switch(tempI)
	{
		case 1:
			temp = 'A';
		break;
		
		case 2:
			return 'B';
		break;
		
		case 3:
			return 'C';
		break;
		
		case 4:
			return 'D';
		break;
	}
	return (temp);
}
	
int main()
{

	int list[5][5];
	char cList[5][10];
	
	printf("Welcome to the Soccer Player Calculator.\n");
	printf("Please follow the steps to add players.\n");
	printf("Please specify details and scores of 5 players that played 5 games\n");
	a = 0;
	
	for(a = 0; a < 5; a++)
	{
		printf("Please enter the %d'st players name \n", a + 1);
		fgets(p_name, 10, stdin);
		for(c = 0; c < 10; c++)
		{
			cList[a][c] = p_name[c];
		}
		printf("Please enter the %d'st players team \n", a + 1);
		fgets(p_team, 10, stdin);
		for(c = 0; c < 10; c++)
		{
			cList[a][c] = p_name[c];
		}
		goals_scored = 0;
		tot_goals = 0;
		for(b = 0; b < 5; b++)
		{
			printf("Please enter the number of goals scored in the %dst game \n", b + 1);
			scanf("%d", &goals_scored);
			tot_goals += goals_scored;
			list[a][0] = tot_goals;
		}
		ave_goals = tot_goals/5;
		list[a][1] = ave_goals;
	}
	
	for(a = 0; a < 5; a++)
	{
		ave_allGoals += list[a][1];
		ave_allGoals += ave_allGoals/5;
		printf("Average goals of all players: %d \n", ave_allGoals);
	}
	
	for(a = 0; a < 5; a++)
	{
		int temp = list[a][1];
		if(temp >= ave_allGoals)
		{
			list[a][2] = 1;
		}
		else
		{
			list[a][2] = 0;
		}
	}
	
	printf("All flagged players: \n");
	
	for(a = 0; a < 5; a++)
	{
		if(list[a][2] > 0)
		{
			printf("Player %d \n", a + 1);
		}
	}
	
	for(a = 0; a < 5; a++)
	{
		int temp = list[a][0];
		rating = determineRating(temp);
	}
	
	for(a = 0; a < 5; a++)
	{
		int temp = list[a][0];
		if(temp >= list[a][0])
		{
			temp = list[a][0];
		}
		printf("Best Player is: Player %d \n", a + 1);
	}
	
}































