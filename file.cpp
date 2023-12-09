#include<iostream>
#include<fstream>   /*to read and write in to a file we need    <fstream> library.
                       */
using namespace std;
int main (){
    
    
    ofstream file;     /*ofstraem is used to create and  write information to file */
    file.open("student.txt");
    
    file<<"I am Shahriar.I am 22 years old .Iam from Dhaka.";
    
    file.close();
    
    return 0;
}

//..................................................................................................................................................


  #include<iostream>
#include<fstream>         /*to read and write in to a file we need  <fstream> library.
                                     */
using namespace std;
int main (){
    
    string name;
    ofstream file;           /*ofstraem is used to create and write information to file */
    file.open("student.txt");
    
    cout<<"Enter your name:";
    getline(cin,name);
    
    file<<"Welcome"<<name<<endl;
    file.close();
    
    return 0;
}
//.............................................................................................................................................

#include<iostream>
#include<fstream>         /*to read and write in to a file we need  <fstream> library.
                                     */
using namespace std;
int main (){
    
    string name;
    ofstream file;           /*ofstraem is used to create and write information to file */
    file.open("student.txt",ios::out|ios::app);    /*if i want to add a new name then i have to write      file.open("student.txt",ios::out|ios::app); */
    
    cout<<"Enter your name:";
    getline(cin,name);
    
    file<<"Welcome"<<name<<endl;
    file.close();
    
    return 0;
}




