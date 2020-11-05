#include <iostream>
//선언과 정의를 분리한 namespace 사용
namespace Agroup
{
    void testfunc(void);
}

namespace Bgroup
{
    void testfunc();
}

int main(void)
{
    Agroup::testfunc();
    Bgroup::testfunc();
}

void Agroup::testfunc(void)
{
    std::cout<<"A group이 정의한 함수"<<std::endl;
}

void Bgroup::testfunc(void)
{
    std::cout<<"B group이 정의한 함수"<<std::endl;
}