#include <iostream>
using namespace std;
int mod(int a,int b){
    if(!(a ^ 0)){
        return 0;
    }
    int tmp=a/b;
    int r=a-(tmp*b);
    while(r<0){
        r+=b;
    }
    return r;
}
int euclides_1(int a, int b){
    while(b ^ 0){
        int r=mod(a,b);
        a=b;
        b=r;
    }
    return a;
}
int euclides_2(int a, int b){
    int r=mod(a,b);
    int d=b;
    while(r>0){
        int c=d;
        d=r;
        r=mod(c,d);
    }
    return d;
}
int euclides_3(int a, int b){
    if(!(a ^ 0)){
        return b;
    }
    int c=a;
    int d=b;
    while(d ^ 0){
        int r=mod(c,d);
        c=d;
        d=r;
    }
    return c;
}
int main(){
    cout<<euclides_1(67,7)<<endl;
    cout<<euclides_2(67,7)<<endl;
    cout<<euclides_3(67,7)<<endl;
}
