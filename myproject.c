#include <stdlib.h>
#include <stdio.h>
#define max 30
int input();
void output(float);
int main
{
    int i, j //looping variables within scheduling methodes
    int p //process variables
    int wt[max], bt[max], pr[max], at //initializing the waiting time, burst time, priority, arrival time variables
    float awt =0, atat=0; //initializing the average waiting time and average turn around time varables
    int choice, num; //for menu options
    printf("Press 1 for scheduling mode\n");
    printf("Press 2 for preemptive mode\n");
    printf("Press 3 for the results \n");
    printf("Press 4 to end the program\n");

    printf("Enter your choice:\n");
    choice = input();
     
    switch (choice) {
    case 1: {
        printf("SCHEDULING MODE\n");
        
        break;
    }
    case 2: {
        printf("PREMPTIVE MODE\n");
        
        break;
    }
    case 3: {
        printf("SHOW RESULTS\n");
        
        break;
    }
    default:
        printf(" THE PROGRAM HAS ENDED\n");
    }
    return 0;
}
int input()
{
    int number;
    scanf("%d", &number);
    return (number);
}
 
void output(float number)
{
    printf("%f", number);
}