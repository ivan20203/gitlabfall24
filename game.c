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

int RM12DiceRoll();





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
				puts("room1");
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
//DanielR.
				int cleared = 0;
				int choice = 0;
				int roll = 0;

				puts("Behind door 12, You are met with a grand open forest.");
				puts("After such a panic, you decide to take in the scenery for a moment and catch your breath.");
				puts("You can make out a door at the top of a hill in the distance.");
				puts("But who knows what lies within this forest.");
				puts("You spot a satchel on the ground beneath you.");
				puts("Without checking its contents, you pick up the satchel and make haste to the door.");
				puts("...");
				puts("Nightfall approaches and you are still wandering the forest.");
				puts("The door creeps closer with every step.");
				puts("You reach the hill.");
				puts("But before climbing up, you hear a howl in the distance.");
				puts("*Encounter!*");
				puts("A pack of wolves leap out in front of you! Blocking your path.");
				puts("Guess it's time to put the contents of the satchel to good use!");
				puts("You reach inside and pull out...");



				while(cleared == 0)
				{
					//code
					printf("\n");
					puts("--------------------");
					puts("||||||Satchel|||||||");
					puts("--------------------");
					printf("\n");
					puts("1. An offensive message?");
					printf("\n");
					puts("2. A Sword(size 16-bits!, those who know, know)");
					printf("\n");
					puts("3. A wind up Monkey(may go boom)");
					printf("\n");
					puts("4. A Walkie Talkie(phone a friend)");
					printf("\n");
					puts("5. GUN");
					printf("\n");
					puts("Disclaimer: All choices require a dice roll, however not all choices can succeed.");

					printf("\n Enter Your choice: ");
					scanf("%d", &choice);

					switch(choice)
					{
						case 1:
							puts("You pull out a slip of paper and read the message to the wolves...");
							roll = RM12DiceRoll();
							printf("\n You rolled a %d\n", roll);
							if(roll == 1)
							{
								puts("Critical Failure");
								printf("\n");
								puts("You read out... 'Avada Kedavra' and the last thing you see is a green flash");
								puts("STATUS: DEAD");
								printf("\n");
								puts("*********");
								puts("*FAILURE*");
								puts("*********");
								printf("\n");
								puts("Wait a second... I don't think that spells working properly");
								puts("And where'd you get a wand to cast it?");
								printf("\n");
								puts("A bright flash emminates, and your alive once more. As if seemingly in a loop...");

							}
							else if(roll <=10)
							{
								puts("Failure");
								printf("\n");
								puts("You read out, and I quote, 'You mangy mutts' {._.}");
								puts("This simply angered the wolves and they proceeded to maul you to death");
								puts("STATUS: DEAD");
								printf("\n");
								puts("*********");
								puts("*FAILURE*");
								puts("*********");
								printf("\n");
								puts("I'm not sure what you expected there buddy");
								printf("\n");
								puts("A bright flash emminates, and your alive once more. As if seemingly in a loop...");
							}
							else if(roll >=11)
							{
								puts("Success!");
								printf("\n");
								puts("You read out the most heinous words imaginable");
								puts("So bad that I won't even bother describing your foul language");
								puts("The wolves were so utterly disgusted they left on their own accord");
								printf("\n");
								puts("*********");
								puts("*SUCCESS*");
								puts("*********");
								printf("\n");
								puts("Do you kiss your mother with that mouth?");
								printf("\n");
								puts("With the wolves gone, you escape through the door.");
								puts("Only to be met with a familiar scene...");
								printf("\n");
								cleared = 1;
								

							}
							else if(roll == 20)
							{
								puts("NAT 20!?");
								printf("\n");
								puts("Wow, good for you. You Win.");
								printf("\n");
								puts("*********");
								puts("*SUCCESS*");
								puts("*********");
								printf("\n");
								puts("What? You thought I'd reward you for a Nat 20?");
								printf("\n");
								puts("With the wolves gone, you escape through the door.");
								puts("Only to be met with a familiar scene...");
								printf("\n");
								cleared = 1;
								

							}


							break;
						case 2:
							//code
							break;
						case 3:
							//code
							break;
						case 4:
							//code
							break;
						case 5:
							//code
							break;
						default:
							puts("Invalid Selection");
							break;

					}

				}

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


int RM12DiceRoll()
{
	srand(time(NULL));

	//random # from 1-20
	int diceroll = 1 + (rand() %20);
	
	return diceroll;
}

