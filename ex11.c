#include <stdio.h>
int main(int argc, char *argv[]) 
{
    // go through each string in argv
	printf("argcis : %i " ,argc);
    int i = argc;
    while(i > 0) {
        printf("arg %d: %s\n", i, argv[i]);
        i--;
	}
	
    // let's make our own array of strings
    char *states[] = {
        "California", "Oregon",
        "Washington", "Texas"
	};
	
    int num_states = 0;
    int j = 3;  // watch for this
    while(j >= num_states) {
        printf("state %d: %s\n", j+1, states[j]);
        j--;
	}
    return 0;
}

//EXTRA CREDIT
//Make these loops count backward by using i-- to start at argc and count down to 0. You may have to do some math to make the array indexes work right.
//-Besides the i--, the num_states and i values swapped (i is now 3 because of the array order), an the < in the condition is now >=, i aslo changed the i printing so that ther is no state "0" and it goes from 4 to 1 
//-On the first loop, i changed the i value to meet the condition when i is going backwards, i also changed the < and the printf
//Use a while loop to copy the values from argv into states . 
/*i = 0;
char *states[4];
while (i < argc){
states[i] = argv[i];
i++;}*/
//Make this copy loop never fail such that if there's too many argv elements it won't put them all into states . 
//-with adding an if conditionall mid-while (if(i<whatevernumberyouwanttorestrict)) you can control the argv arguments goint into the array
//Research if you've really copied these strings. The answer may surprise and confuse you though.
//-i didnt found clear information but i want to believe there is an actuall copy because is stated in the declaration
