//uso de la sentencia gotoxy

#include<iostream>
#include<conio.h>
#include<windows.h>

using namespace std;

void gotoxy(int,int);

int main() {
    int i, j;
    
    gotoxy(30,10); cout<<"imprimiendo las tablas de multiplicar";
    gotoxy(29,13); cout<<char(200);
    gotoxy(30,12); system("pause");
    system("cls");
    
    for(int i=1; i<=10; i++){
        for(int y=40;y<=52;y++){
            gotoxy(y,3); cout<<char(250);
            
            if(i == 10){
                for(int w=40;w<=53;w++){
                    gotoxy(w,3); cout<<char(250);
                }
            }
        }
        for(int x=40;x<=52;x++){
            gotoxy(x,5); cout<<char(250);
            
            if(i == 10){
                for(int z=40;z<=53;z++){
                    gotoxy(z,5); cout<<char(250);
                }
            }
        }
        
        gotoxy(40,4); cout<<char(250); cout<<"TABLA DEL "<<i; cout<<char(250);
        
        for(int j=1;j<=10;j++){
            gotoxy(40,j+5); cout<<i<<" x "<<j<<" = "<<i*j;
        }
        
        gotoxy(30,22); system("pause");
        system("cls");
    }
    
    cout<<char(200);
    
    cout<<"\n\n";
    getch();
    return 0;
}

// function de gotoxy
void gotoxy(int x,int y){
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon,dwPos);
}
