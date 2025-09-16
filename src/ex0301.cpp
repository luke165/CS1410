#include <iostream>
#include <string>

using namespace std;
string repChar(char , int); //prototype
long hms_2_secs(int, int, int);

int main(){
    cout <<repChar('X', 8);
    return 0;
}

string repChar(char c, int n){
    string r;
    for(int i = 0; i < n; i++){
        r = r + c;
    }
    return r;
}