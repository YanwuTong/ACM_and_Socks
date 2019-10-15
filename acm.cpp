//acm.cpp
//Yanwu Tong

#include "acm.h"
#include <utility>
#include <iostream>
using namespace std;

Minions::Minions() {}

/*
void Minions::setSize(int n){
	list.resize(n);
	return;
}
*/

void Minions::insert(int a, int b){
	pair <int,int> temp;
	temp.first = a;
	temp.second = b;
	list.push_back(temp);
	//cout << list[0].first << endl;
	return;
}

void Minions::sort(){
	pair <int,int> temp;
	for(size_t i = 0; i < list.size(); i++){
		for(size_t j = i + 1; j < list.size(); j++){

			if(list[j].second == list[i].second){
				if(list[j].first < list[i].first){
					temp = list[j];
					list[j] = list[i];
					list[i] = temp;
				}
				
			}
			else if(list[j].second < list[i].second){
				temp = list[j];
				list[j] = list[i];
				list[i] = temp;
			}
		}
	}
	return;
}

void Minions::countRoom(){
	if(list.size() > 0){
		room += 1;
	}
	else{
		return;
	}
	int temp = list[0].second;
	for(size_t i = 0; i < list.size(); i++){
		if(list[i].first > temp){
			room += 1;
			temp = list[i].second;
		}
	}
	
}