#include<iostream>
using namespace std;

int main(){
    int start,End;

    cout<<"Enter start number: ";
    cin>> start;

    cout<<"Enter end number: ";
    cin>> End;

    for(int i = start; i< End; i++){
            cout<<"Your number: %d"<< i<<" \n";
    }

return 0;
}
