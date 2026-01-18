#include <stdio.h>
#include <stdlib.h>   //########################
#include <time.h>   //##########################


int main() {

    srand(time(0));   //###############################

    int pc=rand()%3;   //##############################

    int user;

    printf("\n\n\tNow the game will started\n\n");
    printf("\t1. 0=rock \n\t2. 1=paper \n\t3. 2=scissor\n");

    printf("\n\tUser enter you value : ");
    scanf("%d",&user);

    switch(user)
    {

        case 0:
        printf("\tYou choses ROCK\n");
        break;        

        case 1:
        printf("\tYou choses PAPER\n");
        break;

        case 2:
        printf("\tYou choses SCISSOR\n");
        break;

        default:
        printf("Invalid Input\n");
    }


    switch(pc)
    {

        case 0:
        printf("\tComputer choses ROCK\n");
        break;

        case 1:
        printf("\tComputer choses PAPER\n");
        break;

        case 2:
        printf("\tComputer choses SCISSOR\n");
        break;

        default:
        printf("Error 404\n");
    }

    if(user==pc){
        printf("\tThe Game is draw \n");
    }

    else if(user==0&&pc==1){
        printf("\tYou lose the match \n");
    }

    else if(user==0&&pc==2){
        printf("\tYou won the match \n");
    }

    else if(user==1&&pc==0){
        printf("\tYou won the match \n");
    }

    else if(user==2&&pc==0){
        printf("\tYou lose the match \n");
    }

    else if(user==1&&pc==2){
        printf("\tYou lose the match \n");
    }

    else if(user==2&&pc==1){
        printf("\tYou won the match\n");
    }

    else{
        printf("\tInvalid input fro yoY\n");
    }

    printf("\n\n\tThanks for playing the game\n");
    
     
    return 0;
}