#include<stdio.h>
#include <malloc.h>

int main(int argc, char* argv[])
{
        int score;
        double salary;
        double bonus;
        double paycheck;
        char *name;

        name = malloc (sizeof(char)*10);

        //input
        printf("Enter name: ");
        fgets(name, 10, stdin);

        printf("Enter salary: ");
        fscanf(stdin, "%lf", &salary);

        printf("Enter score: ");
        fscanf(stdin, "%d", &score);

        if(score == 100)
        {
                bonus = salary*.25;
                printf("You are amazing! ");
        }
        else if(score == 90)
        {
                bonus = salary*.2;
        }
        else if(score == 80)
        {
                bonus = salary*.15;
        }
        else if(score == 70)
        {
                bonus = salary*.1;
        }
        else if(score == 60)
        {
                bonus = salary*.05;
        }
        else if(score < 60)
        {
                printf("You do not get a bonus. ");
                printf("WARNING, LOW SCORE! ");
        }

        paycheck = salary + bonus;



        //output
        printf("This month, %s will get a check for $%.02lf dollars. ", name, paycheck);

        free(name);
}
