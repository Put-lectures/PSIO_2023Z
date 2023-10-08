#include <cmath>
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;
string male_litery(string text)
{
    for (int i = 0; i < text.size(); i++) {
        if (text[i] >= 'A' && text[i] <= 'Z') {
            text[i] += 'a' - 'A';
        }
    }
    return text;
}

int ile_wyrazow(string text)
{
    int licznik = 0;
    for (int i = 0; i < text.size(); i++) {
        if (text[i] == ' ')
            licznik++;
    }
    return licznik + 1;
}

int max_litera(string text)
{
    int litera_max = text[0];
    for (int i = 1; i < text.size(); i++) {
        if (text[i] > litera_max)
            litera_max = text[i];
    }
    return litera_max;
}
bool czy_pierwsza(int liczba)
{
    for (int i = 2; i <= sqrt(liczba); i++) {
        if (liczba % i == 0) {
            return false;
        }
    }
    ///
    return true;
}
int main()
{
    //    std::vector<int> tab = {1, 5, 7, 0, 10};
    //    for (int i = 0; i < tab.size(); i++) {
    //        std::cout << tab[i] << std::endl;
    //    }

    //    int i = 0;
    //    while(i < tab.size()) {
    //        std::cout << tab[i] << std::endl;
    //        i++;

    //    }
    char odp;
    do {
        std::cout << "czy chcesz procesować plik? (t/n)";

        cin >> odp;
    } while (odp != 't' && odp != 'T' && odp != 'n' && odp != 'N');

    if (odp == 't' || odp == 'T') {
        std::fstream plik("/home/piotr/license.txt", ios::in);
        if (plik.is_open()) {
            while (!plik.eof()) {
                string tekst;
                plik >> tekst;
                std::cout << male_litery(tekst);
                //<< std::endl;
            }
            plik.close();
        }
    }

    //Ile wyrazow w tekscie
    std::string caly_tekst;

    std::cin.ignore();
    std::cout << "Podaj tekst do analizy: ";
    std::getline(cin, caly_tekst);
    std::cout << "w tekscie jest " << ile_wyrazow(caly_tekst) << "wyazow" << std::endl;

    //liczby perwsze
    std::cout << "Podaj liczbe do sprawdzenia";
    int liczba;
    std::cin >> liczba;
    if (czy_pierwsza(liczba)) {
        std::cout << "liczba jest pierwsza";
    } else {
        std::cout << "liczba nie jest pierwsza";
    }
    return 0;
}
