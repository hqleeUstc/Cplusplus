#include<iostream>

int main(){
	const int numberOfRows = 7;
	const int numberOfColumns = 6;
	int matrix[numberOfRows][numberOfColumns];
	int row,col,sum,largest,temp;
	//input the values of the matrix
	for(row = 0;row < numberOfRows;row++)
		for(col = 0;col < numberOfColumns;col++)
			cin>>matrix[row][col];
	//calculate the sum of the elements in each row
	for(row = 0;row<numberOfRows;row++)
	{
		sum = 0;
		for(col = 0;col < numberOfColumns;col++)
			sum = sum + matrix[row][col];
		cout<<"Sum of row"<<row+1<<"="<<sum<<endl;
	}
	//calculate the sum of the elements in each column
	for(row = 0;row < numberOfRows;row++)
	{
		largest = matrix[row][0];
	for(col = 1;col < numberOfColumns;col++)
		if(largest < matrix[row][col])
			largest = matrix[row][col];
	cout<<"The largest element in row:"<<row+1<<"="<<largest<<endl; 
	}

	return 0;
}