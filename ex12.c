#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;
    if(argc == 1) {
        printf("You only have one argument. You suck.\n");
	} 
	else if(argc > 1 && argc < 4) {
        printf("Here's your arguments:\n");
        for(i = 0; i < argc; i++) {
            printf("%s ", argv[i]);
		}
        printf("\n");
		} 
	else {
        printf("You have too many arguments. You suck.\n");
	}
    return 0; 
}
 
 //EXTRA CREDIT
 //You were briefly introduced to && , which does an "and" comparison, so go research online the different "boolean operators".
 /*Boolean operators:
 Arithmetic operator: +,-,*,/,%.
 Relational operator:<,<=,>,>=,==,!=.
 Logistic operator:&&,||,!.
 Bitwise operator:&,|,<<,>>,~,^.
 Asignment operator:+=,-=,*=,/=,%=.
 */
 //Write a few more test cases for this program to see what you can come up with
 //if between that range of 2-3 arguments there are not 3
 //else if(argc > 1 && argc < 4) turns to: else if(argc > 1 && argc < 4 && argc!=3) and if(argc==3){printf("u have 3 arg. u suck");
 //Go back to Exercises 10 and 11, and use if-statements to make the loops exit early. You'll need the break statement to do that. Go read about it.
 //When a break statement is encountered inside a loop, the loop is immediately terminated and the program control resumes at the next statement following the loop.
 //so we would just add an if condition mid-code and if the confition is false, we break the loop.
 //Is the first test really saying the right thing? To you the "first argument" isn't the same first argument a user entered. Fix it.
//well to me it is, buut there you go: if((argc-1) == 1) :) 
