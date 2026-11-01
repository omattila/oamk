#include <iostream>
using namespace std;

int tuplaa(int luku)
{
    return luku * 2;
}

int main()
{
    int luku;

    cout << "Anna luku: ";
    cin >> luku;

    int tulos = tuplaa(luku);

    cout << "Tuplattu luku: " << tulos << endl;

    return 0;
}