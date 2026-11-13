#include <iostream>
using namespace std;

int main() {
    int n;
    double najskup=0, total=0, namaleni=0, dostava=0;
    cin>>n;
    if (n<=0)
    {
        cout<<"Empty cart"<<endl;
        return 0;
    }
    for (int i=1; i<=n; i++)
    {
        double cena=0;
        cin>>cena;
        if (cena>najskup)
            najskup=cena;
        if (cena>=1000)
        {
            cena=cena*0.90;
            namaleni++;
        }
        total+=cena;
    }
    if (total<=5000)
        dostava=150;
    total+=dostava;
    cout<<"Discounted items: "<<namaleni<<endl;
    cout<<"Most expensive item: "<<najskup<<endl;
    cout<<"Delivery: "<<dostava<<endl;
    cout<<"Total: "<<total<<endl;
    return 0;
}