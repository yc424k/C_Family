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
    std::cout<<"A group�� ������ �Լ�"<<std::endl;
    PrettyFunc(); //���� �̸�����
    Bgroup::SimpleFunc(); //�ٸ� �̸�����
}
void Agroup::PrettyFunc(void)
{
    std::cout<<"So Pretty!!"<<std::endl;
}

void Bgroup::SimpleFunc(void)
{
    std::cout<<"B group�� ������ �Լ�"<<std::endl;
}