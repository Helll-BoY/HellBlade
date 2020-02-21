#include <iostream>

using namespace std;
int mas[100],b,c,d,k,i,j,s,n,proz=1,miN,Mas[100];
int main()
{
    //cin >> n;
    //for(i=1;i<=n;i++) {
    //    cin >> mas[i];
   // }
    //for(i=1;i<=n;i=i+2){
    //    proz=proz*mas[i];
   // }
   // cout << proz; Произведение нечетных элементов в массиве
  //  return 0;

    cin >> n;
    for(i=0;i<n;i++) {
        cin >> mas[i];
        miN=mas[0];
    }
    for(i=0;i<n;i++){
  if(mas[i]<0){mas[i]=mas[i]*-1};if(mas[i]*-1<=miN) {miN=mas[i];}
    }
    cout << miN;
    return 0;


}
