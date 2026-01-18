#include<stdio.h>

int main(){

    float num[30];
    char opr[30];

    printf("Now enter the Numbera and operators to be calculated \n ");
    for(int i=0;i<30;i++){
        scanf("%f",&num[i]);
        scanf(" %c",&opr[i]);
        if(opr[i]=='='){
                break;
            }
    }
    
    float result = num[0];
    
    for(int i=0;i<30;i++){
        
        switch(opr[i]){
            case '+':
            result=result + num[i+1];
            break;

            case '-':
            result=result - num[i+1];
            break;

            case '*':
            result=result * num[i+1];
            break;

            case '/':
            result=result / num[i+1];
            break;

            case '=':
            break;

            default:
            printf("\n");

        }
    }
    printf("The final result is: %.2f",result);

    return 0;
}