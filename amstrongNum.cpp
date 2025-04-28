#include<iostream>
#include<cmath>
using namespace std;



int main(){

    int number,originalNum,remainder, n = 0;

    double result  = 0.0;
    
    cout << "Enter a integer: ";
    cin >> number;

    originalNum = number;

    while(originalNum != 0){
        originalNum /=10;
        ++n;
    }

    originalNum = number;

    while(originalNum!= 0){
        remainder = originalNum % 10;
        result += pow(remainder,n);
        originalNum /= 10;
    }

    if(static_cast<int>(result) == number){

        cout << number << " is an amstrong number." <<  endl;
    } else 
    {
        cout << number << " is not an amstrong number!" << endl;
    }

    return 0;
}