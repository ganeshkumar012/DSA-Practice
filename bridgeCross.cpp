#include <bits/stdc++.h>
using namespace std;




int main(){
    vector<int>avengers(4);

    for(int i = 0; i<4; ++i){
        cin >> avengers[i];
    }

    sort(avengers.begin(),avengers.end());
    int totalTime = 0;
    int n = avengers.size();

    while(n > 3) {

        int option1 = avengers[0] + 2 * avengers[1] + avengers[n-1];
        int option2 = 2 * avengers[0] + avengers[n-2] + avengers[n-1];

        totalTime += min(option1,option2);

        n -= 2;
    }

    if(n == 3){
        totalTime += avengers[0] + avengers[1] + avengers[2];
    } else if(n == 2){
        totalTime += avengers[1];
    } else if(n == 1){
        totalTime += avengers[0];
    }

    cout << totalTime << endl;

}