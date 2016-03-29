#include<iostream>
#include<fstream>

int main(){
	ifstream inData;
	ofstream outData;

	inData.open("D:\\BeginC\\ss.txt");
	outData.open("D:\BeginC\\sss.txt");

	inData.close();
	outData.close();
	return 0;

}