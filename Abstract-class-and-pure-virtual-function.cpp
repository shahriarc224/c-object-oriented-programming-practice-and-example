/* */

#include<bits/stdc++.h>
using namespace std;
 int main(){
 try{
 int x,y;
 cin>>x>>y;
 if(y<0){

    throw 0;   //We can take any number or character

 }
 cout<<"sum:"<<x+y<<endl;

 }

 catch (...)  /*If we threw an intager numbre then we need to write int x 
                 If we threw a character  then we need to write char a
                 And if we use this  (...)  we cam throw data type. 
                                                                    */
   {
 cout<<"Y is less the zero";
 }

 }
