#ifndef PERSONNAGE_H_INCLUDED
#define PERSONNAGE_H_INCLUDED
#include <string.h>
using namespace std;

class Personnage{

};
/*
class Personnage{

protected:
    string nom;
    string arme;
    int energie;
    int vie;

public:
    // getters
    string get_name(){
         return nom;
    }
    string get_arme(){
         return arme;
    }
    int get_vie(){
         return vie;
    }
    int get_energie(){
         return energie;
    }
    // setters
    void set_name(string n){
         nom = n;
    }
    void set_arme(string a){
         arme = a;
    }
    void set_vie(int v){
          vie = v;
    }
    void set_energie(int e){
          energie = e;
    }

    Personnage(int v,int e, string n, string a): vie(v), energie(e), nom(n), arme(a) {}
    virtual void rencontrer(Personnage& P){
         cout<<" Hello ! "<<P.nom<<endl;
    }
    void affiche(){
         cout<<"--------------------------"<<endl;
         cout<<"        "<<nom<<"         "<<endl;
         cout<<"--------------------------"<<endl;
         cout<<"Name\t:"<<nom<<endl;
         cout<<"Arme\t:"<<arme<<endl;
         cout<<"energie\t:"<<energie<<endl;
         cout<<"vie\t:"<<vie<<endl;
         cout<<"--------------------------"<<endl;

    }
};
*/

#endif // PERSONNAGE_H_INCLUDED
