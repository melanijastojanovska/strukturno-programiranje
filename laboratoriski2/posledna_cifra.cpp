#include <iostream>
using namespace std;

int main() {
    int a,b,d,count=0,zbir=0,largest=0;
    cin>>a>>b>>d;
    for (int i=a;i<=b;i++)
    {
        if (i%10==d)
        {
            count++;
            zbir+=i;
            if (largest<i)
                largest=i;
        }
    }
    if (count==0)
        cout<<"No numbers"<<endl;
    else
    {
        cout<<"Count: "<<count<<endl;
        cout<<"Sum: "<<zbir<<endl;
        cout<<"Largest: "<<largest<<endl;
        return 0;
    }
}