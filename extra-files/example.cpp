#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int a, b, sum;
    
    cout << "Escribe un numero: ";
    cin >> a;
    cout << "Escribe otro numero: ";
    cin >> b;
    
    sum = a + b;
    
    cout << "\nLa suma es: " << sum << " putos";
    
    cout << "\n\n";
    system("pause");
    return 0;
}
