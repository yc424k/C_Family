#include <iostream>

int Adder(int num1=1, int num2=2);
//함수호출 시 인자를 전달하지 않으면 기본값이 1과2 라는 의미
//디폴트 값은 함수의 선언 부분에만 표현하면 됨
//int Adder(int num1=1, int num2)
//오른쪽 매개변수의 디폴트 값부터 채우는 형태로 정의해야 한다.
//Why? 함수에 전달되는인자는 왼쪽에서 오른쪽으로 채워주기 떄문이다.
int main(void){
    std::cout<<Adder()<<std::endl;
    std::cout<<Adder(5)<<std::endl;
    std::cout<<Adder(3, 5)<<std::endl;

    return 0;
}

int Adder(int num1, int num2)
{
    return num1+num2;
}