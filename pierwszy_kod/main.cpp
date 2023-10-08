#include <iostream>

using namespace std;

int main()
{
    //    int a;
    //    std::cout << "Wprowadz liczbe z zakresu 0-100";
    //    cin >> a;
    //    if (a > 0 && a < 100) {
    //    }

    std::cout << "Czy chcesz kontynuowac (t/n)";
    char odp;
    cin >> odp;
    switch (odp) {
    case 't':
    case 'T':
        std::cout << "Wybrałeś kontynuacje" << std::endl;
        break;
    case 'n':
    case 'N':
        std::cout << "Do widzenia" << std::endl;
        break;
    default:
        std::cout << "Wybrales niepoprawna odpowiedz" << std::endl;
    }

    //    std::cout << "wyberz opcje";
    //    char odp;
    //    cin >> odp;
    //    switch (odp) {
    //    case 't':
    //    case 'T':
    //        std::cout << "Wybrałeś kontynuacje" << std::endl;
    //        break;
    //    case 'n':
    //    case 'N':
    //        std::cout << "Do widzenia" << std::endl;
    //        break;
    //    default:
    //        std::cout << "Wybrales niepoprawna odpowiedz" << std::endl;
    //    }

    return 0;
}
