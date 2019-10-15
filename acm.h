//acm.h
//Yanwu Tong

#ifndef ACM_H
#define ACM_H

#include <utility>
#include <vector>
using namespace std;

class Minions{
public:
	
	Minions();
	//void setSize(int n);
	void insert(int a, int b);
	void sort();
	void countRoom();



	int room = 0;
	vector <pair<int, int>> list;






};
#endif