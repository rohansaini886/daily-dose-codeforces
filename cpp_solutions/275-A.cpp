#include <iostream>

using namespace std;

int main()
{
    int a11, a12, a13, a21, a22, a23, a31, a32, a33;
    cin >> a11 >> a12 >> a13 >> a21 >> a22 >> a23 >> a31 >> a32 >> a33;

    if((a11 + a12 + a21) % 2 == 0 ){
        cout << "1";
    }else{
        cout << "0";
    }
    if((a11 + a12 + a13 + a22) % 2 == 0 ){
        cout << "1";
    }else{
        cout << "0";
    }
    if((a12 + a13 + a23) % 2 == 0){
        cout << "1" << endl;
    }else{
        cout << "0" << endl;
    }
    if((a11 + a21 + a22 + a31) % 2 == 0 ){
        cout << "1";
    }else{
        cout << "0";
    }
    if((a12 + a21 + a22 + a23 + a32) % 2 == 0 ){
        cout << "1";
    }else{
        cout << "0";
    }
    if((a13 + a22 + a23 + a33) % 2 == 0){
        cout << "1" << endl;
    }else{
        cout << "0" << endl;
    }
    if((a21 + a31 + a32) % 2 == 0){
        cout << "1";
    }else{
        cout << "0";
    }
    if((a22 + a31 + a32 + a33) % 2 == 0) {
        cout << "1";
    }else{
        cout << "0";
    }
    if((a23 + a32 + a33) % 2 == 0){
        cout << "1";
    }else{
        cout << "0";
    }
    return 0;
}
