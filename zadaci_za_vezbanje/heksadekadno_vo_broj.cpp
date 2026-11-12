#include <iostream>
using namespace std;
/*Од стандарден влез се читаат непознат број на хексадецимални цифри се додека не се внесе
точка (.). Ваша задача е да го пресметате декадниот збир на внесените хексадецимални цифри.
Доколку добиениот декаден збир е делив со 16 се печати Pogodok. Доколку истиот тој збир покрај
што е делив со 16 плус завршува на 16 (последните цифри му се 1 и 6), се печати Poln pogodok
инаку се печати самиот збир.*/
int main() {
    char znak;
    int zbir=0;
    while (true) {
        cin>>znak;
        if (znak=='.')
            break;
        if (znak>='0' && znak<='9')
        {
            zbir+=znak-'0';
        }
        else if (znak>='a' && znak<='f')
        {
            zbir+=znak-'a'+10;
        }
        else if (znak>='A' && znak<='F')
        {
            zbir+=znak-'A'+10;
        }
    }
    if (zbir%16==0 && zbir%100==16)
        cout<<"Poln pogodok"<<endl;
    else if (zbir%16==0)
        cout<<"Pogodok"<<endl;
    else
        cout<<zbir<<endl;
    return 0;
}