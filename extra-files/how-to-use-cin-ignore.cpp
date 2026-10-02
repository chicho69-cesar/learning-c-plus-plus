//pedir los nombres de 5 personas e imprimirlos

#include<iostream>
#include<stdlib.h>

using namespace std; 

int main() {
    char n1[30], n2[30], n3[30], n4[30], n5[30];
    
    cout<<"Escribe el nombre de la primera persona: ";
    cin.getline(n1, 30, '\n');
    cin.ignore(100, '\n');
    cout<<"Escribe el nombre de la segunda persona: ";
    cin.getline(n2, 30, '\n');
    cin.ignore(100, '\n');
    cout<<"Escribe el nombre de la tercera persona: ";
    cin.getline(n3, 30, '\n');
    cin.ignore(100, '\n');
    cout<<"Escribe el nombre de la cuarta persona: ";
    cin.getline(n4, 30, '\n');
    cin.ignore(100, '\n');
    cout<<"Escribe el nombre de la quinta persona: ";
    cin.getline(n5, 30, '\n');
    cin.ignore(100, '\n');
    
    cout<<endl<<"El nombre de la primera persona es: "<<n1;
    cout<<endl<<"El nombre de la segunda persona es: "<<n2;
    cout<<endl<<"El nombre de la tercera persona es: "<<n3;
    cout<<endl<<"El nombre de la cuarta persona es: "<<n4;
    cout<<endl<<"El nombre de la quinta persona es: "<<n5;
    
    cout<<"\n\n";
    system("pause");
    return 0;
}
