#include<iostream>
using namespace std;

int main()
{
    int myint,wvar=0,dwvar=0;
    cout<<"Enter an integer:"<<endl;
    cin>>myint;
    cout<<"Using for loop:"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<(i+1)<<" X "<<myint<<" = "<<(myint*(i+1))<<endl;
    }
    cout<<"Using while loop"<<endl;
    while( wvar < 10)
    {
        wvar++;
        cout<<wvar<<" X "<<myint<<" = "<<(myint*wvar)<<endl;
    }
    cout<<"Using Do While loop"<<endl;
    do
    {
        cout<<(dwvar+1)<<" X "<<myint<<" = "<<(myint*(1+dwvar))<<endl;   
        dwvar++;
    } while (dwvar<10);
    return 0;
}