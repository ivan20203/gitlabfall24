//contributors
//GP
//
//



#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

//place function prototypes here

int rps_game(char handGuess, char cpuGuess);

int main(int argc, char *argv[])
{
	int choice = 0;
	char name[30] = "bob";
	srand(time(NULL));
	
	printf("Please enter your name: ");
	scanf("%s",name);
	printf("Hello %s welcome to the RPG Game!\n",name);
	while(choice != 99)
	{
		puts("You find yourself in a dark room and you are not sure how you got here.");
		puts("As you look around you see the room has 55 doors, each labeled with a number.");
		puts("The room starts filling with water and you must choose a door to open or you will likely drown. you may quit anytime by selecting option 99.");
		puts("What door do you choose?");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
//nathan

				int wins = 0;
				int choice1 = 0;

				int random = 1 + rand() % 21; //random number for 1-20 game
				int guess = 0; //number guessing game guesses
				int tries = 3;
				int i = 0;

				char scrambled_word[] ="extraordinary"; //word game
				char wordGuess[20];

				int result;
				int random_rps = rand() % 3; //random letter for rps game
				char choices [] = {'r', 'p', 's'}; //rock paper scissors
				char handGuess;
				char cpuGuess;

				printf("\nThe door slams behind you and you realize you probably should've chosen another room.\n");
				printf("Fortunately, it looks like the mechanical door will allow you to leave if you can beat it in at least 3 games of its choosing.\n\n");
				//gather a total of 3 wins

				while(wins < 3)
				{

					printf("Enter a number (1-3) to select a game.\n\n");

					printf("1. Word unscramble\n");
					printf("2. Number guess\n");
					printf("3. Rock, paper, scissors\n\n");

					scanf("%d", &choice1);

					switch(choice1)
					{
						case 1:
							{ 
								printf("\nUnscramble the word to win!\n\nScrambled word: soeintrxycau\n");
								printf("Your guess: ");

							        scanf("%s", wordGuess);

								if(strcmp(wordGuess, scrambled_word)== 0)
								{
									wins = wins + 1;
									printf("\nYou win! Nicely done.\n");
									printf("Total wins: %d\n\n", wins);
								}
								else 
								{
									printf("\nBzzzt. Incorrect! Better luck next time!\n\n");
								}

								break;

							}
							
						case 2:
							{
								
						        printf("\nGuess the correct number between 1-20 to win. You have 3 tries.\n");
							tries = 3; //reset tries counter

							for(i = 0; i < 3; i++)
							{

								printf("Your guess: ");
								scanf("%d", &guess);

								tries--;

								if(guess < random)
								{
									printf("\nYour guess is lower than correct value. Tries remaining: %d\n", tries);

								} else if (guess > random)
								{
									printf("\nYour guess is higher than the correct value. Tries remaining: %d\n", tries);

								} else if (guess == random)
								{
									wins = wins + 1;
									printf("\nYou got it! Nicely done.\n");
									printf("Total wins: %d\n\n", wins);
									break;
								}

								if(tries == 0 && (guess != random))
								{
									printf("You lose! Better luck next time.\n\n");
								}


							}

								break;
							}
						case 3:
							{
								printf("\nRock, paper, scissors!\nEnter 'r' for rock, 'p' for paper, or 's' for scissors: ");
								scanf(" %c", &handGuess);

								cpuGuess = choices[random_rps];

								result = rps_game(handGuess, cpuGuess);
								
								if (result == 1)
								{
								wins = wins + 1;
								printf("Total wins: %d\n\n", wins);
								}								

								break;
							}

						default: printf("Invalid Entry!\n");

				}

					if(wins == 3)
					{
						printf("The tumblers in the door release as you obtain your third win.\nYou've escaped!\n\n");
					}


			}
	
				break;
			
			}	
			case 2:
			{
				puts("room2");
				break;
			}
			case 3:
			{
				puts("room3");
				break;
			}
			case 4:
			{
				puts("room4");
				break;
			}
			case 5:
			{
				puts("room5");
				break;
			}
			case 6:
			{
				puts("room6");
				break;
			}
			case 7:
			{
				puts("room7");
				break;
			}
			case 8:
			{
				puts("room8");
				break;
			}
			case 9:
			{
				puts("room9");
				break;
			}
			case 10:
			{
				puts("room10");
				break;
			}
			case 11:
			{
				puts("room11");
				break;
			}
			case 12:
			{
				puts("room12");
				break;
			}
			case 13:
			{
				puts("room13");
				break;
			}
			case 14:
			{
				puts("room14");
				break;
			}
			case 15:
			{
				puts("room15");
				break;
			}
			case 16:
			{
				puts("room16");
				break;
			}
			case 17:
			{
				puts("room17");
				break;
			}
			case 18:
			{
				puts("room18");
				break;
			}
			case 19:
			{
				puts("room19");
				break;
			}
			case 20:
			{
				puts("room20");
				break;
			}
			case 21:
			{
				puts("room21");
				break;
			}
			case 22:
			{
				puts("room22");
				break;
			}
			case 23:
			{
				puts("room23");
				break;
			}
			case 24:
			{
				puts("room24");
				break;
			}
			case 25:
			{
				puts("room25");
				break;
			}
			case 26:
			{
				puts("room26");
				break;
			}
			case 27:
			{
				puts("room27");
				break;
			}
			case 28:
			{
				puts("room28");
				break;
			}
			case 29:
			{
				puts("room29");
				break;
			}
			case 30:
			{
				puts("room30");
				break;
			}
			case 31:
			{
				puts("room31");
				break;
			}
			case 32:
			{
				puts("room32");
				break;
			}
			case 33:
			{
				puts("room33");
				break;
			}
			case 34:
			{
				puts("room35");
				break;
			}
			case 36:
			{
				puts("room36");
				break;
			}
			case 37:
			{
				puts("room37");
				break;
			}
			case 38:
			{
				puts("room38");
				break;
			}
			case 39:
			{
				puts("room39");
				break;
			}
			case 40:
			{
				puts("room40");
				break;
			}
			case 41:
			{
				puts("room41");
				break;
			}
			case 42:
			{
				puts("room42");
				break;
			}
			case 43:
			{
				puts("room43");
				break;
			}
			case 44:
			{
				puts("room44");
				break;
			}
			case 45:
			{
				puts("room45");
				break;
			}
			case 46:
			{
				puts("room46");
				break;
			}
			case 47:
			{
				puts("room47");
				break;
			}
			case 48:
			{
				puts("room48");
				break;
			}
			case 49:
			{
				puts("room49");
				break;
			}
			case 50:
			{
				puts("room50");
				break;
			}
			case 51:
			{
				puts("room51");
				break;
			}
			case 52:
			{
				puts("room52");
				break;
			}
			case 53:
			{
				puts("room53");
				break;
			}
			case 54:
			{
				puts("room54");
				break;
			}
			case 55:
			{
				puts("room55");
				break;
			}
			case 99:
			{
				puts("You have escaped");
				break;
			}
			default:
			{
				puts("invalid choice");
			}
		}
	}
	puts("Game Over");
	return EXIT_SUCCESS;
}

//place functions here

int rps_game(char handGuess, char cpuGuess)
{

  if (handGuess == cpuGuess)
  {
	  printf("Computer chose: %c\n\n", cpuGuess);
	  printf("Its a tie!\n\n");
	  return 0;

  } else if ((handGuess == 'r' && cpuGuess == 's') || (handGuess == 'p' && cpuGuess == 'r') || (handGuess == 's' && cpuGuess == 'p')) 
  {
	  printf("Computer chose: %c\n\n", cpuGuess);
	  printf("You win! Nicely done.\n\n");
	  return 1;

  } else 
  { 
	  printf("Computer chose: %c\n\n", cpuGuess);
	  printf("You lose! Better luck next time.\n\n");
	  return -1;
  }

}


