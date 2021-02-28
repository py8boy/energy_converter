#include <stdio.h>


// this function converts calories in joules
int cal2joules(){
    int cal;
    printf("Insert the calorie value: ");
    scanf("%d", &cal);

    int joules = cal * 4186;
    printf("%d cal = %d joules \n", cal, joules);
    return 0;
}

// this function converts calories in kcal
int cal2kcal(){
    int cal;
    printf("Insert the calorie value: ");
    scanf("%d", &cal);

    int kcal = cal / 1000;
    printf("%d cal = %d kcal \n", cal, kcal);
    return 0;
}

// this function converts kcal in calories
int kcal2cal(){
    int kcal;
    printf("Insert the kcal value: ");
    scanf("%d", &kcal);

    int cal = kcal * 10000.00;
    printf("%d kcal = %d cal \n", kcal, cal);
    return 0;
}

// this function converts joules in calories
int joules2cal(){
    int joules;
    printf("Insert the joule value: ");
    scanf("%d", &joules);

    int cal = joules / 4186;
    printf("%d joules = %d cal \n", joules, cal);
    return 0;
}


int main(){
    while(1){
        printf("Choose the conversion that you want: \n\n");
        printf("1 - Calories to joules \n");
        printf("2 - Calories to Kcal \n");
        printf("3 - Kcal to calories \n");
        printf("4 - Joules to calories \n\n");

        printf("What is the operation? ");
        int operationCode = 0;
        scanf("%d", &operationCode);
        printf("\n");

        if(operationCode < 0 || operationCode > 6){
            printf("Invalid code! Please try again! \n\n");
            continue;
        }
        else{        
            switch(operationCode){
                case 1:
                    cal2joules();
                    break;
                case 2:
                    cal2kcal();
                    break;
                case 3:
                    kcal2cal();
                    break;
                case 4:
                    joules2cal();  
                    break; 
            }

            printf("\nDo you want to continue? [0 to quit / 1 to continue] ");
            int quittingFlag;
            scanf("%d", &quittingFlag);

            if(quittingFlag == 0){
                printf("Okay... Se you later... Quitting... \n");
                break;
            }
            else{
                printf("Ok, returning... \n\n\n");
                continue;
            }
        }    
    }
    
    return 0;
}