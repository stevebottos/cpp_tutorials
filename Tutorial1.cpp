// Tutorial 1 - For Loops and If Statements

/* The line below, "#include <iostream>", tells the program to include the group of functions contained and defined in the specified header file - which in this case is iostream. There are many other types of header files that contain their own groups of functions - you are even able to create and define your own. To learn more about header files, visit: https://www.learncpp.com/cpp-tutorial/19-header-files/
*/
#include <iostream>
# include <string> // We'll talk about this one later...

/* Now that we have included iostream, we can use the functions that are contained in the iostream package, namely "cout" which provides a short way to print data to the console - the black box which appears after you build and run your code - and "endl" which provides a short way to tell the output being sent to the console to jump to a new line. I'll give some examples shortly.

You'll notice that the next line of code is "using namespace std" and you may be wondering what this does. For now, the only thing to keep in mind is the following:

without "using namespace std": std::cout << "Hello World << std::endl;
with "using namespace std": cout << "Hello World << endl;

In this application, it allows is to omit the "std::" portion when calling functions from iostream.
*/
using namespace std;

/* The main() function. By convention, the function main() is reserved in C++ in order to contain the - you guessed it - main portion of the code. It is possible to define other functions as well, which we will discuss later in the course, but these "secondary" functions must be called in main() */

int main(){
	cout << " - - - - - - - - - -" << endl; // for output formatting

	// ================================================================================================
	// cout and endl Intro, Printing To The Console
	// ================================================================================================

    // Let's look at what "endl" does first.
    cout << "Without endl: ";
	cout << "This is a sample of some text being printed to the console...";
	cout << "Without endl";

	// And now with endl...
	cout << endl << endl; // for output formatting
	cout << " - - - - - - - - - -" << endl; // for output formatting
	cout << "With endl: " << endl;
	cout << "This is a sample of some text being printed to the console..." << endl;
	cout << "With endl" << endl;

	// As you can see, formatting your output with "cout" and "endl" is easy!

	// ================================================================================================
	// Quick Intro On Initialization and Data Types
	// ================================================================================================

	/* Now let's talk about initilizing variables and different data types. I'll provide a brief introduction to some common types. For a more in-depth lesson, visit https://www.learncpp.com/ and check out chapter 2. The need to first "initialize" variables rather than just creating them and assigning a value comes from C++'s parent language, C. Let's look at some examples:

	int a = 5; ... Here we have initialized a variable, called "a". We have specified that "a" is of the integer data type - which means, intuitively, that it can only take integer values, ie: 1,2,3,4,5,6.... It cannot take decimal values, ie: 1.0, 2.0, 3.0, 4.0, 5.0, 6.0.... 1.234542, 4.5673, 2.00003... etc.

	float b = 5.0; Here we have initialized a variable called "b". "b" is of the float data type - which means that it can be represented as a decimal value, unlike a.

	Let's see how these two values would behave in different operations.
	*/
    cout << endl; // for output formatting
	cout << " - - - - - - - - - -" << endl; // for output formatting
	int a = 5;
	float b = 5.0;
	cout << "What if we tried a/2? We'd expect to see 2.5..." << endl;
	cout << "a/2 = 5/2 = " << a/2 << endl;

	/* Why, in this case, does a/2 result in 2 and not 2.5? This is because we initialized "a" as an integer. Let's try the same operation with "b" instead and see what we get.
	*/
	cout << endl; // for output formatting
	cout << " - - - - - - - - - -" << endl; // for output formatting
	cout << "What if we tried b/2? We'd expect to see 2.5..." << endl;
	cout << "b/2 = 5/2 = " << b/2 << endl;

	/* There we go, that's the right answer.

	So - the takeaway from this is that you should be wary of how you initialize your variables depending on how you plan on treating them later in the program.

	We can also initialize variables as characters using "char", ie:
	*/

	cout << endl; // for output formatting
	cout << " - - - - - - - - - -" << endl; // for output formatting
	char single_letter = 'c';
	cout << "single_letter stores the character 'c'" << endl;
	cout << "single_ letter = " << single_letter << endl;

	/* But what if we want to initialize a string, such as "Hello World!"? Well, remember the "#include <strings>" header? That header adds a new data type - strings:
	*/
    cout << endl; // for output formatting
	cout << " - - - - - - - - - -" << endl; // for output formatting
	string sentence = "C++ is fun!";
	cout << "Here's our string: " << sentence << endl;

	// ================================================================================================
	// Control Flow - For, While, If/Else
	// ================================================================================================

	/* Finally let's talk about some loops and logic. Again, I'll provide a brief introduction, but I highly recommend that you visit https://www.learncpp.com/ and check out chapter 5 for some more details.

	We'll start with the "for" loop and then compare it to the while loop. The for loop works like this:

        1) Initialize a variable and an initial value for that variable, either outside of the loop or in the brackets.
        2) Specify the condition for which to continue running the loop - will be clearer in the below example.
        3) Specify the value of which to increment the chosen variable after each iteration of the loop.

    The setup is as follows:

    for( initialize/set initial value ; set the condition ; set the value to increment by ){
        do some stuff
    }

    Let's have a look:
    */
    cout << endl; // for output formatting
	cout << " - - - - - - - - - -" << endl; // for output formatting
    int i; // I like to initialize the variable outside of the for loop personally, to me it looks cleaner but it doesn't matter
    for(i=1; i<=10; i++){
        // or for(int i=1; i==10; i++)... or for(i=1; i==10; i += 1)... or for(i=1; i==10; i = i+1)... Many ways...
        cout << i << endl;
    }

    /* So what we've done here is essentially told the program the following:

        1) Here's a variable, "i". "i" is going to serve as the counter for the loop. Note that this can be anything you want, I just decided to go with "i".
        2) As long as "i" is less than or equal to 10, keep running the loop.
        3) After each time the loop is run, increase the value of "i" by 1.

    **NOTE: "i++" just means "add 1 to i". It can also be written as "i += 1", or "i = i+1". It doesn't matter, you can use whichever you prefer. There is also such thing as saying "++i" rather than "i++", and these mean different things, but there are limited applications in which the difference matters - you can find plenty of information on the internet about the differences.

    Let's try another for-loop:
    */
    cout << endl; // for output formatting
	cout << " - - - - - - - - - -" << endl; // for output formatting
    int counter; // I like to initialize the variable outside of the for loop personally, to me it looks cleaner but it doesn't matter
    for(counter=0; counter <= 20; counter += 2){
        cout << counter << endl;
    }

    /* A "while" loop functions in a similar way - both "while" loops and "for" loops are used to accomplish the same things in most cases. A "while" loop is structured as follows:

    while(set the condition only... Variable initialization/value-setting takes place outside the loop){
        do some stuff...
        MAKE SURE to increment your variable within the loop, or else it will just run forever...
    }
    */

    cout << endl; // for output formatting
	cout << " - - - - - - - - - -" << endl; // for output formatting
    int N = 0;
    while(N<10){
        cout << N << endl;
        N = N+1;
    }

    /* Finally, let's talk about "if". These can be as simple as:

            if(some condition){
                do some stuff
            }

        They can also contain an else condition, ie:

            if(some condition){
                do some stuff
            }
            else{
                do some other stuff
            }

        ... The "else" statement need not be followed by a condition. The program simply performs that step if anything besides the condition from the original "if" statement is met. Finally, we can have:

            if(some condition){
                do some stuff
            }
            else if(other condition){
                do some other stuff
            }
            ... As many else if statements as you want...
            else{
                do some other stuff
            }

    Let's have a look:
    */

    cout << endl; // for output formatting
	cout << " - - - - - - - - - -" << endl; // for output formatting
    int variable = 1;
    if(variable == 1){
        /* Use "==" when you are checking if a variable is equal to something. "=" means you are assigning a value to a variable. */
        cout << "Variable is equal to 1" << endl;
    }

    // The output is "Variable is equal to 1", as expected. Now let's have a look at a more complex scenario:

    int num;
    for(num = 0; num <= 25; num++){

        if(num >= 15){
            cout << "Num is greater than/equal to 15, its value is: " << num << endl;
        }
        else if(num >= 5){
            cout << "Num is greater than/equal to 5, its value is: " << num << endl;
        }
        else{
            cout << "Num is less than 5, its value is: " << num << endl;
        }
    }

    // Take a look at the output and see how the if/else statements determine what is printed to the console.

	return 0; // Always include the "return 0;" statement at the end of main(). It simply tells the program to finish and to delete all stored data related to the program from memory.
}

// ================================================================================================
// Questions
// ================================================================================================
/* Q1:
Write a for loop using two variables: count, and flag. Initialize and set count and flag = 0 outside of the loop, and structure your for loop such that it is dependant on the value of flag as its exit condition, ie:

int count;
int flag = 0;
for(count = 0 ; flag == 0; count++){
    ...
}

Have the circle loop until count reaches a certain number - you can decide which number this is - then, using flag, exit the loop. Hint: Since the value of flag is zero unless you manually assign it a new value, you will need to use an if statement within the for loop to measure the value of count and re-assign the value of flag accordingly.
*/

/* Q2:
Repeat Q1 using a while loop. Before starting, re-set count and flag to zero after your for-loop but before your while loop, ie:

int count;
int flag = 0;
for(...){
    ...
}

count = 0
flag = 0
while (flag != 1){  ** != means "does not equal"
    ...
}

This time, allow the loop to continue until count = 15, ie: set flag to 1 using an if statement once the value of count reaches 15. Additionally, set up an if statement to do the following:

- if the value of count is odd, print the value of count followed by the words " is odd"
- if the value of count is even, print the value of count followed by " is even"

The output should look like:

1 is odd
2 is even
3 is odd

... and so on

*/


