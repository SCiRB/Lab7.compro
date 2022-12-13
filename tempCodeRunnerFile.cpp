#include<iostream>
using namespace std;

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

int main(){
    string x = "";
    cin>> x;
    cout<< func2 (x);
    return 0;
}