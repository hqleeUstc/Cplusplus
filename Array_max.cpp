#include<iostream>

int main(){
	double sale[10],sum = 0,maxValue;
	int counter,maxIndex = 0;
	ifstream infile;
	string fileName;
	//2-d array
	int array[4][3];
	/*get the sum and maxValue of the array*/
	for(counter = 0;counter < 10;counter++){

		cin>>sale[counter];
		sum += sale[counter];
	}

	for(unsigned int index = 0;index < 10;index++ )
		if(sale[maxIndex] < sale[index])
			maxIndex = index;

	maxValue = sale[maxIndex];

	/* deal with the string-name file*/
	cout<<"Enter the input file name";
	cin>>fileName;
	infile.open(fileName.c_str());


	infile.close();


	return 0;
}