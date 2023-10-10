#include <iostream>
#include <string>
using namespace std;

/*Reverse the string*/

void Reversestring(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int temp = name[s];
        name[s] = name[e];
        name[e] = temp;
        s++;
        e--;
    }
}

int getlength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cout << "enter the string";
    cin >> name;

    int n = getlength(name);
    Reversestring(name, n);
    cout << name;

    return 0;
}
