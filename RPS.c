#include <stdio.h>
#include <stdlib.h>

int main()
{

    int player_input = 1;
    int games_won = 0;
    int games_played = 0;

    printf("Welcome to rock, paper, scissors!\n");

    while (player_input != 0)
    {
        games_played++;
        int machineChoice = rand() % 3 + 1;
        printf("Please enter 1 for ROCK, 2 for PAPER or 3 for SCISSORS, and 0 to QUIT.\n");
        scanf("%d", &player_input);

        switch (player_input)
        {
        case 1:
            printf("Player chose: Rock\n");
            break;
        case 2:
            printf("Player chose: Paper\n");
            break;
        case 3:
            printf("Player chose: Scissors\n");
            break;
        case 0:
            printf("Bye Bye\n");
            break;
        default:
            printf("Didnt enter a number [0-3]\n");
            break;
        }
        if (player_input != 0)
        {
            switch (machineChoice)
            {
            case 1:
                printf("Machine chose: Rock\n");
                break;
            case 2:
                printf("Machine chose: Paper\n");
                break;
            case 3:
                printf("Machine chose: Scissors\n");
                break;
            }
        }

        if (player_input == 0)
        {
            break;
        }

        if (player_input == machineChoice)
        {
            printf("Draw!\n");
        }
        else if (player_input == 1 && machineChoice == 2)
        {
            printf("Sorry, you lost this round!\n");
        }
        else if (player_input == 1 && machineChoice == 3)
        {
            printf("You win this round!\n");
            games_won++;
        }
        else if (player_input == 2 && machineChoice == 1)
        {
            printf("You win this round!\n");
            games_won++;
        }
        else if (player_input == 2 && machineChoice == 3)
        {
            printf("Sorry, you lost this round!\n");
        }
        else if (player_input == 3 && machineChoice == 1)
        {
            printf("Sorry, you lost this round!\n");
        }
        else if (player_input == 3 && machineChoice == 2)
        {
            printf("You win this round!\n");
            games_won++;
        }
    }
    games_played -= 1;
    printf("Games played %d, games won %d\n", games_played, games_won);
    return 0;
}