#include <iostream>

namespace Agroup
{
    void SimpleFunc(void);
}

namespace Agroup
{
    void PrettyFunc(void);
}

namespace Bgroup
{
    void SimpleFunc(void);
}


int main(void)
{
    Agroup::SimpleFunc();

    return 0;
}

void Agroup::SimpleFunc(void)
{
    std::cout<<"A group이 정의한 함수"<<std::endl;
    PrettyFunc(); //같은 이름공간
    Bgroup::SimpleFunc(); //다른 이름공간
}
void Agroup::PrettyFunc(void)
{
    std::cout<<"So Pretty!!"<<std::endl;
}

void Bgroup::SimpleFunc(void)
{
    std::cout<<"B group이 정의한 함수"<<std::endl;
}