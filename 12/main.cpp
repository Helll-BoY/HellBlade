#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
int a;
string b;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
cin >> a;

switch(a)
    {
        case 1:b="�����������"; break;
        case 2:b="�������"; break;
        case 3:b="�����"; break;
        case 4:b="�������"; break;
        case 5:b="�������"; break;
        default :b="<�� �� ���>";
    }
cout << b;
    return 0;
}











