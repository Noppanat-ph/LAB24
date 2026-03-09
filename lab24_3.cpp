#include<iostream>
#include<set>

using namespace std;

//Write function count() here.
int count(int d[],int n){
    int count = 0;
    set<int> data;
    for(int i = 0; i < n; i++){
        data.insert(d[i]);
    }
    set<int>::iterator i;
    for(i = data.begin(); i != data.end(); i++){
        count++;
    }
    return count;
}

int main(){	
	int data[] = {1,2,4,5,4,8,2,1,2,4,6,1,4,4,4,2,1,0,12}; 
	
	cout << "There are " << count(data,sizeof(data)/sizeof(int)); 
	cout << " different numbers in data.";
	
	return 0;
}
