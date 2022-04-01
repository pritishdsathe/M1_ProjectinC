#include "stdio.h"
#include "stdlib.h"
#include "time.h"


int GenerateRandomNumber(int n)
{
    srand(time(NULL)); //Takes time as an input. (Defined inside stlib.h library)
    return rand() % n;
}

int greater(char char1, char char2)
{
    //For Rock, Paper, Scissors- Returns 1 if c1> c2 and 0 otherwise. If c1==c2 it will return -1

    if (char1 == char2)
    {
        return -1;
    }

    else if ((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }
    else if ((char2 == 'r') && (char1 == 's'))
    {
        return 0;
    }

    else if ((char1 == 'r') && (char2 == 'p'))
    {
        return 1;
    }

    else if ((char2 == 'r') && (char1 == 'p'))
    {
        return 0;
    }

    else if ((char1 == 's') && (char2 == 'p'))
    {
        return 1;
    }
    else if ((char2 == 's') && (char1 == 'p'))
    {
        return 0;
    }
}

int main()
{
    int pscore = 0, comscore = 0, temp;
    char pchar, comchar;
    char dict[] = {'r', 'p', 's'};

    printf("\n\t\t\t\t****** Welcome to the Rock Paper Scissor.******\n");
    printf("\t\t\t\t______________________________________________\n\n");
    for (int i = 0; i < 3; i++)
    {

        //Takes player 1 input.
        printf("\nPlayer 1's Turn >\n");
        printf("\nChoose 1 for Rock\nChoose 2 for Paper.\nChoose 3 for Scissors:\n");
        scanf("%d", &temp);
        if (temp>3 || temp==0)
        {
            goto end;
        }
        
        getchar();
        pchar = dict[temp - 1];
        printf("\nYou chose: %c\n\n", pchar);


        // Generate Computer's Input

        printf("\nComputer's Turn:\n");
        temp = GenerateRandomNumber(3) + 1;
        comchar = dict[temp - 1];
        printf("Computer chose: %c\n", comchar);
        printf("________________________________\n");


        //Comparing the scores

        if (greater(comchar, pchar) == 1)

        {
            comscore += 1;
            printf("\n\nCPU got this one!\n");
            printf("_________________\n");
        }
        else if (greater(comchar, pchar) == -1)
        {
            comscore += 1;
            pscore += 1;
            printf("\n\nIt's a Draw!\n");
            printf("_________________\n");
        }
        else
        {
            pscore += 1;
            printf("\n\nYou got this one!\n");
            printf("_________________\n");
        }
        printf("\nYou: %d\nCPU: %d\n", pscore, comscore);
        printf("__________________\n");
    }

    printf("\n-------------\n");
    printf("|Final Score|\n");
    printf("-------------\n");

    if (pscore > comscore)
    {
        printf("\n****** Congratulations!! You Win ******\n\n");
    }
    else if (pscore < comscore)
    {
        printf("\n$$$$$$ Computer Wins $$$$$$\n\n");
    }
    else
    {
        printf("\n------ It's a draw ------\n\n");
    }
    end: 
       // printf("\n\nInvalid input\n\n");
    printf("\n\nPress any key to stop");
    getchar();
    return 0;
}