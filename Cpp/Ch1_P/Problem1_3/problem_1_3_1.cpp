#include <iostream>

using namespace std;

int BoxVolume(int, int, int);
int BoxVolume(int, int);
int BoxVolume(int);

int main(void)
{
    cout<<"[3, 3, 3] : "<<BoxVolume(3,3,3)<<endl;
    cout<<"[3, 3, D] : "<<BoxVolume(5,5)<<endl;
    cout<<"[3, D, D] : "<<BoxVolume(7)<<endl;
    //cout<<'[D, D, D] : '<<BoxVolume()<<endl;

    return 0;
}

int BoxVolume(int length, int width, int heigh)
{
    return length*width*heigh;
}

int BoxVolume(int length, int width)
{
    return length*width*1;
}

int BoxVolume(int length)
{
    return length*1*1;
}