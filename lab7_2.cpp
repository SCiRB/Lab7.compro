#include<iostream>

using namespace std;

int main(){
	
	int i = 0, P[5000], k;
	
	while(i < 5000){
		P[i] = 2*i+1;
		i++;
	}

	cout << "Please input k: ";
	cin >> k;
	
	if(k>0){
		int j = 0;
		int result = 0;
		while (j<5000){
			if (P[j]%k==0){
				result = result - P[j];
			}else{
				result = result + P[j];
			}
		j++;
		}
	cout << "Result = " << result;
	}else{
		cout << "Invalid input!!!";
	}

	return 0;
}
