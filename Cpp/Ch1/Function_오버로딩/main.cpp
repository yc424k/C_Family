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
//c++에서는 함수를 찾을 때 함수의 이름과 매개변수의 선언으로 찾기 떄문에
//함수이름이 같을 수 있고 이것을 Function Overloading이라고 함