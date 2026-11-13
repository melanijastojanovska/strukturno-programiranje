#include <iostream>
using namespace std;

int main() {
    int n,zbir=0,najgolem=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int broj;
        int nov=0, mnozitel=1;
        int cifra=0;
        cin>>broj;
        while (broj>0)
        {
            cifra=broj%10;
            broj=broj/10;
            nov=nov+(9-cifra)*mnozitel;
            mnozitel=mnozitel*10;
        }
        cout<<nov<<endl;
        zbir+=nov;
        if (najgolem<nov)
            najgolem=nov;
    }
    cout<<"Sum: "<<zbir<<endl;
    cout<<"Largest: "<<najgolem<<endl;
    return 0;
}