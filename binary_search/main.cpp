#include <iostream>
#include <vector>
//using namespace std;

int przeszukaj_bin(std::vector<int> tab, int element)
{
    int dol = 0, gora = tab.size();
    while (dol <= gora) {
        int srodek = (gora + dol) / 2;
        if (tab[srodek] == element) {
            return srodek;
        }
        if (tab[srodek] > element) {
            dol = srodek + 1;
        } else {
            gora = srodek - 1;
        }
    }
    return -1;
}

int main()
{
    std::vector<int> tablica = {1, 7, 9, 20, 134, 156, 256, 500, 1024};
    int res = przeszukaj_bin(tablica, 136);
    if (res >= 0) {
        std::cout << "element znalezony na pozycji " << res << std::endl;
    } else {
        std::cout << "brak elementu w zbiorze" << std::endl;
    }
    return 0;
}
