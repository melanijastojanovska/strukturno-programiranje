#include <iostream>
using namespace std;

int main() {
    float dolzina,cena,cenacovek;
    int vreme, patnici, min, sek;
    cin>>dolzina>>vreme>>patnici;
    min=vreme/60;
    sek=vreme%60;
    cena=50+(dolzina*40)+(min*5);
    cenacovek=cena/patnici;
    cout<<"Duration: "<<min<<" min "<<sek<<" s"<<endl;
    cout<<"Total price: "<<cena<<" den"<<endl;
    cout<<"Per passenger: "<<cenacovek<<" den"<<endl;

    return 0;
}