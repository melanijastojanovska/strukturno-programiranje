#include <iostream>
using namespace std;

int main() {
    int a,b,count=0;;
    cin>>a>>b;
    for (int i=a; i<=b; i++)
    {
        int d=i;
        int cifra1=d%10;
        d/=10;
        int cifra2=d%10;
        if (cifra1==cifra2)
        {
            cout<<i<<" ";
            count++;
        }
    }
    if (count>=1)
    cout<<"\n";
    if (count==0)
        cout<<"No numbers"<<endl;
    else cout<<"Count: "<<count<<endl;
    return 0;
}