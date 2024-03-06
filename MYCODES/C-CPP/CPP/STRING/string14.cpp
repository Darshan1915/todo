// Now, how to read string with spaces in C++?

// We can use a function getline(), that enable to read string until enter (return key) not found.

// Reading string using cin.getline() with spaces
// getline() is the member fucntion of istream class, which is used to read string with spaces, here are the following parameters
//  of getline() function [Read more about std::istream::getline]

// Syntax:

// istream& getline (char* s, streamsize n );
// char*s: character pointer (string) to store the string
// streamsize n: maximum number of characters to read a string

// Consider the given program

#include <iostream>
using namespace std;

int main()
{
	char name[100],i;

    cout<<"Enter your full name : ";
    cin.getline(name,100);
    //We have used a cin.get() statement to take a multi-word string input from the user. In cin.get() statement, 
    //the first argument is the name of the character array and the second argument is the size of the character array.

    cout<<"Your full name is : "<<name;
	
	return 0;
}