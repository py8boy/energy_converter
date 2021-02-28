#include <stdio.h>


// this function converts calories in joules
int cal2joules(double cal){
    double joules = cal * 4186;
    printf("\n%f cal = %f joules \n", cal, joules);
    return 0;
}

// this function converts calories in kcal
int cal2kcal(double cal){
    double kcal = cal * 10000;
    printf("\n%f cal = %f kcal \n", cal, kcal);
    return 0;
}

// this function converts kcal in calories
int kcal2cal(double kcal){
    double cal = kcal / 1000;
    printf("\n%f kcal = %f cal \n", kcal, cal);
    return 0;
}

// this function converts joules in kcal
int joules2kcal(double joules){
    double kcal = joules * 0.000239;
    printf("\n%f joules = %f kcal \n", joules, kcal);
    return 0;
}

// this function converts kcal in joules
int kcal2joules(double kcal){
    double joules = kcal / 0.000239;
    printf("\n%f kcal = %f joules \n", kcal, joules);
    return 0;
}

// this function converts joules in calories
int joules2cal(double joules){
    double cal = joules / 4.189;
    printf("\n%f joules = %f cal \n", joules, cal);
    return 0;
}


int main(){
    while(1){
        printf("Choose the conversion that you want: \n\n");
        printf("1 - Calories to joules \n");
        printf("2 - Calories to Kcal \n");
        printf("3 - Kcal to calories \n");
        printf("4 - Joules to Kcal \n");
        printf("5 - Kcal to joules \n");
        printf("6 - Joules to calories \n\n");

        printf("What is the operation? ");
        char operationCode = 0;
        scanf("%c", &operationCode);
        printf("\n\n");

        if(operationCode < 1 || operationCode > 6){
            printf("Invalid code! Please try again! \n\n");
            continue;
        }

    
        switch(operationCode){
            case 1:
                double calories;
                printf("Insert the calorie value: ");
                scanf("%f", &calories);
                cal2joules(calories);
            case 2:
                double calories;
                printf("Insert the calorie value: ");
                scanf("%f", &calories);
                cal2kcal(calories);
            case 3:
                double kilocalories;
                printf("Insert the kilocalorie value: ");
                scanf("%f", &kilocalories);
                kcal2cal(kilocalories);
            case 4:
                double joules;
                printf("Insert the joule value: ");
                scanf("%f", &joules);
                joules2kcal(joules);
            case 5:
                double kilocalories;
                printf("Insert the kilocalorie value: ");
                scanf("%f", &kilocalories);
                kcal2joules(kilocalories);
            case 6:
                double joules;
                printf("Insert the joule value: ");
                scanf("%f", &joules);
                joules2cal(joules);
        }        
    
    }
    
    return 0;
}