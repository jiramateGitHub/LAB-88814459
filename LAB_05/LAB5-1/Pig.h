#ifndef PIG_H
#define PIG_H
#include <iostream>
#include <string>
using namespace std;
class Pig
{
	public:
		Pig();
		Pig(string n,double w);
		void set_pig(string n,double w);
		double getWeight();
		string getName();
		void print();
		double eat_food();
	private:
		string name;
		double weight;
};

#endif
