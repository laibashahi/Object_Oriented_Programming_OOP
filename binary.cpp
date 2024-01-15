#include<iostream>
#include<string>
using namespace std;
class Binary{
	private:
		
	string s;
	public:
		void read();
		void check();
		
	
};
void Binary::read(){
	cout<<"enter a binary number"<<endl;
	cin>>s;
	
}
 void  Binary::check(){
	int i;
	for(i=0 ; i<s.length();i++){
		if (s.at(i)!='0'&& s.at(i)!='1')
		{
			cout<<" not a binary number"<<endl;
		} else
		{
			cout<<"bianry"<<endl;
		}
	}
}
int main(){
	Binary l;
	l.read();
	l.check();
	}
