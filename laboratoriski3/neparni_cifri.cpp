#include <iostream>
using namespace std;

int main() {
    int n,sum=0,najgolem=0;
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        int broj;
        int mnozitel=1,nov=0;
        int cifra=0;
        cin>>broj;
        while (broj>0)
        {
            cifra=broj%10;
            if (cifra%2==0)
            {
                broj/=10;
                continue;
            }
            else
            {
                nov=nov+broj%10*mnozitel;
                mnozitel*=10;
                broj/=10;
            }
        }
            cout<<nov<<endl;
            sum=sum+nov;
            if (najgolem<nov)
                najgolem=nov;

    }
        cout<<"Sum: "<<sum<<endl;
        cout<<"Largest: "<<najgolem<<endl;
    return 0;
}