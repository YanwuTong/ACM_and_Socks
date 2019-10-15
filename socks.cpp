//socks.cpp

#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <sstream>

using namespace std;

int main(){
	//set<int> socks;
	//set<int>::iterator it;
	priority_queue<int, vector<int>, greater<int>> socks;

	//get three variables
	string line;
	getline(cin,line);
	istringstream ss1(line);
	string get;
	int num, capacity, diff;
	getline(ss1, get, ' ');
	num = stoi(get);
	getline(ss1, get, ' ');
	capacity = stoi(get);
	getline(ss1, get, ' ');
	diff = stoi(get);

	//save all socks in a vector
	getline(cin, line);
	istringstream ss2(line);
	while(getline(ss2, get, ' ')){
		socks.push(stoi(get));
	}

	/*
	//sort the vector by increasing order
	int temp;
	for(size_t i = 0; i < socks.size(); i++){
		for(size_t j = i+1; j < socks.size(); j++){
			if(socks[j] < socks[i]){
				temp = socks[j];
				socks[j] = socks[i];
				socks[i] = temp;
			}
		}
	}
	*/

	//count number of machine
	int machine = 0;
	int count = 0;
	int current = socks.top();

	if(num > 0){
		machine += 1;
		count += 1;
		socks.pop();
	}
	
	
	for(int i = 1; i < num; i++){

		if(count == capacity){
			machine += 1;
			count = 0;
			current = socks.top();
		}
		if(socks.top() - current > diff){
			machine += 1;
			count = 0;
			current = socks.top();
		}
		socks.pop();
		count += 1 ;
	}

	cout << machine << endl;


	return 0;
}