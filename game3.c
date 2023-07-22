#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int StonePaperScissor(char you, char comp)
{
//Draw condition
    if (you == comp)
    {
        return 0;
    }
//Non-Draw condition
    if (you == 's' && comp == 'p')
    {
        return -1;
    }
    else if (you == 'p' && comp == 's')
    {
        return 1;
    }
    if (you == 's' && comp == 'c')
    {
        return 1;
    }
    else if (you == 'c' && comp == 's')
    {
        return -1;
    }
    if (you == 'p' && comp == 'c')
    {
        return -1;
    }
    else if (you == 'c' && comp == 'p')
    {
        return 1;
    }
}

int main()
{
    char you, comp;

    srand(time(0));
    int number = rand() % 100 + 1;

    if (number < 33)
    {
        comp = 's';
    }
    else if (number > 33 && number < 66)
    {
        comp = 'c';
    }
    else
    {
        comp = 'p';
    }

    printf("Enter 's' for stone, 'p' for paper and 'c' for scissor\n");
    scanf("%c", &you);
    int result =  StonePaperScissor(you, comp);

    if (result == 0)
    {
        printf("Game Draw!\n");
    }
    else if (result == 1)
    {
        printf("WOW! You Win!\n");
    }
    else
    {
        printf("Oh! You Lose!\n");
    }
    printf("You chose %c and computer chose %c. ", you, comp);
    return 0;
}