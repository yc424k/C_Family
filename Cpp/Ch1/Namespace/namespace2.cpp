#include <iostream>
//����� ���Ǹ� �и��� namespace ���
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
    std::cout<<"A group�� ������ �Լ�"<<std::endl;
}

void Bgroup::testfunc(void)
{
    std::cout<<"B group�� ������ �Լ�"<<std::endl;
}