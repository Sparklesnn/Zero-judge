//西元年被4整除且不被100整除，或被400整除者即為閏年
#include<iostream>
using namespace std;
int main(int y){
	while(cin>>y){
		if((y%4==0&&y%100!=0)||(y%400==0)){
		  cout<<"閏年"<<endl;
		}
		else{
		  cout<<"平年"<<endl;	
		}
	}
	return 0;
}
