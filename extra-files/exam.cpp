/*Examen de programación 
   hacer un programa para darle un menu al usuario de hamburguesas de las cuales hay
   simples(s),dobles(d) y triples(t),las cuales cuestan 20, 25 y 28 pesos respectivamente
   hacer un programa para determinar cuanto van a pagar n clientes que compran n hamburguesas de cualquier tipo
   ademas se sabe que se puede pagar con tarjeta de crédito pero se la aumenta un 5% a la compra total*/
   
#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>

using namespace std;

void gotoxy(int, int);

int main() {
    int n;
    float price, total = 0;
    char option, op1, op2, op3;
    
    do {
        do {
            gotoxy(10, 1); cout << "\t.:MENU:.\n";
            gotoxy(10, 3); cout << "S) Simples  ->  $20"<<endl;
            gotoxy(10, 4); cout << "D) Dobles   ->  $25"<<endl;
            gotoxy(10, 5); cout << "T) Triples  ->  $28"<<endl;
            gotoxy(10, 6); cout << "Que tipo de hamburguesas deseas comprar: [   ]";
            gotoxy(53, 6); cin >> option;
            
            switch (option) {
                case 's':
                case 'S':
                    price = 20;
                    break;
                case 'd':
                case 'D':
                    price = 25;
                    break;
                case 't':
                case 'T':
                    price = 28;
                    break;
            }
            
            gotoxy(10, 8); cout << "Cuantas hamburguesas de este tipo desea comprar: [    ]";
            gotoxy(61, 8); cin >> n;
            
            total += (price * n);
            
            gotoxy(10, 9); cout << "Desea seguir comprando mas hambueguesas (si(s)/no(n)): [   ]";
            gotoxy(67, 9); cin >> op1;
            
            if (op1 == 'n' || op1 == 'N') {
                gotoxy(10, 10); cout << "Desea pagar con tarjeta de credito (si(s)/no(n)): [   ]";
                gotoxy(62, 10); cin >> op3;
            }
            
        } while (op1 == 's' || op1 == 'S');
        
        if ((op1 == 'n' || op1 == 'N') && (op3 == 'n' || op3 == 'N')) {
            gotoxy(10, 11); cout << "El total a pagar es: $" << total << " pesos" << endl;
        } else {
            gotoxy(10, 11); cout << "El total a pagar es: $" << (total * 1.05) << " pesos" << endl;
        }
            
        gotoxy(10, 13); cout << "Hay mas clientes para comprar hamburguesas (si(s)/no(n)): [   ]";
        gotoxy(70, 13); cin >> op2;
        
        if (op2 == 's' || op2 == 'S') {
            total = 0;
        }
        
        gotoxy(10, 28); system("pause");
        system("cls");
        
    } while (op2 == 's' || op2 == 'S');
    
    gotoxy(10, 28); system("pause");
    return 0;
}

void gotoxy(int x, int y) {
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon, dwPos);
}
