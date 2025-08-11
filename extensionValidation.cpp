#include<iostream>
#include<algorithm>
#include<string>
#include <unordered_set>

using namespace std;

// bool isValidImageExtension(const string& input){

//     unordered_set<string>extensions = {".jpg",".png",".gif",".jpeg","bmp", ".tiff", ".webp", ".svg"};

//     string lowerExt = input;

//     transform(lowerExt.begin(),lowerExt.end(),lowerExt.begin(),::tolower);
    
//     return extensions.count(lowerExt) > 0;

// }

// int main() {

//     string input;
//     cin >> input;

//     if( isValidImageExtension(input)){
//         cout << "true" << endl;
//     } else {
//         cout << "false" << endl;
//     }

//     return 0;

// }


// program for a full filename extension


bool isValidImageExtension(const string& filename){

    unordered_set<string>validExtensions = {
        ".jpg", ".jpeg", ".png", ".gif", ".bmp", ".tiff", ".webp", ".svg"
    };


    size_t dotpos = filename.rfind('.');
    if(dotpos == string::npos){
        return false;
    }

    string extension = filename.substr(dotpos);

    transform(extension.begin(),extension.end(),extension.begin(),::tolower);

    return validExtensions.count(extension) > 0;
}

int main(){

    string input;
    cin >> input;


    cout << (isValidImageExtension(input)? "true" : "false") << endl;
    return 0;
}