#include<iostream>
using namespace std;
void bubbleSort(int list[],int length);
int main(){
	int list[] = {2,56,34,25,73,46,89,10,5,16};
	int i;
	bubbleSort(list,10);
	cout<<"After bubbleSort,the list elements are:"<<endl;
	for(i = 0;i < 10;i++)
		cout<<list[i]<<" ";
	cout<<endl;



	return 0;
}

void bubbleSort(int list[],int length){
	int temp;
	int counter,index;
	for(counter = 0;counter< length-1;counter++){
		for(index = 0;index < length-1-counter;index++){
			temp = list[index];
			list[index] = list[index+1];
			list[index+1] = temp;
		}
	}
}