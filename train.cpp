#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <string>
using namespace std;

struct TRAIN
{
	long long startTime;
	string endPoint;
	long long trainNumber;
};

bool trainCmp(TRAIN a, TRAIN b) {
	return a.startTime < b.startTime;
}

string strip(string l) {
	while (not l.empty()) {
		bool isFirstSpace = false;
		if (l[0] == ' ' or l[0] == '\n' or l[0] == '\t') {
			isFirstSpace = true;
			l.erase(l.begin());
		}
		if (not isFirstSpace) {
			break;
		}
	}
	while (not l.empty()) {
		bool isEndSpace = false;
		if (l[l.size() - 1] == ' ' or l[l.size() - 1] == '\n' or l[l.size() - 1] == '\t') {
			isEndSpace = true;
			l.erase(l.end() - 1);
		}
		if (not isEndSpace) {
			break;
		}
	}
	return l;
}

vector<TRAIN> t(6);
void inputTrains() {
	for (int i = 0; i < t.size(); i++) {
		cout << "End point: ";
		while (t[i].endPoint.empty()) {
			getline(cin, t[i].endPoint);
		}
		t[i].endPoint = strip(t[i].endPoint);
		cout << "Train number: ";
		cin >> t[i].trainNumber;
		cout << "Start time: ";
		cin >> t[i].startTime;
		cout << endl;
	}
}

void sortTrains() {
	sort(t.begin(), t.end(), trainCmp);
}

void trainsFileOutput() {
	ofstream fout("train_info.txt");
	fout << "count: " << t.size() << endl;
	for (int i = 0; i < t.size(); i++) {
		fout << "----------------" << endl;
		fout << "startTime: " << t[i].startTime << endl;
		fout << "trainNumber: " << t[i].trainNumber << endl;
		fout << "endPoint: " << t[i].endPoint << endl;
	}
	fout.close();
}

void trainsFileInput() {
	ifstream fin("train_info.txt");
	t.clear();
	int count;
	string l;
	fin >> l >> count;
	t.resize(count);
	for (int i = 0; i < t.size(); i++) {
		fin >> l;
		fin >> l >> t[i].startTime;
		fin >> l >> t[i].trainNumber;
		fin >> l;
		while (t[i].endPoint.empty()) {
			getline(fin, t[i].endPoint);
		}
		t[i].endPoint = strip(t[i].endPoint);
	}
	fin.close();
}

void trainsOutput() {
	cout << "count: " << t.size() << endl;
	for (int i = 0; i < t.size(); i++) {
		cout << "----------------" << endl;
		cout << "startTime: " << t[i].startTime << endl;
		cout << "trainNumber: " << t[i].trainNumber << endl;
		cout << "endPoint: " << t[i].endPoint << endl;
	}
}

void findTrainsWithEndPoint() {
	string findKey;
	int countFinded = 0;
	cout << "Find end point: ";
	while (findKey.empty()) {
		getline(cin, findKey);
	}
	findKey = strip(findKey);
	for (int i = 0; i < t.size(); i++) {
		if (t[i].endPoint == findKey) {
			cout << "----------------" << endl;
			cout << "startTime: " << t[i].startTime << endl;
			cout << "trainNumber: " << t[i].trainNumber << endl;
			cout << "endPoint: " << t[i].endPoint << endl;
			countFinded++;
		}
	}
	if (countFinded == 0) {
		cout << "Trains with this end point not found" << endl;
	}
}

int main() {
	inputTrains();
	sortTrains();
	trainsFileOutput();
	trainsFileInput();
	trainsOutput();
	findTrainsWithEndPoint();
}