#include <iostream>
#include <string>
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
    if(aname=="name") {name=aname;}
    else {cout << "Nelza";}
    }
    string GetName() {
    return name;
    }
    };
int main()
{
Students student;
student.SetName("name");

    cout << student.GetName();
    return 0;
}
