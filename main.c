#include <stdio.h>
#include <stdlib.h>

int main() {

	int scoreBoard[2] = {0, 0};
	int numberOfChances = 3, guess = 0, secretNumber = 12;
	int playGame = 1;

	while (playGame > 0)
	{
		while (numberOfChances > 0)
		{
			printf("Scores after the game\n");
			printf("Player 1: %d\n", scoreBoard[0]);
			printf("CPU:      %d\n\n\n", scoreBoard[1]);

			printf("enter secret number:");
			scanf("%d", &guess);

			if (guess == secretNumber)
			{
				scoreBoard[0] += 1;
			}
			else
			{
				scoreBoard[1] += 1;	
			}

			numberOfChances--;

			system("clear");
		}

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
