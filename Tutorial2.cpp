// Tutorial 2 - Arrays

/* At this point you are all likely familiar with Matlab arrays. We'll now discuss arrays in C++. This tutorial will touch on some key concepts, if you'd like to learn about arrays in C++ and their capabilities in further detail please check out https://www.learncpp.com - Chapter 6. For those of you that are visiting the website, you'll notice that we're jumping from chapter to chapter. If you are interested in learning C++ at a more advanced level please email me (bottos@uwindsor.ca) and I will direct you to some concepts that I recommend in order to build a solid foundation.
*/

#include <iostream>
# include <string>

using namespace std;


int main(){

	// ================================================================================================
	// Initializing Arrays
	// ================================================================================================

    /* Arrays in C++ are brought into existence differently than those in Matlab. The process is a little bit more clunky, but it has its benefits. The first concept to wrap your heads around is that arrays are initialized just like any other variable, ie:
    */

    int int_array[5];
    char char_array[10];
    float float_array[15];

    // We haven't included any values yet. For instance have a look at this output:

    cout << "int_array: " << int_array << endl;

    /* What you are seeing is called a hexidecimal value (hexidecimal values begin with 0x), and what this number represents is actually an "address". This is the memory location that the array is stored in. Before we get into what that means exactly let's break down what each element in the initialization means. The general structure is as follows:

    dtype arrayname[n]; ... where "dtype" is a data type such as int, char, float, double... etc, "arrayname" is some arbitrary name for your array, and the "n" within the [brackets] is the number of elements you would like to store in your array. For instance,

    int int_array[5]; will initialize an array that is able to store 5 integers. If you try to store more, for instance, 6 integers, you will run into an "overflow" error. The reason for this comes back to the concept of memory. Concretely, an array in C++ is simply just a reserved amount of memory in which you can store values - where an int array reserves memory for int values, a float array reserves memory for float values, etc... Let's look at an example to help grasp this concept.
    */

    int a;
    /* We'll use a new function here to check the "size" of "a". What this function returns is the actual amount of memory in your compter that is reserved for a value of the data type integer in C++.
    */

    cout << "Size of 'a', in bytes: " << sizeof(a) << endl;
    // It doesn't matter if we assign a value to "a", the size does not change, ie:
    a = 123456789;
    cout << "Size of 'a = 123456789', in bytes: " << sizeof(a) << endl;

    /* The "size" in terms of memory is still just 4 bytes. The key concept to grasp here is that when you intialize a variable in C++, what you are actually doing is reserving some space in your memory to contain the value of that variable. Once you assign a value to the initialized variable, that value is stored in memory at the reserved location. What about an array?
    */

    int something[3]; // Reserves space in memory for 3 integer values - we would expect 12 bytes
    cout << "Size of 'something', in bytes: " << sizeof(something) << endl;
    // The result is indeed 12 bytes. You can perform similar tests with different data types as an experiment if you wish...

    // Alternatively, it is possible to assign values to an array right away as follows:
    int numbers[6] = {1, 2, 3, 4, 5, 6};
    // Arrays can also be two dimensional, ie:
    int array2d[2][3]; // Stores values in the format [row][column]
    // We can assign values to this as follows:
    int another_array2d[2][3] = { {1,2,3}, {4,5,6} };
    /* You can not initialize array and then attempt to assign values in this manner, ie:
    int numbers[6];
    numbers = {1,2,3,4,5,6};
    ... or ...
    inr array2d[2][3];
    array2d = { {1,2,3},{4,5,6} }
    ... will not work

    // ================================================================================================
	// Working With Arrays
	// ================================================================================================

	/* Now that you are hopefully comfortable with what exactly an array is in C++ we can start working with them. I'm sure that I don't need to explain why arrays are useful as you have worked with them in Matlab and in other classes considerably. Unfortunately, working with arrays in C++ is a bit more work than it is in Matlab. We'll start with simple addition.
    */

    float arr1[10] = {1.1, 3.4, 5.2, 4.7, 5.07, 2.134, 1.234, 2.0, 3.0, 1.9};
    float arr2[10] = {8.7, 3.1, 5.62, 2.3, 4.97, 1.09, 9.50, 1.96, 9.8, 1.23};
    float suma1a2[10] = { 0 }; // initializes with all elements set to zero.

    /* Now, in order to add these two we can't simply use arr1 + arr2. We actually have to iterate through each element in each array and manually add them together, then store the result in suma1a2. One thing to note:

    ** INDEXING OF ARRAYS IN C++ BEGINS AT 0, NOT AT 1 LIKE IN MATLAB
    */

    int i;
    for(i=0; i<10; i++){
        suma1a2[i] = arr1[i] + arr2[i];
    }

    /* So now we have the sum. Printing the array requires iteration over each element as well - we cannot simply use
    cout << suma1a2; to print the array. It is necessary to iterate over each element in order to view its contents, which can be done as follows:
    */

    for(i=0; i<10; i++){
        cout << "element " << i << " in suma1a2: " << arr1[i] << "+" << arr2[i] << " = " << suma1a2[i] << endl;
    }

    /* Element-wise multiplication would be done in a similar manner, where the "+" operation is replaced with "*". Now I'll demonstrate a simple algorithm called "linear search" on a 2D array. What the algorithm will do is search for elements in the array that meet some specification, ie: "less than 5" or "equal to 0" etc.
    */

    int rows = 5;
    int cols = 5; /* When I know I'll be working with loops, I like to store the number of rows and columns as variables so that I can easily set the for loop conditions as shown below without having to back-track and check the size of the array. This becomes more useful with larger programs and more comlex operations*/
    int arr2d[rows][cols] = {
        { 1, 7, 34, 9, 10 },
        { 1, 5, 4, 18, 3},
        {6, 72, 8, 4, 6},
        {7, 3, 43, 2, 6},
        {23, 2, 7, 4, 50}
    };

    // We'll search for values greater than or equal to 10 in this array
    int r, c;
    for(r = 0; r<rows; r++){ // this loop iterates through each row...
            for(c = 0; c<cols; c++){ // this loop iterates through each column...
                    if(arr2d[r][c] >= 10){
                        cout << "The element in row " << r << ", column" << c << " is greater/equal to 10, at: " << arr2d[r][c] << endl;
                    }
            }
    }
}

// ================================================================================================
// Questions
// ================================================================================================

/* Q1: Matrix Multiplication
    Initilize the following matrix:

    rows = 4;
    cols = 3;
    int A[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
        };

    and multiply it by its transpose. Show your results by printing the transpose of A - Atransposed, and the result of A*Atransposed, B... NOTE: matrix multiplication, NOT element-wise multiplication.

    Hints:
    - A is [rows][cols], so Atransposed will be [cols][rows]
    - The resultant matrix, B, will therefore be [rows][rows]
    - Proper matrix multiplication will require three for-loops, structured as follows:

    for(int i=0;i<rows;i++){
        for(int j=0;j<rows;j++){

            ... These two loops are simply to iterate through each element in B. B is [rows][rows] so the counters i and j are  limited by rows only, not cols. Keep in mind that each element in B will be the dot product of each row in A times each column in Atranspose - if you need a refresher on matrix multiplication a quick google search should be enough. As such, you'll need something to store the value of the sum of each dot product, so initialize some variable for that in this loop:

            int store = 0;

            ... Now have another for-loop to actually compute the dot product:

            for(c=0; c<cols; c++){
                store += (each row element in A)*(each column element in Atransposed)
            }

            B[i][j] = store;
        }
    }
    */



