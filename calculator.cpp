#include<iostream>
using namespace std;
int main()
{
    float a, b, c;
    int choice;
    do
    {
        cout<<"1. Addition\n";
        cout<<"2. Subtraction\n";
        cout<<"3. Multiplication\n";
        cout<<"4. Division\n";
        cout<<"5. Exit\n\n";
        cout<<"Enter Your Choice(1-5): ";
        cin>>choice;
        if(choice>=1 && choice<=4)
        {
            cout<<"\nEnter any two Numbers: ";
            cin>>a>>b;
        }
        switch(choice)
        {
            case 1:
                c = a+b;
                cout<<"\nResult = "<<c;
                break;
            case 2:
                c = a-b;
                cout<<"\nResult = "<<c;
                break;
            case 3:
                c = a*b;
                cout<<"\nResult = "<<c;
                break;
            case 4:
                c =a/b;
                cout<<"\nResult = "<<c;
                break;
            case 5:
                return 0;
            default:
                cout<<"\nWrong Choice!";
                break;
        }
        cout<<"\n------------------------\n";
    }while(choice!=5);
    cout<<endl;
    return 0;
}