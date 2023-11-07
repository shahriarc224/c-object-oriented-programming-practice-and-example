/*                                                                                                     video:Anisul Islam  ,video 90

For the sum of integer we need to write code for integer an for the sum of  double type variable we need to write the code for double type.  
*/
/*                                                                                               
Integer type:

#include <iostream>
using namespace std;
int add(int a,int b){
    
    return a+b;
}

int main(){
    
    
    cout<<add(50,50)<<endl;
    
    return 0;
}
*/


/*
Double type:

#include <iostream>
using namespace std;
double add(double a,double b){
    
    return a+b;
}

int main(){
    
 
    cout<<add(2.31,3.45)<<endl;
    
    return 0;
}

*/


/*

But if we want to use just ne code for  integer,char ,float ,double,the n we have to use (template function orgeneric function)


*/
//Generic function:


#include <iostream>
using namespace std;

template<class mytemplate>
mytemplate add(mytemplate a,mytemplate b){
    
    return a+b;
}

int main(){
    
cout<<add(50,30)<<endl;
cout<<add(54.65,30.85)<<endl;
    
    return 0;
}
