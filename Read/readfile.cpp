/*
 * readfile.cpp
 *
 *  Created on: Jul 15, 2018
 *      Author: Joel Parizi
 *
 *
 *
 */

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int main() {


	string vocab[5001];
	int i = 0;
	ifstream infile;

	infile.open("wordfreq.txt");

	if (infile.fail()) {

		cout << "File can't be read" << endl;

	} else {

		string s;

		while (getline(infile, s)) {

			std::replace_if(s.begin(), s.end(), ::isdigit, ' ');
			std::replace_if(s.begin(), s.end(), ::ispunct, ' ');

			i++;
			vocab[i] = s;
			cout <<  vocab[i] << endl;

		}

	}

}

