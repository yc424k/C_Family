#include <iostream>

namespace Agroup
{
    void SimpleFunc(void)
    {
       std::cout<<"A�� ������ �Լ�"<<std::endl; 
    }
}
namespace Bgroup
{
    void SimpleFunc(void)
    {
        std::cout<<"B�� ������ �Լ�"<<std::endl;
    }
}

int main(void){
    Agroup::SimpleFunc();
    Bgroup::SimpleFunc();
}