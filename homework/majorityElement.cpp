//File name: homework1.cpp
//Created by: Darth Vader
//Created on: 
//Synopsis: majorityElement returns the majority element of a non-empty array, assuming it exists. 
//For CSE 2122 at Ohio State

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majorityElement(vector<int>& nums) {
 // Write your solution here.
    }
int main(){	
	vector <int> a = { 1, 2, 3, 3, 3 }; 
	//vector <int> b = {}; NOT A REQUIRED TEST 
	vector <int> c = { 1870 };
	vector <int> d = { 4, 5, 4 };
	vector <int> e = { 5, 5, 5, 5, 1, 2, 1 };
	vector <int> f = { 6, 7, 7, 7, 6 };

	cout << majorityElement(a) << endl; //3
	//cout << majorityElement(b) << endl; //Error message
	cout << majorityElement(c) << endl; //1870
	cout << majorityElement(d) << endl; //4
	cout << majorityElement(e) << endl; //5
	cout << majorityElement(f) << endl; //7
	return 0;
}

