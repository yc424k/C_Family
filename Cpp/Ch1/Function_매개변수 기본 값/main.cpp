#include <iostream>

int Adder(int num1=1, int num2=2);
//�Լ�ȣ�� �� ���ڸ� �������� ������ �⺻���� 1��2 ��� �ǹ�
//����Ʈ ���� �Լ��� ���� �κп��� ǥ���ϸ� ��
//int Adder(int num1=1, int num2)
//������ �Ű������� ����Ʈ ������ ä��� ���·� �����ؾ� �Ѵ�.
//Why? �Լ��� ���޵Ǵ����ڴ� ���ʿ��� ���������� ä���ֱ� �����̴�.
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