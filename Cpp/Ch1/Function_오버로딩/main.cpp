#include <iostream>
int MyFunc(int num)
{
    num++;
    return num;
}
int MyFunc(int a,int b)
{
    return a + b;
}

int main(void){

    std::cout<<MyFunc(20)<<std::endl;
    std::cout<<MyFunc(30, 40)<<std::endl;

    return 0;
}
//c++������ �Լ��� ã�� �� �Լ��� �̸��� �Ű������� �������� ã�� ������
//�Լ��̸��� ���� �� �ְ� �̰��� Function Overloading�̶�� ��