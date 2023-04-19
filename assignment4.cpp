#include <iostream>
#include<vector>
#include "linkedlists.h"
using namespace std;
void insertafter(vector<int>&v1, int& x, int &y)
{
	
	for (int i = 0; i < v1.size(); i++)
	{
		if (x == v1[i]) {
			v1.insert(v1.begin() + i + 1, y);
		}
	}
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;
	
	
}
int main() {
	vector <int> v;
	int n,num;
	linkedList f;
	cout << " how many numbers do you want to enter? ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		v.push_back(num);
	}

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	int x = 2, y = 4;
	insertafter(v, x, y);
	
	f.occurence(v);
	
	f.occurence(v).sum();
	
}