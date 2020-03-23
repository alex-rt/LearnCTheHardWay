#include <stdio.h>
int main(int argc, char *argv[])
{
 int bugs = 100;
 double bug_rate = 1.2;
 printf("You have %d bugs at the imaginary rate of %f.\n",
 bugs, bug_rate);
 unsigned long universe_of_defects = 1L * 1024L * 1024L * 1024L *1024L *1024L *1024L *1024L ;
 printf("The entire universe has %ld bugs.\n",
 universe_of_defects);
 double expected_bugs = bugs * bug_rate;
 printf("You are expected to have %f bugs.\n",
 expected_bugs);
 double part_of_universe = expected_bugs / universe_of_defects;
 printf("That is only a %e portion of the universe.\n",
 part_of_universe);
 // this makes no sense, just a demo of something weird
 char nul_byte = '\0';
 int care_percentage = bugs * nul_byte;
 printf("Which means you should care %d%%.\n",
 care_percentage);
 return 0;
}
//EXTRA CREDIT 
//Make the number you assign to universe_of_defects various sizes until you get a warning from the compiler. 
/*-Exercise7.c:8:56: warning: integer overflow in expression [-Woverflow]
  long universe_of_defects = 1L * 1024L * 1024L * 1024L *1024L *1024L *1024L *1024L *1024L *1024L ;*/ 
//What do these really huge numbers actually print out?
//-They print 0
//Change long to unsigned long and try to find the number that makes that one too big.
//It is 2^32 -1
//Go search online to find out what unsigned does.
//-It can only represent positive numbers and is an extended size variables for number storage, and store 32 bits (4 bytes)
//Try to explain to yourself (before I do in the next exercise) why you can multiply a char and an int .
//-A char holds a numerical representation of a symbol, multiplying it with an integer gives you an integer
