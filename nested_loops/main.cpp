#include <iostream>
#include <vector>
//using namespace std;
void sortowanie(std::vector<int> &tab)
{
    int rozmiar = tab.size();
    bool czy_zmieniono = false;
    do {
        czy_zmieniono = false;
        rozmiar--;
        for (int i = 0; i < rozmiar; i++) {
            if (tab[i] > tab[i + 1]) {
                //przestawienie
                int tmp = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = tmp;
                czy_zmieniono = true;
            }
        }

    } while (czy_zmieniono);
    //    return tab;
}

void shape(int N)
{
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if ((j == 0 || j == N - 1) || (i == 0 || i == N - 1))
                std::cout << "*";
            else
                std::cout << " ";
        }
        std::cout << std::endl;
    }
}
int main()
{
    //    shape(5);
    std::vector<int> tab = {1, 6, 2, -10, 20, -50, 100, 0};
    sortowanie(tab);

    //    for (int i = 0; i < tab.size(); i++) {
    //        std::cout << tab[i];
    //    }
    for (int &el : tab) {
        std::cout << el << ", ";
    }

    return 0;
}
