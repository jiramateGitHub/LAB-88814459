#include <iostream>
using namespace std;
int main(){
	int num,i,j;
	cout << "Input : " ;
	cin >> num;
	for(i=0;i<=num;i++){
		for(j=0;j<num;j++){
			if(i<=j){
				cout << "*" << " ";
			}else{
				cout << "  ";
			}
		}
		cout  << endl;			
	}
	return 0;
}