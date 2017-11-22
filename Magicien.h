#ifndef MAGICIEN_H_INCLUDED
#define MAGICIEN_H_INCLUDED

//////////// MAGICIEN ///////////////////
class Magicien : public Personnage{

};
/*
class Magicien : public Personnage{

public:
    Magicien(int v,int e, string n, string a) : Personnage(v,e,n,a) {}
    void frapper(Personnage& P){
         cout<<" ABRA CADABRA Wooooch ! "<<endl;
    }
    void rencontrer(Personnage& P){
         //Personnage::rencontrer(P);    //il le saluer avant de le frapper
         frapper(P);
    }

};
*/
#endif // MAGICIEN_H_INCLUDED
