#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;
struct TRAIN
{
	long long startTime;
	string endPoint;
	long long trainNumber;
};
bool cmp(TRAIN a, TRAIN b) {
	return a.startTime > b.startTime;
}
vector<TRAIN> t(6);
void inputTrains() {
	for (int i = 0; i < t.size(); i++) {
		cout << "End point: ";
		cin >> t[i].endPoint;
		cout << "Train number: ";
		cin >> t[i].trainNumber;
		cout << "Start time: ";
		cin >> t[i].startTime;
		cout << endl;
	}
}
void sortTrains() {
	sort(t.begin(), t.end(), cmp);
}
int main() {
	inputTrains();
	sortTrains();
	ofstream fout("train_info.txt");
	for (int i = 0; i < t.size(); i++) {
		fout << "----------------" << endl;
		fout << "startTime: " << t[i].startTime << endl;
		fout << "trainNumber: " << t[i].trainNumber << endl;
		fout << "endPoint: " << t[i].endPoint << endl;
	}
	fout.close();
}