//for faster even/odd,swap number
#include<iostream>
#define fst ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#include<algorithm>

using namespace std;

int main(){

    int a=7;
    int b=a<<1;     //instead  a*2 use this for faster usage
    int c=a>>1;     //instead a/2 use this for faster usage
    cout<<a<<endl<<b<<endl<<c<<endl<<endl;

    //even odd
    if(a&1){
        cout<<"odd number";
    }
    else{cout<<"even number";}

    //swap a,b
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<endl<<"a:"<<a<<" b:"<<b;

return 0;
}
