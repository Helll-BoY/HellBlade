#include <iostream>
#include <string>
#include <windows.h>
#include <sstream>
using namespace std;
class Students{
private:
    string name="";

    string last_name;
public:
    int scores[5];
    //Итоговая оценка
    float average_ball;
    void SetName(string aname) {
    if(aname=="1") {name=aname;}
    else {cout << "Nelza" << endl;}
    }
    string GetName() {
    return name;
    }
    };
int main()
{
Students *student= new Students[5];
ostringstream ss;
for(int i=0;i<5;i++) {
    ss.str("");
    ss << i;
    student[i].SetName(ss.str());
}

for(int i=0;i<5;i++) {
    cout << student[i].GetName() << endl;
}
    return 0;
}
