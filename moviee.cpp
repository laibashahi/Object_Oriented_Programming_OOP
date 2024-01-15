#include<iostream>
#include<string>
using namespace std;
struct movieData{
	string title;
	 int year;
	 string director;
};
 movieData createMovieData(){
    movieData m;
 	cout<<"Enter title of movie"<<endl;
 	cin>>m.title;
 		cout<<"Enter year of movie"<<endl;
 	cin>>m.year;
 		cout<<"Enter director of movie"<<endl;
 	cin>>m.director;
 	return m;
 }
 void displayData(const movieData& m){
 	cout<<"title"<<m.title<<endl;
 	cout<<"year"<<m.year<<endl;
 	cout<<"director"<<m.director<<endl;
 }
 int main(){
 	movieData m1,m2;
 	m1=createMovieData();
 	m2=createMovieData();
 	displayData(m1);
 	displayData(m2);
 	
 	
 	
 }
