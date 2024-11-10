#include <iostream>
#include <iomanip>

using namespace std;

//funktio, joka tulostaa kahden luvun summan
void calcSum( int a, int b) {
    cout<<"Lukujen summa:" << a + b <<endl;
}

//funktio, joka tulostaa kahden luvun osamäärän
void calcDiv(int a, int b) {
    if (b==0) {
        cout<<"Virhe: Jakaja ei voi olla nolla!" <<endl;
    } else{
        cout<<"Lukujen osamäärä:"<<fixed << setprecision(2)<<static_cast<float>(a)/ b << endl;
    }
}
//funktio, joka laskee summan ja palauttaa sen
int retSum(int a, int b) {
    return a+b;
}

//funktio, joka laskee osamäärän ja palauttaa sen
float retDiv(int a, int b) {
    if (b==0) {
        cout<<"Virhe: Jakaja ei voi olla nolla!" <<endl;
        return 0.0;
    } else {
        return static_cast<float>(a) / b;
    }
}
int main()
{

    int a, b;

    //kysytään luvut käyttäjältä
    cout<<"Anna ensimmäinen luku (a):";
    cin>>a;
    cout<<"Anna toinen luku (b):";
    cin>>b;

    //kutsu laskentafunktioita
    calcSum(a, b);
    calcDiv(a, b);


    //Kutsu lasketafunktioita, jotka palauttavat arvot
    int sumResult = retSum(a, b);
    float divResult = retDiv(a, b);

    cout<<"Palautettu summa: " <<sumResult << endl;
    cout<<"Palautettu osamäärä: "<< fixed << setprecision(2) << divResult <<endl;

    return 0;
}
