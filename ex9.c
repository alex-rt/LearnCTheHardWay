#include <stdio.h>
int main(int argc, char *argv[])
{
    int numbers[4] = {'q','w','e','r'};
    char name[4] = {1,2,3,4};
    // first, print them out raw
    printf("numbers: %d %d %d %d\n",
            numbers[0], numbers[1],
            numbers[2], numbers[3]);
    printf("name each: %c %c %c %c\n",
            name[0], name[1],            
			name[2], name[3]);
			
    printf("name: %s\n", name);
	printf("%d\n", numbers[0]);
	printf("%d\n", numbers[1]);
	printf("%d\n", numbers[2]);
	printf("%d\n", numbers[3]);
	printf("%c\n", name[0]);
	printf("%c\n", name[1]);
	printf("%c\n", name[2]);
	printf("%c\n", name[3]);
 
 // setup the numbers
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;
	
    // setup the name
    name[0] = 'Z';
    name[1] = 'e';
    name[2] = 'd';
    name[3] = '\0';
	
	
    // then print them out initialized
    printf("numbers: %d %d %d %d\n",
            numbers[0], numbers[1],
            numbers[2], numbers[3]);
			
    printf("name each: %c %c %c %c\n",
            name[0], name[1],            
			name[2], name[3]);
			
    // print the name like a string
    printf("name: %s\n", name);
	
    // another way to use name
    char *another = "Zed";
	
    printf("another: %s\n", another);
    printf("another: %s\n", another);
    printf("another each: %c %c %c %c\n",
            another[0], another[1],
            another[2], another[3]);
    return 0; 
}

//EXTRA CREDIT
//Assign the characters into numbers and then use printf to print them a character at a time. What kind of compiler warnings did you get?	
//no warning was shown 
//Do the inverse for name , trying to treat it like an array of int and print it out one int at a time. What does Valgrind think of that?
//no warning or error shown, but when executing the name prints comes out as a ? symbol
//How many other ways can you print this out? 
//-Only in those 2 ways, array form and char as a nint
//If an array of characters is 4 bytes long, and an integer is 4 bytes long, then can you treat the whole name array like it's just an integer? How might you accomplish this crazy hack? 
//-By using atoi i can make the char given as an argument into an integer
//Convert name to be in the style of another and see if the code keeps working.
//it doesnt work, after running it ignoring 2 warnings about the character constant and the pointer from integer, it dint print anything
