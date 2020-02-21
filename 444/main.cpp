#include <iostream>// Задача 4 Слайд 2

using namespace std;
int a,b,c,d,mas[100],i,j=-1,mini=100000,Mas[100],k=0,sum=0;
int main()
{
    cin >> a;

    for(i=0;i<a;i++) {
        cin >> mas[i];
        if(mas[i]==0) {c=c+1;}
    }
    if(c!=2) {cout << 0;return 0;}
    for(i=0;i<a;i++) {
    if(mas[i]==0) {j=i+1;for(j;j<a;j++) {if(mas[j]==0) {cout << sum;return 0;} sum=sum+mas[j];} }
    }





    return 0;
}
