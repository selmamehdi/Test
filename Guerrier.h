#ifndef GUERRIER_H_INCLUDED
#define GUERRIER_H_INCLUDED

//////////// GUERIER ///////////////////
class Guerrier : public Personnage{

};
/*
class Guerrier : public Personnage{

public:
    Guerrier(int v,int e, string n, string a) : Personnage(v,e,n,a) {}
    void frapper(Personnage& P){
         cout<<"BOOOOOM ! "<<endl;
    }
    void rencontrer(Personnage& P){
         //Personnage::rencontrer(P);  //il le saluer avant de le frapper
         frapper(P);
    }

};
*/
#endif // GUERRIER_H_INCLUDED
