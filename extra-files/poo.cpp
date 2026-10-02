/*Ejercici 4: Crear un programa en c++ que tenga las siguientes jerarquias de clases
    Animal(clase padre) -> Human(clase hija) -> Dog(clase hija)
y hacer polimorfismo en el metodo comer();*/

#include<iostream>
#include<stdlib.h>

using namespace std;

class Animal{
    private:
        int edad;
    public:
        Animal(int);
        virtual void comer();
};

class Human : public Animal{
    private:
        string nombre;
    public:
        Human(int, string);
        void comer();
};

class Dog : public Animal{
    private:
        string nombre, raza;
    public:
        Dog(int, string, string);
        void comer();
};

Animal::Animal(int _edad){
    edad = _edad;
}

void Animal::comer(){
    cout<<"Yo como ";
}

Human::Human(int _edad, string _nombre) : Animal(_edad){
    nombre = _nombre;
}

void Human::comer(){
    Animal::comer();
    cout<<"en un plato, sentado en una silla"<<endl;
}

Dog::Dog(int _edad, string _nombre, string _raza) : Animal(_edad){
    nombre = _nombre;
    raza = _raza;
}

void Dog::comer(){
    Animal::comer();
    cout<<"en un tazon, en el suelo"<<endl;
}

int main(){
    Animal *animals[2];
    
    animals[0] = new Human(16, "Cesar");
    animals[1] = new Dog(5, "Rambo", "Hosky");
    
    animals[0]->comer();
    cout<<"\n";
    animals[1]->comer();
    cout<<"\n";
    
    cout<<"\n\n";
    system("pause");
    return 0;
}
