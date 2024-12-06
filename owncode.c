

void room30(void);

			case 30:
			{
				puts("you enter room30 \n");
        room30();
				
				
				//ivan
				
				break;
			}

        

//===============================================================================================


//room30 Ivan

void room30(void){
	
	puts(" Oh my goodness the door opened up to a datacenter of some sorts? \n ");

	puts(" What do you do? \n");
	puts(" 1. Go back to the room 30 door universe \n");
	puts(" 2. Stand still and chill out \n");
	puts(" 3. Explore the datacenter \n");


	puts(" Input your decision as 1,2, or 3 \n");
	
	int choice = 3;

	scanf("%d", &choice);
	
	if(choice == 1){
		puts(" You go back to the 99 doors \n");
		return;
	}
	if(choice == 2) {
		puts(" You stand and wait, eventually get bored and explore the datacenter \n");
	}
	
	puts(" So now you explore the datacenter, where do you want to go \n");

    char *options[5] = {
        "Look at the server racks",
        "Look for a different room",
        "Look at the floor",
        "Search for the power source",
        "Wreak Havoc"
    };

    srand(time(NULL));

    int daUsachoices = 0;

    for (int i = 0; i < 5; i++) {
	
        for (int j = 0; j < 5; j++) {
	    // loop to print options
            printf("%d. %s \n", j + 1, options[j]);
        }

        puts(" \n  Input your decision as 1,2,3,4, or 5 ");
	puts(" or if u feel spicy, put anything over 6. ie 6-999 for a random choice \n");


        int userChoice;
        scanf("%d", &userChoice);

        if (userChoice < 1 || userChoice > 5) {
            puts("Invalid choice! For some reason you randomly choose by playing rock paper scissors with yourself \n ");
            // random choice
	    userChoice = (rand() % 5) + 1; 
        }
	
	
	switch (userChoice) {
            case 1:
                puts("You inspect the server racks, Each time noticing more details \n");
                daUsachoices += 1;            
		break;

            case 2:
                puts("You look for rooms around the datacenter, heck a bathroom please. Too bad no dice. \n");
                daUsachoices += 2;
		break;

            case 3:
                puts("You look at the floor. Absolutely mental. \n");
                daUsachoices += 3;                
		break;

            case 4:
                puts("You search for the power source that is powering this massive datacenter. \n ");
                daUsachoices += 4;
		break;

            case 5:
                puts(" You walk around destroying stuff, yeah you think your so cool. In fact you litter the floor with INTEL CORE 9HX 64 PROCESSERS. AVAILABLE AT NOW!. SPONSORED BY RAID SHADOW LEGENDS \n ");
                daUsachoices += 5;
		break;

            default:
                puts("You stand there, unsure of what to do.");
                break;
        }
		
    }
	
    puts("Wow what an adventure \n");
	
    if(daUsachoices == 5){
    	puts("OH MY GOSH, AN AI LLM VERSION OF JEFF BEZOS APPEARS. \n");
	puts("YOU HAVE BEEN OFFERED 70 billion dollars! \n");
     puts("While grabbing the money, you sadly slipped and fell and are back to the rooms \n");
     return;
    }
	
    if(daUsachoices == 10){
        puts(" there was not bathroom. \n");
	return;
    }

    if(daUsachoices == 15){
        puts(" The Floor speaks to you in no other ways. You are floor. Too bad your back to the rooms. \n");
        return;
    }
    
    if(daUsachoices == 20){
        puts(" You found the power source. Turns out it was a huge tokamak fusion reactor. Cool. You wanted to eat some plasma but you sadly got teleported. \n");
        return;
    }
    
    if(daUsachoices == 25){
        puts(" The datacenter explodes. Like humongous explosion. Great work. Anyway after the explosion you are kicked back into the 99 rooms by ChatGpt. \n");
        return;
    }

    if(daUsachoices == 19){
        puts(" Secret. Great. you win everything. Goodbye. \n");
        return;
    }



}






//===============================================================================================


//===============================================================================================
