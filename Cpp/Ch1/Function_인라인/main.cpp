#include <iostream>

template <typename T>
//���ø� ��� ���Ŀ� �ڼ��� ���� ����
inline T SQUARE (T x)
{
    return x*x;
}
//�ζ��� �Լ� ���Ŀ� ��ũ�ο� ���ؼ� �����ϱ�
int main(void)
{
    std::cout<<SQUARE(5.5)<<std::endl;
    std::cout<<SQUARE(12)<<std::endl;

    return 0;
}