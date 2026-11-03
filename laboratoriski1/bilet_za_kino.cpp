#include <iostream>
using namespace std;

int main() {
    int vozrast, vreme, tride;
    cin>>vozrast>>vreme>>tride;
    int chas=vreme/100;
    int min=vreme%100;
    if (chas>23 || min>59)
        cout<<"Invalid time"<<endl;
    else if (vozrast<12 && chas>=22)
        cout<<"Not allowed"<<endl;
    else
    {
        float cena=0;
        if (vreme<1600)
            cena=180;
        else cena=250;
        if (tride==1)
            cena+=100;
        if (vozrast<12)
            cena=cena*0.50;
        if (vozrast>=65)
            cena=cena*0.70;
        cout<<"Ticket price: "<<cena<<" den"<<endl;
    }
    return 0;
}