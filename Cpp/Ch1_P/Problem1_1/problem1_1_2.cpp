#include <iostream>

using namespace std;

int main(void)
{
    char number[100];
    char name[100];

    cout<<"이름을 입력하세요: ";
    cin>>name;

    cout<<"전화번호를 입력하세요: ";
    cin>>number;

    cout<<"이름: "<<name<<endl;
    cout<<"전화번호: "<<number<<endl;

    return 0;
}