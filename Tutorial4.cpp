// Tutorial 4 - Function Basics

#include <iostream>
#include <string>
using namespace std;

/* In C++ it is possible to define your own functions just as it is in Matlab. Functions are covered completely in Chapter 7 of learncpp.com.

Functions in C++ must exist in 3 places, which are:

    1) Function Declaration
    2) Function Body
    3) Function Callout

By now, we're all familiar with main(). The locations of 1, 2, and 3 in your code are all defined with respect to main() by convention. Before we talk about where to put them, let's discuss what 1, 2, and 3 actually are, and then we'll run through a few coded examples.

- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    1) FUNCTION DECLARATION - This is very similar to declaring a variable (ie: int a = 1). This step defines the following information about your function:

        return_type function_name( parameter list );

Where return_type can take the same data types as variables (ie: int, char, float), plus the return type "void". You're already familiar with return types and in fact are already familiar with function bodies as well - take main() for example: when we state,
    int main(){
        ...
        return 0
    }
the function main() is returning 0 - which is an integer. The function  declaration for main() would look something like:
    int main(); ... main has no parameters so parameter list is empty
We don't need to declare main() though since it works differently than user defined functions. As for the return type "void", we use this when nothing is to be returned at all by the function. This might be a bit confusing, but consider a function that does nothing but print a value to the console. In this case, there is no value being returned for use later in the program - just a print step.

- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    2) FUNCTION BODY - As was mentioned, you're already familiar with function bodies. The function body contains the code which runs during the function callout. When you write code within main(), you are essentially writing a function body. It would look something like this:

    return_type function_name( parameter list){
        ... code
        return <value to return> (*only if return_type is not void)
    }

It might seem a bit redundant to repeat the function declaration when coding the function body, but this is the convention. Also it's worth mentioning at this point that these functions won't run at all until they are called within main(). In c++ code the only code that runs is in main(), which brins us to...

- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    3) FUNCTION CALLOUT - This step is easy. This is when we actually call the function in main() to run, executing any code that we included in that function's body. ie:

    (in main) function_name( parameter list)

- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    CODE STRUCTURE ... By convention, we locate 1, 2, and 3 in the following locations in our code:

    FUNCTION DECLARATION(s) are located above main()
    FUNCTION BODY(s) are located below main()
    FUNCTION CALLOUT(s) are located within main

... See below for some examples
*/
// ================================================================================================
// Function Declarations
// ================================================================================================
int add2nums(int a, int b);
char intToChar(int num);
int create1DArray(int arr[], int size); // will create a 1D array of ones of a zpecified size
void print1DArray(int arr[], int n); // will print the array

int main(){
    // Calling "add2nums" and printing the result...
    cout << "add2nums output for a = 2 and b = 3: " << add2nums(2,3) << endl;
    // We can also create new variables with functions, ie:
    int sum = add2nums(5,5);
    cout << "Sum of 5 and 5: " << sum << endl;
    // Let's see the characters that these integers represent...
    cout << "intToChar output for the integer 1 (ASCII Value): " << intToChar(1) << endl;
    cout << "intToChar output for the integer 145 (ASCII Value): " << intToChar(97) << endl;
    cout << "intToChar output for the integer 145 (ASCII Value): " << intToChar(98) << endl;
    cout << "intToChar output for the integer 100 (ASCII Value): " << intToChar(99) << endl;
    // Creating an array of ones:
    int m = 10;
    int array_of_ones[m];
    create1DArray(array_of_ones, m); // This will modify array_of_ones to contain all ones rather than being empty
    // Printing it...
    print1DArray(array_of_ones, m);
    return 0;
}

// ================================================================================================
// Function Bodies
// ================================================================================================

int add2nums(int a, int b){
    return a+b;
}
char intToChar(int num){
    char num_as_char = static_cast<char>(num);
    return num_as_char;
}
int create1DArray(int arr[], int size){
    int i;
    for(i=0;i<size;i++){
        arr[i] = 1;
    }
}
void print1DArray(int arr[], int n){
    int counter = 0;
    while(counter<n){
        cout << arr[counter] << endl;
        counter++;
    }
}

// ================================================================================================
// Questions
// ================================================================================================

/*
1) Write a function that will take an empty array of size 25 as input and modify each element such that the array stores values from 1 to 25.
2) Write a function to print this array to show your output.
3) Write a function to iterate through that array and print whether or not a number is: even, odd, and prime.

... Make sure to call your functions in main() and show your output!
