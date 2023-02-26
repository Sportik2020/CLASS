#include <iostream>
using namespace std;
/*Кот*/
class Cat {
	char sex; 
	string name;
	double weight;
	int age;
public:
	Cat() {
		sex = ' ';
		name = "";
		weight = 0.0;
		age = 0;
	}
	Cat(char fsex, string fname, double fweight, int fage) {
		sex = fsex;
		name = fname;
		weight = fweight;
		age = fage;
	}
	char getSex() { return sex; }
	string getName() { return name; }
	double getWeight() { return weight; }
	void setWeight(double fweight) { weight = fweight; }
	int getAge() { return age; }
	void print() {
		cout << "Name - " << name << endl;
		cout << "Sex - " << sex << endl;
		cout << "Age - " << age << endl;
		cout << "Weight - " << weight << endl;
	}
};
/*Банан*/ 
class Banan {
	string color;
public:
	Banan() {
		color = "green";
	}
	Banan(string fcolor) {
		color = fcolor;
	}
	string getColor() { return color; }
	void setColor(string fcolor) { color = fcolor; }
	void print() {
		cout << "Color - " << color << endl;
	}
};
/*Яблоко*/
class Apple {
	string sort;
	double weight;
public:
	Apple() {
		sort = "Ranetka";
		weight = 100;
	}
	Apple(string fsort, double fweight) {
		sort = fsort;
		weight = fweight;
	}
	string getSort() { return sort; }
	double getWeight() { return weight; }
	void setSort(string fsort) { sort = fsort; }
	void setWeight(double fweight) { weight = fweight; }
	void print() {
		cout << "Sort - " << sort << endl;
		cout << "Weight - " << weight << endl;
	}
};
int main() {
//Кот
/*	Cat Barsik;
	Cat Vaska('m', "Vaska", 5.3, 4);
	Vaska.setWeight(6.1);
	cout << Vaska.getWeight() << endl;
	Vaska.print();*/
//Банан
/*	Banan Banan1;
	Banan1.print();
	Banan1.setColor("yellow");
	Banan1.print();*/
//Яблоко
	Apple Apple1;
	Apple1.print();
	Apple Apple2("GoldApple ", 100);
	Apple2.print();
	return 0;
}