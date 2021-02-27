#include <stdio.h>

int main(){
    while(1){
        printf("Choose the conversion that you want: \n\n");
        printf("1 - Joules to calories \n");
        printf("2 - Calories to joules \n");
        printf("3 - Calories to Kcal \n");
        printf("4 - Kcal to calories \n");
        printf("5 - Joules to Kcal \n");
        printf("6 - Kcal to joules \n\n");

        printf("What is the operation? ");
        char operationCode = 0;
        scanf("%c", &operationCode);
        printf("\n\n")

        if(operationCode < 1 || operationCode > 6){
            printf("Invalid code! Please try again! \n\n");
            continue;
        }        
    }
    
    return 0;
}