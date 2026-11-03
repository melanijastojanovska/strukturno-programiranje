#include <iostream>
using namespace std;

int main() {
    int tezhina, zona, ekspres, cena=0, den=0;
    cin>>tezhina>>zona>>ekspres;
    if (zona<1 || zona>3)
        cout<<"Invalid zone"<<endl;
    else if (tezhina>30000)
        cout<<"Too heavy"<<endl;
    else
    {
        if (zona==1)
        {
            cena=120;
            den=1;
        }
        else if (zona==2)
        {
            cena=180;
            den=2;
        }
        else if (zona==3)
        {
            cena=250;
            den=4;
        }
        if (tezhina>1000)
        {
            int plustezhina=tezhina-1000;
            int plus=(plustezhina+499)/500;
            cena=cena+plus*40;
        }
        if (ekspres==1)
        {
            den--;
            cena*=1.5;
            if (den<1)
                den=1;

        }
        cout<<"Price: "<<cena<<" den"<<endl;
        cout<<"Delivery: "<<den<<" day(s)"<<endl;
    }

    return 0;
}