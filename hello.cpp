#include<iostream>

using namespace std;

int main()

{

 int token[5]; 
    for(int i=0; i<5; i++){
        int a;
        cout<<"Enter"<< " "<<i<<" " <<"Visitor's record:";
        cin>>a;
        token[i]=a%50;
    }
    for(int i=0; i<5; i++){
        cout<<token[i]<<" ";
    }
return 0;
}
     