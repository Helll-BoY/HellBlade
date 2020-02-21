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
        case 1:b="понедельник"; break;
        case 2:b="вторник"; break;
        case 3:b="среда"; break;
        case 4:b="четверг"; break;
        case 5:b="пятница"; break;
        default :b="<хз че это>";
    }
cout << b;
    return 0;
}











