#include <iostream>
using namespace std ;
int add(int x , int y ){
    if (x==30 || y == 30 || (x+y == 30)){
        return 1;
    }
    else 
    {
        return 0 ;
    }
    
}
int main(){
    cout<<add(30,50);

}
