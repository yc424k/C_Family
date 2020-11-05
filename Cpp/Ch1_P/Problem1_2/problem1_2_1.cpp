#include <iostream>

using namespace std;

void swap(int*, int*);
void swap(char*, char*);
void swap(double*, double*);
int main(void)
{
    int num1=20, num2=30;
    swap(&num1, &num2);
    cout<<num1<<' '<<num2<<endl;

    char ch1='A', ch2='Z';
    swap(&ch1, &ch2);
    cout<<ch1<<' '<<ch2<<endl;

    double db1 = 3.14, db2 = 0.15;
    swap(&db1, &db2);
    cout<<db1<<' '<<db2<<endl;
}

void swap(int* a, int*b )
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

void swap(char*a, char*b)
{
    char c = *a;
    *a = *b;
    *b = c;
}

void swap(double* a, double* b)
{
    double c = *a;
    *a = *b;
    *b = c;
}