#include "Pig.h"
	Pig::Pig(){
			name = "";
			weight = 0;
		};
		
		Pig::Pig(string n,double w){
			name = n;
			weight = w;
		};
		
		void Pig::set_pig(string n,double w){
			name = n;
			weight = w;
		};
	
		double Pig::getWeight(){
			return weight;
		};
		
		string Pig::getName(){
			return name;
		};
		
		void Pig::print(){
			cout << "Name   : " << name << endl;
			cout << "Weight : " << weight << endl;
		};
		
		double Pig::eat_food(){
			weight = weight + 0.5;
		};
