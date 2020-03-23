#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;
	
    // go through each string in argv
    // why am I skipping argv[0]?
    for(i = 1; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
		}
		
    // let's make our own array of strings
    char *states[] = {
        "California", "Oregon",
        "Washington", "Texas", NULL,
	};
	int num_states = 4;
    for(i = 0; i < num_states; i++){
        printf("state %d: %s\n", i, states[i]);
		}
		
    return 0;
}

//EXTRA CREDIT
//Figure out what kind of code you can put into the parts of a for-loop 
//-following the flowchart of a for-loop , using a counter, a condition to meet, an action to do, and an addition in the counter
//-it should look something like this: for(i=1;1<20;1++){printf("hi");}}
//Look up how to use the ',' (comma) character to separate multiple statements in the parts of the for-loop , but between the ';' (semicolon) characters. 
//-The comma is used for dividing the arguments within a same category and the semicolon is for dividing the instructions for the code
//Read what a NULL is and try to use it in one of the elements of the states array to see what it'll print. 
//Null is a built-in constant that has a value of zero, when adding it to the code it doesnt print anything
//See if you can assign an element from the states array to the argv array before printing both. Try the inverse
//-On both cases it wouldnt be possible bc it needs to be declared first and you have nothing to work with, on the argv array case, you are messing with the users input arguments
