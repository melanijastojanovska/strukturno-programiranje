#include <iostream>
using namespace std;

int main() {
    int n, zbir=0,najgolem=0;
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        int broj;
        cin>>broj;
        int cifra=broj%10;
        broj=broj/10;
        int mnozitel=1;
        while (mnozitel<=broj)
            mnozitel=mnozitel*10;
        int nov=mnozitel*cifra+broj;
        cout<<nov<<endl;
        zbir+=nov;
        if (nov>najgolem)
            najgolem=nov;
    }
    cout<<"Sum: "<<zbir<<endl;
    cout<<"Largest: "<<najgolem<<endl;
    return 0;
}