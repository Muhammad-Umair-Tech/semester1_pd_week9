#include<iostream>
using namespace std;

int main()
{
    int pin[4];
    string moves[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"}; 
    cout << "Enter your pin:" << endl;
    for(int i = 0; i < 4; i++)
    {
        cout << "Digit " << i + 1 << ": ";
        cin >> pin[i];
    }
    for(int i = 0; i < 4; i++)
    {
        if(i + pin[i] > 9)
            cout << moves[(i + pin[i]) - 10] << " ";
        else
            cout << moves[i + pin[i]] << " ";
    }
    return 0;
}