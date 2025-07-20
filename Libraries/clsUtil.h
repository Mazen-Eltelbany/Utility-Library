#pragma once
#include <iostream>
#include<stdlib.h>
#include "ClsDate.h"
using namespace std;
class clsUtil
{
public:
	enum enchartype {
		capitalletter = 1,
		smallletter = 2,
		mixletter
	};
	static void Srand() {
		srand((unsigned)time(NULL));
	}
	static int random(int from, int to) {
		int random = rand() % (to - from + 1) + from;
		return random;
	}
	static void printarray(int arr[], int len) {
		for (int i = 0; i < len; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
	}
	static void printarray(string arr[], int len) {
		for (int i = 0; i < len; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
	}
	static void printarray(double arr[], int len) {
		for (int i = 0; i < len; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
	}
	static void printarrayverticaly(int arr[], int len) {
		for (int i = 0; i < len; i++) {
			cout << arr[i] <<endl;
		}
	}
	static void printarrayverticaly(string arr[], int len) {
		for (int i = 0; i < len; i++) {
			cout << arr[i] <<endl;
		}
	}
	static void printarrayverticaly(double arr[], int len) {
		for (int i = 0; i < len; i++) {
			cout << arr[i] <<endl;
		}
	}
	static char getrandomchar(enchartype enc) {
		switch (enc) {
		case enchartype::smallletter:
			return char(random(97, 122));
			break;
		case enchartype::capitalletter:
			return char(random(65, 90));
		case enchartype::mixletter:
			return(random(0, 1)) ? char(random(65, 90)) : char(random(97, 122));
		defualt:
			return char(random(65, 90));
			break;
		}
	}
	static string Generateword(enchartype enc, int len) {
		string s = "";
		for (int i = 0; i < len; i++) {
			s += getrandomchar(enc);
		}
		return s;
	}
	static string Generatekey(enchartype enc) {
		string s = "";
		for (int i = 0; i < 4; i++) {
			s += Generateword(enc, 4);
			if (i < 3) {
				s += '-';
			}
		}
		return s;
	}
	static void  Generatekeys(int numofkeys, enchartype enc) {
		for (int i = 1; i <= numofkeys; i++) {
			cout << "Key [" << i << "]: " << Generatekey(enc) << endl;
		}
	}
	static void Swap(int& x, int& y) {
		int temp = x;
		x = y;
		y = temp;
	}
	static void Swap(double& x, double& y) {
		double temp = x;
		x = y;
		y = temp;
	}
	static void Swap(string& x, string& y) {
		string temp = x;
		x = y;
		y = temp;
	}
	static void Swap(char& x, char& y) {
		char temp = x;
		x = y;
		y = temp;
	}
	static void Swap(bool& x, bool& y) {
		bool temp = x;
		x = y;
		y = temp;
	}
	static void Swap(clsDate& date1, clsDate& date2) {
		clsDate temp = date1;
		date1 = date2;
		date2 = temp;
	}
	static void ShuffleArray(int arr[], int len) {
		for (int i = 0; i <len; i++)
		{
			Swap(arr[random(1, len) - 1], arr[random(1, len) - 1]);
		}
	}
	static void ShuffleArray(string arr[], int len) {
		for (int i = 0; i < len; i++)
		{
			Swap(arr[random(1, len) - 1], arr[random(1, len) - 1]);
		}
	}
	static void fillarraywithrandomnumbers(int arr[], int len, int from, int to) {
		for (int i = 0; i < len; i++) {
			arr[i] = random(from, to);
		}
	}
	static void fillarraywithrandomwords(string arr[], int len, enchartype enc, int lenofword) {
		for (int i = 0; i < len; i++) {
			arr[i] = Generateword(enc, lenofword);
		}
	}
	static void fillarraywithrandomkeys(string arr[], int len, enchartype enc) {
		for (int i = 0; i < len; i++) {
			arr[i] = Generatekey(enc);
		}
	}
	static string Tabs(int numoftaps) {
		string s = "";
		while (numoftaps--) {
			s += "\t";
		}
		return s;
	}
	static string encrypttext(string text, short encryptionkey) {
		for (int i = 0; i < text.length(); i++) {
			text[i] = char((int)text[i] + encryptionkey);
		}
		return text;
	}
	static string decrypttext(string text, short encryptionkey) {
		for (int i = 0; i < text.length(); i++) {
			text[i] = char((int)text[i] - encryptionkey);
		}
		return text;
	}
};

