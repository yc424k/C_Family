#include <iostream>

using namespace std;

int main(void)
{
    int num=0;
    int basic = 50;

    for(;num != -1;)
    {
        cout<<"�Ǹ� �ݾ������������� �Է�: ";
        cin>>num;
        cout<<"�̹� �� �ݿ�: "<<basic+num*0.12<<"����"<<endl;
    }
    cout<<"���α׷��� �����մϴ�."<<endl;

    return 0;
}