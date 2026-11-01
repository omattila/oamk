#include <iostream>
using namespace std;

int tuplaa(int luku)
{
    return luku * 2;
}

void luvunTulostus(int luku)
{
    cout << "Tulos on: " << luku << endl;
}

int main()
{
    int luku;

    cout << "Anna luku: ";
    cin >> luku;

    int tulos = tuplaa(luku);

    luvunTulostus(tulos);

    return 0;
}