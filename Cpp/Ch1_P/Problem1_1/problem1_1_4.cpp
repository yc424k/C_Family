#include <iostream>

using namespace std;

int main(void)
{
    int num=0;
    int basic = 50;

    for(;num != -1;)
    {
        cout<<"판매 금액을만원단위로 입력: ";
        cin>>num;
        cout<<"이번 달 금여: "<<basic+num*0.12<<"만원"<<endl;
    }
    cout<<"프로그램을 종료합니다."<<endl;

    return 0;
}