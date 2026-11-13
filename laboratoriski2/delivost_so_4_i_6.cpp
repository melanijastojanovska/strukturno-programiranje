#include <iostream>
using namespace std;

int main() {
    int a, b,chetiri=0,dvata=0,shest=0,sum=0;
    cin>>a>>b;
    for (int i=a; i<=b; i++)
    {
        if (i%4==0 && i%6==0)
        {
            dvata++;
            sum+=i;
        }
        if (i%4==0)
            chetiri++;
        if  (i%6==0)
            shest++;
    }
    cout<<"Divisible by 4: "<<chetiri<<endl;
    cout<<"Divisible by 6: "<<shest<<endl;
    cout<<"Divisible by both: "<<dvata<<endl;
    cout<<"Sum of numbers divisible by both: "<<sum<<endl;
    return 0;
}