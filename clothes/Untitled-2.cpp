#include<iostream>
using namespace std;

int getLargest(int giatri[]);
int getSmallest(int giatri[]);

int main(){
	
	const int num = 10;
	int giatri[num];
	for(int i = 0; i < num; i++){
		cout << "Nhap vao cac so: ";
		cin >> giatri[i];
		cout <<	getLargest(giatri[]) << endl;
		cout <<	getSmallest(giatri[]);
	}
}

int getLargest(int giatri[]){
	int max;
	for(int i = 1; i < giatri[1] ; i++){
		giatri[0] = max;
		if(giatri[i] > max ){
			giatri[i] = max;
		}
	}
	return max;
}
int getSmallest(int giatri[]){
	int min;
	for(int i = 1; i < giatri[i] ; i++){
		giatri[0] = min;
		if(giatri[i] < min ){
			giatri[i] = min;
		}
	}
	return min;
}