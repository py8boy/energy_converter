#include <stdio.h>


// this function converts calories in joules
int cal2joules(int cal){
    joules = cal * 4186;
    printf("\n%d cal = %d joules \n", cal, joules);
    return 0;
}

// this function converts calories in kcal
int cal2kcal(int cal){
    kcal = cal * 10000;
    printf("\n%d cal = %d kcal \n", cal, kcal);
    return 0;
}

// I STOP HERE...

int main(){
    while(1){
        printf("Choose the conversion that you want: \n\n");
        printf("1 - Calories to joules \n");
        printf("2 - Calories to Kcal \n");
        printf("3 - Kcal to calories \n");
        printf("4 - Joules to Kcal \n");
        printf("5 - Kcal to joules \n\n");

        printf("What is the operation? ");
        char operationCode = 0;
        scanf("%c", &operationCode);
        printf("\n\n")

        if(operationCode < 1 || operationCode > 6){
            printf("Invalid code! Please try again! \n\n");
            continue;
        }

    /*
        switch(operationCode){
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
        }        
    */
    }
    
    return 0;
}