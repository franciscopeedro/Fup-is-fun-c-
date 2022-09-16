#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    cout << "O quociente: " << a/b << endl;
    cout << "O resto: " << a%b << endl;
    cout << "O resultando com decimais: " << fixed << setprecision(2) << float(a) /b  << endl;

}

