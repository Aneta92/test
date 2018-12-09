#include <iostream>

using namespace std;

int main()
{
    string country;
    string imie;
    int a;
    int b;

    cout << "Hello world!" << endl;
    cout <<"Podaj w jakim kraju mieszkasz: "<<endl;
    cin >> country;
    cout << "Podaj swoje imie: "<<endl;
    cin >> imie;
    cout << "Czesc, "<< imie <<" z kraju "<< country <<"!";
    cout << "Witamy w kalkulatorze! Podaj dwie liczby "<<endl;
    cout << "Liczba a: " << endl;
    cin >> a;
    cout << "Liczba b: " << endl;
    cin >> a;
    cout <<"DODAWNIE: "<<a+b;
    cout <<"ODEJMOWANIE: "<<a-b;

    //Podaj numer dzialania ktore chcesz wykonac:

    return 0;
}
