#include<iostream>
using namespace std;
int main(){
    long long n;
    int k;
    cin>>n>>k;

    for(int i=1;i<=k;i++){


        if(n%10!=0){
            n=n-1;
        }
        else{
            n=n/10;
        }
    }
cout<<n<<endl;
    }










