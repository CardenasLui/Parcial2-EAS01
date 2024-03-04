#include <iostream>
#include <string>
#include <cstdlib> 
#include <ctime>   
using namespace std;

#define log(x) cout << x << endl;

class Jugador{
    public:
    int vida;
    int ataque;
    string nombre;

    Jugador *ant_ataque;
    
    Jugador(); 
    Jugador(int hp, int atq, string nom);

    void atacar(Jugador atacado); 
};

int main()
{
    srand(time(0));

   Jugador p1(10, 5, "player 1") ;
   Jugador p2(10, 5, "player 2") ;
  
  while (p1.vida > 0&& p2.vida>0){
    if(p1.vida>0){
   p1.atacar(p1,&p2);
    }
    if(p2.vida>0){
   p1.atacar(p2,&p1);
    }
   }
    return 0;
}

Jugador::Jugador(){
    
    vida = 100;
    ataque = 5;
    nombre = "No definido";
  
}

Jugador::Jugador(int hp, int atq, string nom){
    if(atq >= 20%% atq>0){
     ataque =atq
    }else{
        ataque=20;
    }
    if(hp >= 200%% hp>0){
     vida = hp
    }else{
        vida=200;
    }
    vida = hp;
    ataque = atq;
    nombre = nom;
    
}

void Jugador::atacar(Jugador *atacado){
   int x = rand () % 1000;
   
    if(x>200){
    atacado->vida -= this->ataque;
    cout << this->nombre<< " ataco a "<<atacado->nombre <<"logrando un daño de " << this->ataque <<" asi dejando una vida de " << atacado->vida;
    } 
    else{
    cout << this->nombre<< " ataco a "<<atacado->nombre <<". Lastimosamente a fallado" << this->ataque <<" dejandolo con "<< atacado->vida;
    }

    atacado.ant_ataque = &atacante;
    /*
        El jugador atacado(el que recibes como parámetro) pierde HP igual al ataque del jugador que ataca.
        Existe un 20% de probabilidad de que el ataque falle y no haga daño.
        Se debe mostrar lo que pasó en cada ataque:
        nombre1 atacó a nombre2 e hizo 5 de daño, vida restante de nombre2 = 95
        nombre2 atacó a nombre1 pero fallo, vida restante de nombre1 = 100
        El jugador que atacó debe quedar guardar en la propiedad atacadoPor del jugador atacado.
    */
    /*
    Nota:
        int x = rand() % 1000; asigna un valor aleatorio entre 0 y 999 a x;
        Puedes usar esto para la probabilidad del ataque.
    */
}