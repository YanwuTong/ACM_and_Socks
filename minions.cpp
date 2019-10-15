//minions.cpp
//Yanwu Tong


#include "acm.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
	/*
	cout << "this is the test part" << endl;
	Minions s;
	//s.setSize(1);
	s.insert(1,2);
	s.insert(3,5);
	s.insert(4,6);
	s.insert(7,9);
	s.insert(8,10);
	s.sort();
	s.countRoom();


	cout <<"the size is "<< s.list.size() << endl;
	cout << "print list: " << endl;
	for(size_t i = 0; i < s.list.size(); i++){
		cout << s.list[i].first << " " << s.list[i].second << endl;
	}
	cout << "room number : " << s.room << endl;
	*/

	string line1;
	getline(cin, line1);

	Minions s;

	for(int i = 0; i < stoi(line1); i++){
		string line2;
		getline(cin, line2);
		vector<int> v;
		istringstream ss2(line2);
		string get;
		while(getline(ss2, get, ' ')){
			v.push_back(stoi(get));
		}
		s.insert(v[0],v[1]);
	}
	s.sort();
	s.countRoom();
	cout << s.room << endl;


	/*
	cout << "this is the list printing: " << endl;
	for(size_t i = 0; i < s.list.size(); i++){
		cout << s.list[i].first << " " << s.list[i].second << endl;
	}
	*/

	return 0;
}