#include <iostream>

using namespace std;

// TP1
// EX1
struct essai
{
    int n;
    float x;
};

// Par référence
void Remise_a_zero(essai &e){
    e.n=0;
    e.x=0.0;
}

// Par adresse
void Remise_a_zero(essai *e){
    (*e).n=0;
    (*e).x=0.0;
}

// EX2
struct point{
    float x;
    float y;
};

// EX3
void saisir_point{

}


int main()
{
    // EX2
    point a, b, c;
    a.x=3.2;
    a.y=6.4;
    cout<<"Saisissez les coordonnées du point b"<<endl;
    cin>>b.x>>b.y;
    c.x=(a.x+b.x)/2;
    c.y=(a.y+b.y)/2;
    cout<<c.x<<" "<<c.y<<endl;

    // EX1



    return 0;

}





