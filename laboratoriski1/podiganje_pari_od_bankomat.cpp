#include <iostream>
using namespace std;

int main() {
    int sostojba, podiga, vnes,provizija=0, dveiljadi=0, iljada=0, petsto=0;
    cin>>sostojba>>podiga>>vnes;
    if (vnes==0)
        provizija+=50;
    if (podiga%500!=0 || podiga==0)
        cout<<"Invalid amount"<<endl;
    else if (podiga>20000)
        cout<<"Limit exceeded"<<endl;
    else if (sostojba<(provizija)+podiga)
        cout<<"Insufficient funds"<<endl;
    else
    {
        cout<<"Fee: "<<provizija<<" den"<<endl;
        cout<<"New balance: "<<sostojba-provizija-podiga<<" den"<<endl;
        dveiljadi=podiga/2000;
        podiga=podiga%2000;
        iljada=podiga/1000;
        podiga=podiga%1000;
        petsto=podiga/500;
        podiga=podiga%500;
        cout<<"2000 x "<<dveiljadi<<endl;
        cout<<"1000 x "<<iljada<<endl;
        cout<<"500 x "<<petsto<<endl;
    }
    return 0;
}