#include <stdio.h>
#include <stdlib.h>
#include "user.h"

char hello()
{
    char name[111];
    printf("Give me Your name: \n");
    scanf("%s",name);
    printf("Your name: %s\n",name);
}
int game_mode()
    {
        int a;
        printf("Which game mode do You prefer?\n");
        printf("press:\n" );
        printf("1-Interactive mode\n" );
        printf("2-Auto mode\n" );


        while(1)
        {
        scanf("%d",&a);
            if(a==1)
        {
            printf("You have choosen interactive mode!\n" );
            break;

        }

        else if(a==2)
        {
            printf("You have choosen auto mode!\n" );
            break;
        }
        else
        {
            printf("Wrong value for mode. Give 1 or 2" );
        }
        }

        return a;
    }
