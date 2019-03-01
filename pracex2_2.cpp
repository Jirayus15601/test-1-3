#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

void sort(float x[], int N){
	for(int i = 1; i < N; i++){
		for(int j = i; j > 0; j--){
			if(x[j] < x[j-1]){
				float temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
			}else{
				break;
			} 
		}
	}
}

int main(){
	
	//Write your code here
	ofstream result("result.txt");
	ifstream score1("score3.txt");
	string line;
float a[20]={};
float b;
 //	while(getline(score1,line)){
//		cout <<  atof(line.c_str()) << " ";
//		allscore << atof(line.c_str()) << " ";
//	}
	for(int i = 0 ; i < 20; i++){
		getline(score1,line);
		cout << atof(line.c_str()) << " ";
		b = atof(line.c_str());
		a[i] = b;
	}
	cout << "\n\n";
	for(int j = 0 ; j < 20 ; j++){
		sort(a,20);
	}
	int l = 1;
	int m = 1;
	for(int k = 19 ; k >= 0 ; k--){
		m = l;
		if(a[k] == a[k+1]){
			m += 0;
		}else{
			m++;
		}
		l++;
	result  <<  m-1 << " : " << a[k] << "\n";
	}
}
//while(getline(score1,line)){
	//	allscore << atof(line.c_str()) << " ";
//	}

