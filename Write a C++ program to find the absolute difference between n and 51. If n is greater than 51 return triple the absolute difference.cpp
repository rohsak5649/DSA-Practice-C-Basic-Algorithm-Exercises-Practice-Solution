#include <iostream>
using namespace std ;
int test(int n  ){
    int x = 51;
    if (n>x){
        return (n-x)*3 ;

    }
    return (x-n);
   
}
int main(){
    cout<<test(53);
}
