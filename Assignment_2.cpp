//  Sorting Orders

// Write a program that uses two identical arrays  of just eight integers. 

// It should display the contents of the first array, then call a function 
// to sort the array using an ascending order bubble sort modified to print 
// out the array contents after each pass of the sort. 

// Next, the program should 
// display the contents of the second array, then call a function to sort the 
// array using an ascending order selection sort modified  to print out the array 
// contents after each pass of the sort.
 
 
 
 void swap_(int arr[], int n) {
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int c = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = c;
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}
 

 const int SIZE = 8; 
 
 #include <iostream> 
 using namespace std;


 int main(){

int array1[8] = {5,9,2,8,4,11,13,59}; 
int array2[8] = {5,9,2,8,4,11,13,59};


int n = sizeof(array1) / sizeof(array1[0]);

cout << "The origional array is: ";
for (int i = 0; i < SIZE; i++){
    cout << array2[i] << " "; 
}

swap_(array1, n);

cout << " \nThe swapped array is ";
for(int i = 0; i < SIZE; i++){
    cout << array1[i] << " "; 
}

    return 0; 
 }