#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int player_input = 1;
    int games_won = 0;
    int games_played = 0;
    int draw_count = 0;
    int time_limit = 10;

    printf("Welcome to rock, paper, scissors!\n");

    while (player_input != 0)
    {
        games_played++;
        int machineChoice = rand() % 3 + 1;

        printf("Please enter 1 for ROCK, 2 for PAPER or 3 for SCISSORS, and 0 to QUIT.\n");
        printf("You have 10 secconds to enter [0-1]\n");

        time_t start_time = time(NULL);
        scanf("%d", &player_input);
        time_t end_time = time(NULL);
        long elapse_time = end_time - start_time;
        if (elapse_time > time_limit && player_input != 0)
        {
            printf("Your time is up! You took %ld seconds(time limit is: %d )\n", elapse_time, time_limit);
            break;
        }

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
            draw_count++;
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
    printf("Games played: %d, games won: %d, games ended in draw: %d\n", games_played, games_won, draw_count);
    return 0;
}