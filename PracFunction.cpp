//wap using function tto calculate factorial of a number
#include<iostream>
using namespace std;

unsigned long long factorial(int n){
    if(n<0){
        return false;
    }

    if(n==0||n==1){
        return 1;
    }
     // Initialize the result to 1, as the factorial starts with 1
    unsigned long long result=1;
    for(int i=2;i<=n;i++){
        result*=i;                      
    }
    
    return result;
}

int main(){
    int num;
    cout<<"Enter a non negative integer to find factorail ";
    cin>>num;
      // Calculate the factorial using the function
   
   
    long long fact=factorial(num);
    cout<<"Factorial of a number is "<<fact<<endl;
    
}

// //In the second iteration, i has the value 3.
// result *= i; means result *= 3;, so result is multiplied by 3.
// result is now 6.





//wap using function to print all the prime number upto n
#include<bits/stdc++.h>
using namespace std;

int isPrime(int n){
    
    if(n<0){
        return false;
    }
    
    if(n==2||n==1 ){
        return false;
    }
    
    for(int i=2;i*i<=n;i++){                                  //i<=sqrt(n) < i<=n/2 <loop
        if(n%i==0)
        return false;
    }
    return true;
}



int main(){
    int num;
    cout<<"Enter a non negative number upto which you want to print prime number ";
    cin>>num;
    
   cout<<"Prime numbers are :-"<<endl;;
   for(int i=1;i<=num;++i){
       
           
       if (isPrime(i)){
           cout<<i<<endl;
        }
        
   }
   return 0;
    
}


//wap using function to print digit of an integer number..!
#include <iostream>
#include <cmath>

// Function to print all digits of an integer
void printDigits(int num) {
    // Handle negative numbers by making them positive
    if (num < 0) {
        num = -num;
    }

    // Extract and print each digit from right to left
    while (num > 0) {
        int digit = num % 10; // Get the rightmost digit
        std::cout << digit << " ";
        num /= 10; // Remove the rightmost digit
    }
}

int main() {
    int num;

    // Input the integer from the user
    std::cout << "Enter an integer: ";
    std::cin >> num;

    std::cout << "Digits of the integer are: ";
    
    // Call the function to print digits
    printDigits(num);

    std::cout << std::endl;

    return 0;
}


#include <iostream>
using namespace std;

// Function to create a number from individual digits
int createNumber(int numDigits) {
    int result = 0;

    cout << "Enter " << numDigits << " digits (from left to right): ";

    for (int i = 0; i < numDigits; ++i) {
        int digit;
        cin >> digit;
        
        if (digit < 0 || digit > 9) {
            cout << "Invalid digit! Please enter a digit between 0 and 9." << std::endl;
            return -1; // Return -1 to indicate an error
        }

        result = result * 10 + digit;    //2<<27<<<273
    }

    return result;
}

int main() {
    int numDigits;

    // Input the number of digits from the user
    cout << "Enter the number of digits: ";
   cin >> numDigits;

    // Validate the number of digits (should be positive)
    if (numDigits <= 0) {
       cout << "Number of digits should be positive." << endl;
        return 1; // Exit with an error code
    }

    int number = createNumber(numDigits);

    if (number != -1) {
       cout << "The number created is: " << number << endl;
    }

    return 0;
}


//wap to convert temperature fehrenheit into celcius

#include <iostream>
using namespace std;

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    // The formula for Fahrenheit to Celsius conversion is: (F - 32) * 5/9
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main() {
    double fahrenheit, celsius;

    // Input the temperature in Fahrenheit from the user
   cout << "Enter temperature in Fahrenheit: ";
   cin >> fahrenheit;

    // Call the fahrenheitToCelsius function to perform the conversion
    celsius = fahrenheitToCelsius(fahrenheit);

    // Display the result
    cout << "Temperature in Celsius: " << celsius << " degrees Celsius" <<endl;

    return 0;
}


//Wap using function to convert temperature kilometers into miles..!

#include<iostream>
using namespace std;

double ConKilometersToMiles(double kilometers){
    return kilometers* 0.621371;
    
}

int main(){
    double kilometers,miles;
    cout<<"Enter the distance in kilometers"<<endl;
    cin>>kilometers;
    
    miles=ConKilometersToMiles(kilometers);
    cout<<"Distance in miles "<<miles<<endl;
    
    return 0;
}


//WAP using function to print a number is even or odd by using bitwise operator
#include <iostream>

// Function to check if a number is even or odd using bitwise AND operator
bool isEven(int num) {
    // If the least significant bit (LSB) is 0, the number is even; otherwise, it's odd
    return (num & 1) == 0;
}

int main() {
    int number;

    // Input the number from the user
   cout << "Enter an integer: ";
    cin >> number;

    // Call the isEven function to check if the number is even or odd
    if (isEven(number)) {
       cout << number << " is even." << endl;
    } else {
        cout << number << " is odd." << endl;
    }

    return 0;
}


//Wap using functions to count the sets of bits of an integer
#include <iostream>
using namespace std;

// Function to count the number of set bits in an integer
int countSetBits(int num) {
    int count = 0;
    while (num > 0) {
        // Use bitwise AND to check the least significant bit
        if (num & 1) {
            count++;
        }
        // Right-shift the number to check the next bit
        num >>= 1;
    }
    return count;
}

int main() {
    int number;

    // Input the number from the user
    cout << "Enter an integer: ";
    cin >> number;

    // Call the countSetBits function to count set bits and display the result
    int setBitCount = countSetBits(number);
    cout << "Number of set bits in " << number << " is: " << setBitCount << endl;

    return 0;
}
//logic Suppose you want to count the set bits in the binary representation of the integer 19. In binary, 19 is represented as 10011.
// In the first iteration, we check the LSB (1), which is a set bit. So, we increment count to 1, and num becomes 1001.
// In the second iteration, we check the next bit (1), which is again a set bit. So, we increment count to 2, and num becomes 100.
// In the third iteration, we check the next bit (0), which is not a set bit. So, count remains 2, and num becomes 10.
// In the fourth iteration, we check the next bit (1), which is a set bit. So, we increment count to 3, and num becomes 1.
// In the fifth iteration, we check the last bit (1), which is a set bit. So, we increment count to 4, and num becomes 0.
// Since num is now 0, the loop exits, and the function returns count, which is 4. So, there are 4 set bits in the binary representation of 19.