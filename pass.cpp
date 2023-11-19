#include <iostream>

using namespace std;

int main(){

    int mark;

    cout << "please enter your result: ";
    cin >> mark;

    if (mark >= 50) 
            cout <<"You pass!" << endl;
    else
        cout <<"You fail" << endl;
        
    return 0;
}