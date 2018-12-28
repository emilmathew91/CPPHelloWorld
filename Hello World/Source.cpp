#include <iostream> /* Following are my notes. This is a header file. 
                    # is a preprocessor directive which reads your program before it is compiled and only executes those lines in the begining.
                    iostream is the name of the file to be executed. */
using namespace std;//namespace is used to organize the names of program entities (which is the name of variables, funcitons, obj etc, things that have names)

int main() {        //this is a function, within which we can define what we want to do. essentially it is a group of programming statements. every C++ program has a function called main.
	cout << "Hello World!" << endl; /*characters within the "" is called the string literal or string constant. endl is a stream manipulator which creates a new line.
	                    endl can be replaced with \n.This is an escape sequence, starts with \ and followed by a control character \n, \a (alarm), \t(horizontal tab).     
	                    cout prints the string literal to the screen. 
	                    cout is a stream object, i.e. works with streams of data. << is called the stream insertion operator. */
	return 0; // sends the integer 0 back to the OS when program is completed. 
}