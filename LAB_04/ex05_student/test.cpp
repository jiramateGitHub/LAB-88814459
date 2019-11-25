#include <iostream> 
#include <string> 
using namespace std;
class StudentType{
	private :
		string studentid;
		string firstname;
		string lastname;
	public : 	
		StudentType(){
			studentid = "0";
			firstname = "";
			lastname = "";
		}
		StudentType(string id,string first,string last){
			studentid = id;
			firstname = first;
			lastname = last;
		}
		void SetStudentValueFromString(string id,string first,string last){
			studentid = id;
			firstname = first;
			lastname = last;
		}
		string printLongFormat(){
			return studentid+" - "+firstname+" "+lastname;
		}
		string printShortFormat(){
			return lastname.substr(0,1)+". "+firstname+" - "+studentid;
		}		
};
int main() {
	StudentType stdtype;
	string str,id,first,last;
	cout << "Input (ID firstname lastname): ";
	cin >> id >> first >> last;
	stdtype.SetStudentValueFromString(id,first,last);
	cout << "LongFormat  : " << stdtype.printLongFormat() << endl;
	cout << "ShortFormat : " << stdtype.printShortFormat() << endl;
}
