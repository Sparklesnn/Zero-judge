#include<iostream>
using namespace std;
int main(int n){
	while(cin>>n){
	n=1+(((n*n)-n)/2);
	cout<<n<<endl;
	}
	return 0;
}
