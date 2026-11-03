#include <iostream>
using namespace std;

int main() {
    int vlez,izlez, vlezchas,vlezmin,izlezchas, izlezmin, vkupnominvlez, vkupnominizlez;
    cin>>vlez>>izlez;
    vlezchas=vlez/100;
    vlezmin=vlez%100;
    izlezchas=izlez/100;
    izlezmin=izlez%100;
    if (vlezchas>23 || vlezmin>59 || izlezchas>23 || izlezmin>59)
        cout<<"Invalid time"<<endl;
    else
    {
        vkupnominvlez=vlezchas*60+vlezmin;
        vkupnominizlez=izlezchas*60+izlezmin;
        if (vkupnominizlez<vkupnominvlez)
            vkupnominizlez+=24*60;
        int razlikamin=vkupnominizlez-vkupnominvlez;
        int chas=razlikamin/60;
        int min=razlikamin%60;
        int cena=0;
        if (razlikamin>15)
        {
            int casoviplakja=(razlikamin+59)/60;
            cena=casoviplakja*50;
            if (cena>400)
                cena=400;
        }
        cout<<"Parked: "<<chas<<" h "<<min<<" min"<<endl;
        cout<<"To pay: "<<cena<<" den"<<endl;
    }
    return 0;
}