#include<iostream>
using namespace std;
int main(){
    int a,b,c,choice;
    cout<<"*******SIMPLE CALCULATOR*******"<<endl;
    cout<<"Enter The First Number is"<<endl;
    cin>>a;
    cout<<"Enter The Second Number is"<<endl;
    cin>>b;
    cout<<"Select 1 for addition"<<endl;
    cout<<"Select 2 for Substraction"<<endl;
    cout<<"Select 3 for Multiplication"<<endl;
    cout<<"Select 4 for Division"<<endl;
    cin>>choice;
    switch(choice){
        case 1:
        {
            c=a+b;
            cout<<"Answer is ="<<c;
                break;
        }
        case 2:{
        c=a-b;
        cout<<"Answer is ="<<c;
        break;
        }
        case 3:
        {
            c=a*b;
            cout<<"Answer is =" <<c;
                break;
        }
        case 4:
        {
            c=a/b;
            cout<<"Answer is =" <<c;
            break;
        }
        default:
        cout<<"You are out of the choice";
    }
    return 0;

}