// Tutorial 3 - Arrays Continued - Intro To Strings

#include <iostream>
#include <string>
using namespace std;

int main(){

	// ================================================================================================
	// Selection Sort Algorithm
	// ================================================================================================
    cout << "Selection Sort Example: " << endl;
	/* Many types of search/sort algorithms exist, we'll just touch on the Selection Sort algorithm. More details are available at          learncpp.com, Section 6.4.

	General Steps:
        1) Get a list of unsorted numbers
        2) Set a marker for the unsorted section at the front of the list
        3) Repeat steps 4 - 6 until one number remains in the unsorted section
        4) Compare all unsorted numbers in order to select the smallest one
        5) Swap this number with the first number in the unsorted section
        6) Advance the marker to the right one position
        7) Stop

    Example:
    */
	int length = 10;
	int array[length] = {3, 5, 2, 10, 4, 1, 8, 6, 9, 7};

	// Print the original array:
	cout << "Iteration 0: ";
	for (int index = 0; index < length; ++index){
            cout << array[index] << ' ';
    }
        cout << endl;

	// Step through each element of the array (except the last one, which will already be sorted by the time we get there)
	for (int startIndex = 0; startIndex < length - 1; startIndex++)
	{
		// smallestIndex is the index of the smallest element we’ve encountered this iteration. Start by assuming the smallest element is the first element of this iteration
		int smallestIndex = startIndex;

		// Then look for a smaller element in the rest of the array
		for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
		{
			// If we've found an element that is smaller than our previously found smallest, then keep track of it
			if (array[currentIndex] < array[smallestIndex]){
				smallestIndex = currentIndex;
			}
		}

		/* smallestIndex is now the smallest element in the remaining array swap our start element with our smallest element (this sorts it into the correct place). A typical "swap" routine for two elements in an array can be written as follows:
*/
		int hold;
		hold = array[startIndex];
		array[startIndex] = array[smallestIndex];
		array[smallestIndex] = hold;

		// Printing the array after each step:
        cout << "Iteration " << startIndex+1 << ": ";
		for (int index = 0; index < length; ++index){
            cout << array[index] << ' ';
        }
        cout << endl;
	}

	// Now that the whole array is sorted, print our sorted array as proof it works
	cout << "Sorted Array: ";
	for (int index = 0; index < length; ++index){
            cout << array[index] << ' ';
	}
    cout << endl;

    // ================================================================================================
	// Intro To Strings
	// ================================================================================================
    cout << endl << "Strings Example: " << endl;
	/* Strings in C++ can be thought of as arrays of characters(up until now, we've just been working with arrays of integers and floats.
Initializing strings is simple, and it can be done as follows:
*/
    char myString[] = "string";

    /* The equivalent of this, in terms of integers, would look something like:

    int myArray[] = {1,2,3,4,5,6};

    It can be seen that myString only contains a 6 letter word, and thus we would expect it to be an array having dimensions [1x6]. In fact, this array is [1x7]. This is because in every string array, C++ automatically appends something called a "null character" to the end of the array. The null character can be described as: '\0', but when printed it will not show up. It is useful to remember the null character when you are doing operations involving strings, since it can be used as a condition, ie:

    */
    int flag = 0;
    int idx;
    while (flag == 0){
        for (idx = 0; myString[idx] != '\0'; idx++){
            cout << myString[idx];
        }
        flag = 1;
    }
    // Alternatively, we can just print the string in one step - unlike other arrays:
    cout << endl << myString << endl;

    // And to prove that myString does indeed have 7 characters:

    int len = sizeof(myString) / sizeof(char); /* a clever way to get the length of an array... Divide the size of the full array by the size of one single element in the array */
    cout << myString << " has " << len << " characters.\n";
    // The ASCII values for each character. This is useful for when you want to sort things alphabetically
    cout << "ASCII values of each character in myString: ";
    int i;
    for (i = 0; i < len; ++i){
        cout << static_cast<int>(myString[i]) << " ";
    }
    /* This introduces the idea of "casting". static_cast<dtype1>(dtype2) will represent dtype 2 as dtype 1, ie:
    static_cast<int>('s') = 115
    static_cast<char>(115) = 's'
    static_cast<float>(115) = 115.0

    ... You'll have to use this for the tutorial question!
*/

    cout << endl;

    // C++ strings can be re-arranged in the same way as number arrays, ie:
    myString[1] = 'h';
    myString[4] = 'm';
    myString[5] = 'p';
    cout << myString << endl;

    /* The <cstring> library contains many useful functions to assist with working with strings. To keep these tutorials short, I won't get into details on what that library contains - but I recommend taking a look if you are currently trying to learn C++ at a more advanced level.
    */
    return 0;
}

    // ================================================================================================
	// Questions
	// ================================================================================================

/* Q1: Use what you have learned about the selection sort algorithm and string manipulation in order to sort the following array in alphabetical order:

char alpha[] = "kbfdjagiehc";

Then, print the ASCII values of each character in the string.

*/



