// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


void numIsPositiveNegitiveOrZero(int num){
    if(num<0){
        cout<<"num is negitve"<<endl;
    }else if(num>0){
           cout<<"num is postive"<<endl;
    }
    else{
        cout <<"zero"<<endl;
    }
}

void maxInTwo(int n1, int n2){
    if(n1<n2){
        cout<<n2 <<" is greater"<<endl; 
    }
    else{
          cout<<n1 <<" is greater"<<endl; 
    }
}

void maxInThree(int a,int b,int c){
    if(a<b){
        if(c<b){
            cout<<b<<" is greatest"<<endl;
        }
        else{
              cout<<c<<" is greatest"<<endl;
        }
  
    } 
      else{
          if(c<a){
            cout<<a<<" is greatest"<<endl;
        }
        else{
              cout<<c<<" is greatest"<<endl;
        }
        
    }
}

void cheakEvenOdd(int num){
    if(num%2==0){
        cout<<num<<" is even"<<endl;
    }
    else{
        cout<<num<<" is odd"<<endl;
    }
}


int main() {
  
numIsPositiveNegitiveOrZero(0);
maxInTwo(5,12);
maxInThree(2,2,3);
cheakEvenOdd(3);
    return 0;
}