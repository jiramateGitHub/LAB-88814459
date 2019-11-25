#include <iostream>
using namespace std;
int main(){
	int num,i,j,n;
	cout << "Input : " ;
	cin >> num;
	for(i=0;i<=num;i++){
		n=1;
		for(j=0;j<i;j++){
			cout << n << " ";
			n=n+2;
		}
		cout  << endl;			
	}
return 0;
}
