#include <iostream>
//cpp에서는 지역변수가 항상 제일 먼저 등장할 필요가 없다.11,16번째 줄을 확인하면 알 수 있다.
int main(void){
    int val1, val2;
    int result = 0;
    std::cout<<"두 개의 숫자 입력: ";
    std::cin>>val1>>val2;

    if(val1<val2)
    {
        for(int i = val1 + 1;i<val2; i++)
        result+=i;
    }
    else
    {
        for(int i = val2 + 1; i < val1; i++)
        result += i;
    }

    std::cout<<"두 수 사이의 정수 합: "<<result<<std::endl;
    return 0;
    
}