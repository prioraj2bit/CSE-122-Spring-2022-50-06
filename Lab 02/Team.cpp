#include <iostream>

using namespace std;

int main()
{
    int n, Lancer, Saber, Berserker, number(0);
    cin >> n;
    while (n--)
    {
        cin >> Lancer >> Saber >> Berserker;
        if (Lancer + Saber + Berserker >= 2)
        {
            number += 1;
        }
    }
    cout << number << endl;
    return 0;
}