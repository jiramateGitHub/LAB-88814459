Class StudentType{
	public : 	
		StudentType();
		StudentType(string id,string first,string last);
		void SetStudentValueFromString(string id,string first,string last);
		string printLongFormat();
		string printShortFormat();
	private :
		string studentid;
		string firstname;
		string lastname;		
};
