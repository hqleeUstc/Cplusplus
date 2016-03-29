#include<iostream>
using namespace std;
int main(){
	char ch;
	cout<<"Linear1 : Enter a string;";

	cin.get(ch);
	cout<<endl;
	cout<<"line 4: After first cin.get(ch)"
	<<"ch="<<ch<<endl;

	cin.get(ch);
	cout<<"Line 6:After second cin.get(ch)"
	<<"ch="<<ch<<endl;
	
	cin.putback(ch);
	cin.get(ch);
	cout<<"line 9:After putback and then"
	<<"cin.get(ch);ch="<<ch<<endl;

	ch = cin.peek();
	cout<<"line 11: After cin.peak();ch="
	<<ch<<endl;

	cin.get(ch);
	cout<<"line 13:After cin.get(ch);ch="
	<<ch<<endl;
	return 0;
}