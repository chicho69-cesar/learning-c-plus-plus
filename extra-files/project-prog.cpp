/*PROYECTO FINAL DE DSUPE(Desarrolla Software Utilizando Programacion Estructurada)
     Crear un programa enfocado a un negocio que muestre un menu con todos los productos que se venden,
     este programa debera funcionar para que una cantidad n de clientes puede comprar cada uno una 
     cantidad n de productos, el programa debe calcular el total a pagar de cada cliente con un descuento
     si consumen una cantidad grande de productos, y ademas debe dar la opcion de pago con efectivo o 
     con tarjeta de credito, si se paga con esta ultimo debera de imponersele el IVA, sino un impuesto del 5%.
     Tambien debe mostrar lo siguiente:
          1.- El total a pagar de cada cliente 
          2.- El total de dinero conseguido por todas las compras 
          3.- La cantidad de productos por cada cliente 
          4.- La cantidad de productos por todos los clientes 
          5.- El total de descuento entre todos los clientes 
          6.- El total de ventas con tarjeta de credito 
          7.- El total de ventas con efectivo  
          8.- El total de dinero conseguido con IVA 
     Ademas se debera utilizar la funcion estructural (gotoxy)*/
     
#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>

using namespace std;

void gotoxy(int,int);
void menu();

int n;
float precio,total=0,total_c=0,n_clientes=0,n_prendas=0,t_prendas=0,t_descuento=0,t_tarjeta=0,t_efectivo=0,t_IVA=0;
float descuento;

int main(){
    gotoxy(30,2); cout<<"TIENDA DE ROPA"<<endl;
    
    menu();
    
    cout<<"\n\n";
    gotoxy(12,10); system("pause");
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

void menu(){
    char rpt1,rpt2,rpt3;
    int opc;
    
    do{
        do{
            gotoxy(15,4); cout<<".:MENU:.";
            gotoxy(10,6); cout<<"1.- Pantalon para caballero"; gotoxy(50,6); cout<<"Precio = $180";
            gotoxy(10,7); cout<<"2.- Playera"; gotoxy(50,7); cout<<"Precio = $120";
            gotoxy(10,8); cout<<"3.- Chamarra para caballero"; gotoxy(50,8); cout<<"Precio = $300";
            gotoxy(10,9); cout<<"4.- Pants para caballero"; gotoxy(50,9); cout<<"Precio = $250";
            gotoxy(10,10); cout<<"5.- Camisa para caballero"; gotoxy(50,10); cout<<"Precio = $120";
            gotoxy(10,11); cout<<"6.- Pantalon para dama"; gotoxy(50,11); cout<<"Precio = $150";
            gotoxy(10,12); cout<<"7.- Blusa"; gotoxy(50,12); cout<<"Precio = $100";
            gotoxy(10,13); cout<<"8.- Chamarra para dama"; gotoxy(50,13); cout<<"Precio = $350";
            gotoxy(10,14); cout<<"9.- Pants para dama"; gotoxy(50,14); cout<<"Precio = $280";
            gotoxy(10,15); cout<<"10.- Abrigo para dama"; gotoxy(50,15); cout<<"Precio = $400";
            gotoxy(10,18); cout<<"Opcion: "; cin>>opc;
            gotoxy(10,20); cout<<"Escribe el numero de prendas de este tipo que deseas comprar: "; cin>>n;
            
            switch(opc){
                case 1: precio = n * 180; break;
                case 2: precio = n * 120; break;
                case 3: precio = n * 300; break;
                case 4: precio = n * 250; break;
                case 5: precio = n * 120; break;
                case 6: precio = n * 150; break;
                case 7: precio = n * 100; break;
                case 8: precio = n * 350; break;
                case 9: precio = n * 280; break;
                case 10: precio = n * 400; break;
            }
            
            total += precio;
            n_prendas += n;
            
            gotoxy(12,22); cout<<"Desea comprar mas prendas (si(s)/no(n)): "; cin>>rpt2;
            
            if(rpt2 == 's' || rpt2 == 'S'){
                gotoxy(12,28); system("pause");
                system("cls");
            }
            else{
                gotoxy(12,24); cout<<"Desea pagar con efectivo(e) o con tarjeta de credito(t): "; cin>>rpt3;
                
                if(rpt3 == 't' || rpt3 == 'T'){
                    total *= 1.16;
                    t_tarjeta++;
                    
                    if(n_prendas >= 10){
                        descuento = total * (0.10);
                    }
                    
                    t_IVA += ((total / 1.16) * 0.16);
                    
                    total -= descuento;
                    
                    gotoxy(12,25); cout<<"El total de prendas compradas por este cliente fueron: "<<n_prendas<<" prendas";
                    gotoxy(12,26); cout<<"El total a pagar de este cliente es de: $"<<total<<" pesos";
                }
                if(rpt3 == 'e' || rpt3 == 'E'){
                    total *= 1.05;
                    t_efectivo++;
                    
                    if(n_prendas >= 10){
                        descuento = total * (0.10);
                    }
                    
                    total -= descuento;
                    
                    gotoxy(12,25); cout<<"El total de prendas compradas por este cliente fueron: "<<n_prendas<<" prendas";
                    gotoxy(12,26); cout<<"El total a pagar de este cliente es de: $"<<total<<" pesos";
                }
                t_descuento += descuento;
            }
            
        }while(rpt2 == 's' || rpt2 == 'S');
        
        total_c += total;
        t_prendas += n_prendas;
        n_clientes++;
        total=0;
        n_prendas=0;
        
        gotoxy(22,27); cout<<"\nHay mas clientes para comprar mas productos (si(s)/no(n)): ";
        cin>>rpt1;
        system("cls");
        
        gotoxy(12,29); system("pause"); system("cls");
        
    }while(rpt1 == 's' || rpt1 == 'S');
    
    gotoxy(15,1); cout<<"El total de dinero vendido entre todas las compras fue de: $"<<total_c<<" pesos";
    gotoxy(15,2); cout<<"El total de prendas vendidas fue de: "<<t_prendas<<" prendas";
    gotoxy(15,3); cout<<"El total de clientes fue de: "<<n_clientes<<" clientes";
    gotoxy(15,4); cout<<"El total de descuento echo entre todos los clientes fue de: $"<<t_descuento<<" pesos";
    gotoxy(15,5); cout<<"El total de ventas con efectivo fue de: "<<t_efectivo<<" ventas";
    gotoxy(15,6); cout<<"El total de ventas con tarjeta de credito fue de: "<<t_tarjeta<<" ventas";
    gotoxy(15,7); cout<<"El total de dinero conseguido por el IVA fue de: $"<<t_IVA<<" pesos";
}
