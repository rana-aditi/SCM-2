#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n,i=3,counter,num;
    cout<<"Enter the number of prime you want\n";
    
    cin>>n;

    if(n>=1){
        cout<<"First %d prime numbers are: \n";
        cout<<"2 ";
    }
    for(counter=2; counter<=n; i++){
        for(num=2; num<i; num++){
            if(i%num==0)
                break;
        }
        if(num==i){
            cout<<i<<" ";
            counter++;
        }
    }
    getch();
    return 0;
}