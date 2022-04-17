#include <iostream>

using namespace std;

bool czy_parzysta_dlugosc(string a){
    if(a.size()%2==0){
        return true;
    }else{
    return false;
    }
}

bool takie_same(string a){
    int ile=0;
    for(int i=0; i<a.size(); i++){
        if(a[i]=='0'){
            ile++;
        }
    }
    if(ile == a.size()-ile){
        return true;
    }
    return false;
}

bool ciag_rosnacy(int n){
    int c = n%10;
    n=n/10;
    while(n>0){
        if(n%10>=c){
            return false;
        }
        c=n%10;
        n=n/10;
    }
    return true;
}
bool pierwsza(int a){
    if (a < 2){
        return false;
    }
    for (int i = 2; i < a / 2; i++){
        if (a % i == 0){
            return false;
        }
    }
    return true;
}

int suma_cyfr(int a){
    int s = 0;
    while (a){
        s += a % 10;
        a = a / 10;
    }
    return s;
}

bool palindrom(string a)
{
    for (int i = 0; i < a.length() / 2; i++)
    {
        if (a[i] != a[a.length() - i - 1])
            return false;
    }
    return true;
}

int nwd(int a, int b)
{
    while (a != b)
        if (a > b)
            a -= b;
        else
            b -= a;
    return a;
}


int main()
{
    string a;
    cout << "wpisz slowo: ";
    cin >> a;
    if (palindrom(a)){
        cout << a << " jest palindromem";
    }else{
        cout << a << " nie jest palindromem";
    }

    int b, c;

    cout << endl;
    cout << "Podaj dwie liczby: ";
    cin >> b >> c;

    cout << "NWD(" << b << "," << c << ") = " << nwd(b, c) << endl;

    int d;
    cout << "sprawdz czy liczba jest pierwsza: ";
    cin >> d;
    if(pierwsza(d)){
        cout << "jest pierwsza;" << endl;
    }else{
        cout << "nie jest pierwsza" << endl;
    }


}
