#include <iostream>
#include <string>
int userInput();
int invalid();
int gills();
int forest();
int convex();
int ring();
int finalAns();

using namespace std;
int main() {
	string ans;
	cout<<"PLEASE ANSWER THE QUESTIONS IN SMALL LETTERS\n";
	gills();
	return 0;
}
int userInput(){
	string ans;
	cin>>ans;
	if(ans != "yes" && ans !="no"){
		return invalid();
		}
	 if(ans == "yes"){
		return 1;
	}
	return 2;
}
int invalid(){
	
		cout<< "Invalid input";
	
	return 0;
}
int gills(){
	int result;
	cout<<"Does your mushroom have gills? ";
	result = userInput();

	if(result == 1){
		ring();
	}
	if(result == 2){
		cout<<"cepe de bordeaux";
	}
	return 0;
	
}
int forest(){
	int result;
	cout<<"Does your mashroom grow in forest? ";
	result = userInput();
	if(result == 1){
		cout<<"amanite tue-mouche";
	}
	if(result == 2){
		cout<<"Both coprin and agaric jaunissant";
	}
	return 0;
}
int convex(){
	int result;
	cout<<"Does your mashroom have convex cup? ";
	result = userInput();
	if(result == 1){
		cout<<"pied bleu";
	}
	if(result == 2){
		cout<<"girolle";
	}
	return 0;
}
int ring(){
	int result;
	cout<<"Does your mashroom have ring? ";
	result = userInput();
	if(result == 1){
		forest();
	}
	if(result == 2){
		convex();
	}
	return 0;
}
int finalAns(){
	cout<<"girolle";
	return 0;
}
