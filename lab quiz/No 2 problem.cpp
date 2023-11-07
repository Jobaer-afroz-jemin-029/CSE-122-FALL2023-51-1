#include<bits/stdc++.h>
using namespace std;

template <typename T>
T greatest(T x, T y, T z) {
    if (x >= y && x >= z) {
        return x;
    } else if (y >= x && y >= z) {
        return y;
    } else {
        return z;
    }
}

int main(){
    int a , b , c;
    cout << "Enter three integer values: ";
    cin >> a >> b >> c;
    char x , y , z;
    cout << "Enter three charecters: ";
    cin >> x >> y >> z;
    float q , w , e;
    cout << "Enter three float numbers: ";
    cin >> q >> w >> e;

    int greatestInt = greatest(a , b , c);
    char greatestChar = greatest(x , y , z);
    float greatestFloat = greatest(q , w , e);
    
    cout << endl;
    cout << "The greatest integer value is: " << greatestInt << endl;
    cout << "The greatest character value is: " << greatestChar << endl;
    cout << "The greatest floating-point value is: " << greatestFloat << endl;
}
