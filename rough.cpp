
#include<iostream>
using namespace std;
/*
int main(){
  for (int i=1;i<=4;i++){
  	  int a=1;  
  	for(int j=1;j<=i;j++){
  		int d = a+64;
  		char ch = (char)d;
  		a++;
    	if(i%2==0){
  		cout <<ch<<" ";
  	}else{
  		cout <<j<<" ";
	  }
  		
	  }
	  cout << endl;
  }
}    


int main(){
	  int n,m;
	  cin >> n >> m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(i==0 || j==0 || i==n-1 || j==m-1){
				cout <<"*";
			}else{
				cout <<" ";
			}
		}
		cout <<""<<endl;
	}
}
*/


int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int t;
    cin >> t;

    while (t--) {
        int l, r, val;
        cin >> l >> r >> val;

       
        for (int i = l - 1; i <= r - 1; i++) {
            arr[i] += val;
        }
    }

    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    cout << sum << endl;
}