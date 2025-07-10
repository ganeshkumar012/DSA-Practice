#include<bits/stdc++.h>
using namespace std;

// Brute Force O(N^2)

// void FrequencyArr(int arr[],int n){
//     vector<bool> visited(n,false);

//     int minFrequency = n, maxFrequency = 0;

//     int maxElement = 0, minElement = 0;


//     for(int i = 0; i < n;i++){

//         if(visited[i] == true){
//             continue;
//         }

//         int count = 1;

//         for(int j = i+1; j < n; j++){
//             if(arr[i] == arr[j]){
//                 visited[j] = true;
//                 count++;
//             }
//         }

//         if(count > maxFrequency){
//             maxElement = arr[i];
//             maxFrequency = count;
//         }

//         if(count < minFrequency) {
//             minElement = arr[i];
//             minFrequency = count;
//         }
//     }
//     cout << "The Highest Freuency element is :" << maxElement << endl;
//     cout << "The Lowest Frequency element is :" << minElement << endl;

// }





// int main(){
//     int arr[] = {10, 5, 10, 15, 10, 5};
//     int n  = sizeof(arr) / sizeof(arr[0]);
//     FrequencyArr(arr,n);
//     return 0;
// }



//Optimized approach O(N)


void countFrequency(int arr[], int n ){

    unordered_map<int,int> Freq;

    for(int i = 0; i < n; i++){
        Freq[arr[i]]++;
    }

    int maxFreq = 0, minFreq = n;
    int maxElement = 0,minElement = 0;

    for(auto it : Freq){
        int count = it.second;
        int element = it.first;


        if(count > maxFreq) {
            maxElement = element;
            maxFreq = count;
        }
        if(count < minFreq) {
            minElement = element;
            minFreq = count;
        }
    }
    cout << "The highest frequency element is: " << maxElement << "\n";
    cout << "The lowest frequency element is: " << minElement << "\n";

}




int main() {
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    countFrequency(arr,n);
    return 0;
}