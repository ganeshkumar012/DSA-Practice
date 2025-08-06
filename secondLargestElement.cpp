#include <bits/stdc++.h>
using namespace std;

// int secondLargestElement(vector<int>arr){

//     int n = arr.size();

//     sort(arr.begin(),arr.end());

//     for(int i = n-2;i>=0;i++){
//         if(arr[i] != arr[n-1]){
//             return arr[i];
//         }
//     }
//     return -1;
//     // return arr[n-2];
// }

// int main(){
//     vector<int>arr = {12, 35, 1, 10, 34, 1};
//     cout << secondLargestElement(arr) << endl;
//     return 0;
// }

// optimal approach O(n)

int secondLargestElement(vector<int> arr)
{

    int n = arr.size();

    int largest = -1, secondLargest = -1;

    for (int i = 0; i < n; ++i)
    {

        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }

        if (arr[i] < largest && arr[i] > secondLargest)
        {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}
int main()
{
    vector<int> arr = {12, 35, 1, 10, 34, 1};
    cout << secondLargestElement(arr) << endl;
    return 0;
}