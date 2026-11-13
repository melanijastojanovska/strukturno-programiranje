#include <iostream>
using namespace std;

int main() {
    int a, b,sum=0, odd=0, podd=1;
    cin>>a>>b;
    for (int i=a; i<=b; i++)
    {
        if (i%2==0)
        {
            sum+=i;
        }
        else
        {
            odd++;
            podd*=i;
        }
    }
    cout<<"Sum of even numbers: "<<sum<<endl;
    cout<<"Odd numbers: "<<odd<<endl;
    if (podd==1 && odd==0)
        podd=0;
    cout<<"Product of odd numbers: "<<podd<<endl;
    return 0;
}