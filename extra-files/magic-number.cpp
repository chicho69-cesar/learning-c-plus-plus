//Numero magico

#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

using namespace std;

void gotoxy(int,int);

int main(){
    int n, data, attempts=0;
    
    srand(time(NULL));
    data = rand() % 100 - 1 + 1;
    
    gotoxy(10,1); cout<<".:BIENVENIDO AL NUMERO MÁGICO:.";
    
    do{
        gotoxy(15,5); cout<<"Escribe un numero: [      ]";
        gotoxy(36,5); cin>>n;
        
        if(n < data){
            gotoxy(5,8); cout<<"El numero mágico es mayor escribe otra vez el numero";
        }

        if(n > data){
            gotoxy(5,8); cout<<"El numero mágico es menor escribe otra vez el numero";
        }
        
        attempts++;
    } while (n != data);
    
    gotoxy(10,10); cout<<".:FELICIDADES ADIVINASTE EL NUMERO MÁGICO:.";
    gotoxy(10,11); cout<<"Numero de attempts: "<<attempts;
    
    gotoxy(10,20); cout<<"\n"; system("pause");
    return 0;
}

void gotoxy(int x,int y){
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon,dwPos);
}
