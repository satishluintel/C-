// START 

#include <iostream> // Header File 

int main() 
{
using namespace std;

cout << "Hello World \n";

return 0;
}
//END OF CODE



// PLEASE READ THE FOLLOWING DOCUMENTATION 

/* 

A string "Hello World " is printed on the screen by the standard output stream cout
The newline \n is put so that the console appears on a new line after the program exits
Not using the "using namespace std" will throw an error of cout not being declared in the scope
Namespace is a container for a set of Identifiers
You could also use std::cout to output a string without using the namespace declaration
Finally the program returns 0 after completion, you could also use return EXIT_SUCCESS, this would mean a successful execution.

Compilation Instructions for Linux 
g++ sourcefile.cpp -o destinationfile
To execute in Linux, simply enter ./destinationfile in the console
OUTPUT IS 
Hello World 

ESCAPE CHARACTERS

\' 	single quote 	
\" 	double quote 	
\? 	question mark 	
\\ 	backslash 	
\a 	audible bell 	
\b 	backspace 	
\f 	form feed  
\n 	newline 
\r 	carriage return
\t 	horizontal tab
\v 	vertical tab
\nnn 	arbitrary octal value byte nnn
\xnn 	arbitrary hexadecimal value byte nn, example, cout << "Hello Worl\x64"; would print "Hello World"

*/
