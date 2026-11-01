#include <iostream>
using namespace std;

void tuplaa(int *luku)
{
    *luku = *luku * 2;
}

int main()
{
    int luku;

    cout << "Anna luku: ";
    cin >> luku;

    cout << "Alkuperainen luku: " << luku << endl;

    tuplaa(&luku);

    cout << "Tuplattu luku: " << luku << endl;

    return 0;
}