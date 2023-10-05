#include<iostream>
using namespace std ;

//function to print 1d array and their addresses
void print1D(int arr[],int size){
    for(int i=0;i<size;i++){
      cout << "Element at index " << i << ": " << arr[i] << " (Address: " << &arr[i] << ")" << endl;

  }
}

//function to print 2d array and their addresses
void print2D(int arr[][3],int rows,int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout <<"arr("<<i+1<<" , "<<j+1<<"): ";
            cout  << arr[i][j] << " (Address: " << &arr[i][j] << ")" << endl;
        }
    }
}

//function to print 3d array and their addresses
void print3D(int arr[][4][5], int dim1, int dim2, int dim3){
    for(int i=0;i<dim1;i++){
        for(int j=0;j<dim2;j++){
            for(int k=0;k<dim3;k++) {
                cout <<"arr("<<i+1<<" , "<<j+1<<" , "<<k+1<<"):"<<arr[i][j][k]<< " (Address: " << &arr[i][j][k]<< ")" << endl;
            }
       }
    }
  }


int main(){
    //for 1d array
    int arr1D[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr1D) / sizeof(arr1D[0]);
    //for 2d array
    int arr2D[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = sizeof(arr2D) / sizeof(arr2D[0]);
    int cols = sizeof(arr2D[0]) / sizeof(arr2D[0][0]);
    //for 3d array
    const int dim1 = 2;  // Number of 2D arrays
    const int dim2 = 4;  // Rows in each 2D array
    const int dim3 = 5;  // Columns in each 2D array

    int arr3D[dim1][dim2][dim3] = {
        {{1, 2, 3, 4, 5},
         {6, 7, 8, 9, 10},
         {11, 12, 13, 14, 15},
         {16, 17, 18, 19, 20}},
        {{21, 22, 23, 24, 25},
         {26, 27, 28, 29, 30},
         {31, 32, 33, 34, 35},
         {36, 37, 38, 39, 40}}
    };

    cout << "Printing 3D Array Elements and Addresses:" << endl;

    // print1D(arr1D, size);
    // print2D(arr2D, rows,cols);
    print3D(arr3D, dim1,dim2,dim3);

    return 0;
    
}

