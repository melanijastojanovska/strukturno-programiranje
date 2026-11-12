#include <iostream>
using namespace std;
//Од стандарден влез се читаат знаци се додека не се прочита извичник.
//Во вака внесениот текст се скриени цели броеви (помали од 100). Да се напише програма што ќе ги
//прочита сите знаци и на излез ќе го испечати збирот на сите броеви скриени во текстот.
//Напомена: cin во C++ ги игнорира празните места (space). За да не ги игнорира
//потребно е да се додаде noskipws пред читањето на знакот (пр. cin >> noskipws >> znak;)
int main() {
    char znak;
    int zbir=0;
    int tekoven=0;
    do
    {
        cin>>noskipws>>znak;
        if (znak>='0' && znak<='9')
        {
            tekoven=tekoven*10+(znak-'0');
        }
        else
        {
            zbir+=tekoven;
            tekoven=0;
        }
    }
    while (znak!='!');
    cout<<zbir<<endl;
    return 0;
}