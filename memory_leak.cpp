#include <iostream>

using namespace std;
class Section {
public :
int * totalStudents ;
Section (int num ){
totalStudents = new int[ num ];
}
~ Section () {
cout << " Object destructed " << endl ;
}

};
void makeALeak () {
Section secA (50) ;
}
int main () {
makeALeak () ;
}
