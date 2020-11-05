#include <iostream>

namespace Agroup
{
    void SimpleFunc(void)
    {
       std::cout<<"A가 정의한 함수"<<std::endl; 
    }
}
namespace Bgroup
{
    void SimpleFunc(void)
    {
        std::cout<<"B가 정희한 함수"<<std::endl;
    }
}

int main(void){
    Agroup::SimpleFunc();
    Bgroup::SimpleFunc();
}