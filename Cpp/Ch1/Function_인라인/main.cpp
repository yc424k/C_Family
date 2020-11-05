#include <iostream>

template <typename T>
//템플릿 사용 추후에 자세히 공부 예정
inline T SQUARE (T x)
{
    return x*x;
}
//인라인 함수 추후에 매크로에 대해서 공부하기
int main(void)
{
    std::cout<<SQUARE(5.5)<<std::endl;
    std::cout<<SQUARE(12)<<std::endl;

    return 0;
}