#include <stdio.h>
int main(int argc, char *argv[]) 
{    
int areas[] = {100, 12, 13, 14, 20};    
char name[] = "Alex";    
char full_name[] = 
{    
    'K', 'a', 'n','y','e',      
	' ', 'O', '.', ' ',   
	'W', 'e', 's', 't', '\0'    
};

// WARNING: On some systems you may have to change the    
// %ld in this code to a %u since it will use unsigned ints    

printf("The size of an int: %ld\n", sizeof(int));    
printf("The size of areas (int[]): %ld\n", sizeof(areas));    
printf("The number of ints in areas: %ld\n", sizeof(areas) / sizeof(int));    
printf("The first area is %d, the 2nd %d.\n", areas[0], areas[1]);
printf("The size of a char: %ld\n", sizeof(char));   
printf("The size of name (char[]): %ld\n", sizeof(name));    
printf("The number of chars: %ld\n", sizeof(name) / sizeof(char));
printf("The size of full_name (char[]): %ld\n", sizeof(full_name));    
printf("The number of chars: %ld\n", sizeof(full_name) / sizeof(char));
printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);

return 0; 
}
//EXTRA CREDIT
//Try assigning to elements in the areas array with areas[0] = 100; and similar.
//-int areas[] = {100, 102, 130, 140, 200};    
//Try assigning to elements of name and full_name .
//char name[] = "Alex";    
/*char full_name[] = 
{    
    'K', 'a', 'n','y','e',      
	' ', 'O', '.', ' ',   
	'W', 'e', 's', 't', '\0'    
};*/
//Try setting one element of areas to a character from name 
//Go search online for the different sizes used for integers on different CPUs.
/*unsigned integers

8-bit: 0 to 255
16-bit: 0 to 65,535
32-bit: 0 to 4,294,967,295
64-bit: 0 to 18,446,744,073,709,551,615

signed integers:

unsigned integers

8-bit: -255 to 255
16-bit: -65,535 to 65,535
32-bit: -4,294,967,295 to 4,294,967,295
64-bit: -18,446,744,073,709,551,615 to 18,446,744,073,709,551,615*/



