#include <iostream>
using namespace std;
int main()
{
    /* Благ број е број што е составен само од парни цифри (0, 2, 4, 6, 8). Во зададен опсег
    (почетокот m и крајот на опегот n се цели броеви чија вредност се внесува од тастатура),
    да се најде и испечати најмалиот „благ број“. Ако не постои таков број, да се испечати NE.*/
    int m,n,b=-1,i;
    cin>>m>>n;
    for (i=n; i>=m; i--)
    {
        int x=i;
        bool ok= true;
        while (x>0)
        {
            if ((x%10)%2!=0)
            {
                ok=false;
                break;
            }
            x=x/10;
        }
        if (ok)
            b=i;
    }
    if (b==-1)
        cout<<"NE";
    else
    cout<<b;
    return 0;
}
