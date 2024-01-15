
#include <iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {
    string line;
   
   ofstream fout;
   fout.open("sectiong.txt");
   while(true){
       cout<<"please enter anything"<<endl;
       getline(cin,line);
       
       if (line!="-1"){
       fout<<line<<endl;
        
    }
       else {
           break;}
       }
       fout.close();
       ifstream ifn;
       ifn.open("sectiong.txt");
       while(getline(ifn,line)){
           cout<<line<<endl;
         
       }
         ifn.close();
           
   }




