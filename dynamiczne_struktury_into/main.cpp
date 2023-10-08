#include <iostream>

//using namespace std;

int main()
{
    {
        std::cout << "ile elementow chcesz wprowadzic";
        //        10
        int N;
        std::cin >> N;
        //dynamiczny przydział pamięci
        int *ptab = new int[N];
        //        int tab[100];

        ptab[0] = 1;
        //usuwanie tablicy przed wyjściem z zasiegu widoczności wskaźnika
        delete[] ptab;
    }

    return 0;
}
