#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>


int genRandNum(int minLimit, int maxLimit)
{
    srand(time(NULL));

    return (rand() % maxLimit) + minLimit;
}


int main()
{
    system("clear");
    
    printf("loading");
    
    for (int i = 0; i < 5; i++)
    {
        printf(" .");
        sleep(1);
    }
    
    sleep(1);
    system("clear");
    sleep(1);
    
    
	int scoreBoard[2] = {0, 0};
	int numberOfChances = 3, guess = 0, secretNumber = genRandNum(1, 10);
	int playGame = 1;
    
    
	while (playGame > 0)
	{
		while (numberOfChances > 0)
		{
			printf("Scores after the game\n");
			printf("Player 1: %d\n", scoreBoard[0]);
			printf("CPU:      %d\n\n\n", scoreBoard[1]);
			sleep(1);
			

			printf("enter secret number: ");
			scanf("%d", &guess);
			system("clear");

			if (guess == secretNumber)
			{
				scoreBoard[0] += 1;
			}
			else
			{
				scoreBoard[1] += 1;
			}

			numberOfChances -= 1;

			system("clear");
		}
		
		
		sleep(1);
		printf("Do you still want to play: ");
		scanf("%d", &playGame);

		if (playGame > 0)
		{
			numberOfChances = 3;
		}

		system("clear");
	}

	printf("Good game\n");

    return 0;
}

