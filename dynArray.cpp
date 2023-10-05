// C++ program to dynamically allocate
// the memory for 2D array in C++

#include <iostream>
using namespace std;

// Driver Code
int main()
{
    // ....................using new operator in a contigours memory allocation using a single pointer............
	// // Dimensions of the 2D array
	// int m = 3, n = 4, c = 0;

	// // Declare a memory block of
	// // size m*n
	// int* arr = new int[m * n];

	// // Traverse the 2D array
	// for (int i = 0; i < m; i++) {
	// 	for (int j = 0; j < n; j++) {

	// 		// Assign values to
	// 		// the memory block
	// 		*(arr + i * n + j) = ++c;
	// 	}
	// }

	// // Traverse the 2D array
	// for (int i = 0; i < m; i++) {
	// 	for (int j = 0; j < n; j++) {

	// 		// Print values of the
	// 		// memory block
	// 		cout << *(arr + i * n + j)
	// 			<< " ";
	// 	}
	// 	cout << endl;
	// }

	// //Delete the array created
	// delete[] arr;

	// return 0;


    //..........array using double pointer mainly used in implementing jagged array when we need a data structure in which we dynamically change the columns
    //of each row............

     // Dimensions of the array
    int m = 3, n = 4, c = 0;
 
    // Declare memory block of size M
    int** a = new int*[m];
 
    for (int i = 0; i < m; i++) {
 
        // Declare a memory block
        // of size n
        a[i] = new int[n];
    }
 
    // Traverse the 2D array
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
 
            // Assign values to the
            // memory blocks created
            a[i][j] = ++c;
        }
    }
 
    // Traverse the 2D array
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
 
            // Print the values of
            // memory blocks created
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
 
    // Delete the array created
    for (int i = 0; i < m; i++) // To delete the inner
                                // arrays
        delete[] a[i];
    delete[] a; // To delete the outer array
                // which contained the pointers
                // of all the inner arrays
 
    return 0;
}





/*
Flexibility in Column Sizes:

Previous Program: All rows have the same number of columns.
Current Program: Each row can have a different number of columns (jagged array). This is particularly useful when dealing with irregular data structures where the size of each row varies.
Accessing Elements:

Previous Program: Elements were accessed using pointer arithmetic on a contiguous memory block.
Current Program: Elements are accessed using double pointers. The first pointer points to an array of pointers (rows), and each row pointer points to an array representing a row.
Memory Deallocation:

Previous Program: One delete[] was used to deallocate the entire 1D array.
Current Program: Two levels of deallocation are needed: first, the inner arrays representing rows are deallocated, followed by the array of pointers.
*/


