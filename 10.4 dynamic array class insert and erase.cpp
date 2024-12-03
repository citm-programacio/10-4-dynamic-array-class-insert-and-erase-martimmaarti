/*In the last micro exam, we created a function to split an array.
Make it a class to store the array that has the array itself, information on current size and capacity, and a constructor;
Create functions to erase an element and insert an element (and use them in main):*/

#include <iostream>
#include <string>
using namespace std;
const int SIZE = 10;

class Array {
public:
    string originalArray[SIZE]={"zero", "one", "two", "tree", "four", "five", "six", "seven", "eight", "nine"};
    int size= SIZE;
    void splitArray(string *originalArray, int originalSize, int splitPoint, string *firstPart, string *secondPart){
        int i = 0;

        for (i = 0; i < splitPoint-1; i++) {
            firstPart[i] = originalArray[i];
        }

        for (i = splitPoint-1; i < originalSize; i++) {
            secondPart[i] = originalArray[i];
        }
    };
};


int main() {
    Array array;
    string firstPart[SIZE];
    string secondPart[SIZE];
    int splitPoint;
    int originalSize;
    for (originalSize = 0; originalSize < 10; originalSize++) {
        cout << array.originalArray[originalSize] << " ";
    }
    cout << "\nPlease, insert where do you want to cut this array of size "<< originalSize << ":" << endl;

    cin >> splitPoint;

    array.splitArray(array.originalArray, originalSize, splitPoint, firstPart, secondPart);

    int i;
    cout << "First part:" << endl;
    for (i = 0; i < splitPoint-1; i++) {
        cout << firstPart[i] << " ";
    }
    int j = i;
    cout << endl << "SIZE 1ST PART: " << j << endl;

    cout << "\nSecond part:" << endl;
    for (i = splitPoint-1; i < originalSize; i++) {
        cout << secondPart[i] << " ";
    }
     cout << endl << "SIZE 2ST PART: " << i-j << endl;
}
