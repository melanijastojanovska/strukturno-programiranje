#include <iostream>
using namespace std;
int main() {
    float cenagorivo, potroshuvachkagorivo, rastojanie, patnici;
    cin>>rastojanie>>potroshuvachkagorivo>>cenagorivo>>patnici;
    cout<<"Round trip: "<<rastojanie*2<<" km"<<endl;
    cout<<"Fuel: "<<potroshuvachkagorivo*(rastojanie*2)/100<<" L"<<endl;
    cout<<"Cost: "<<(potroshuvachkagorivo*(rastojanie*2)/100*cenagorivo)<<" den"<<endl;
    cout<<"Per person: "<<((potroshuvachkagorivo*(rastojanie*2)/100*cenagorivo)/patnici)<<" den"<<endl;
    return 0;
}
