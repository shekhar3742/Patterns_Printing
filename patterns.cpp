#include <bits/stdc++.h>
using namespace std;

void pattern1(int N){
	for(int i= 0; i< N ; i++){
		for(int j= 0 ; j<N ; j++){
			cout<<"*";
		}
		cout<<endl;
	}
}

void pattern2(int N){
	for(int i= 0 ;i < N; i++){
		for(int j = 0 ; j<=i ; j++){
			cout<<"*";
		}
		cout<<endl;
	}
}

void pattern3(int N){
	for(int i=1; i<=N; i++){
		for(int j = 1 ; j<=i; j++){
			cout<< j;
		}
		cout<<endl;
	}
}

void pattern4(int N){
	for(int i = 1 ; i<=N ; i++){
		for(int j = 0 ; j<i ;j++){
			cout<< i ;
		}
		cout<<endl;
	}
}

void pattern5(int N){
	for(int i =0 ; i<N; i++){
		for(int j=1; j<=(N-i); j++){
			cout<< "*";
		}
		cout<<endl;
	}
}

void pattern6(int N){
	for(int i= 0 ; i<N ; i++ ){
		for(int j=1 ; j<=(N-i); j++){
			cout<<j;
		}
		cout<<endl;
	}
}

void pattern7(int N){
	for(int i=1; i<=N ; i++){
		for(int j=1; j<=(N-i);j++){
			cout<< " ";
		}
		for(int j=1 ; j<=(2*i-1); j++){
			cout<<"*";
		}
		for(int j=1 ; j<=(N-i); j++){
			cout<<" ";
		}
		cout<<endl;
	}
}

void pattern8(int N){
	for( int i =0; i<N; i++){
		for(int j = 0 ; j<i; j++){
			cout<<" ";
		}
		for(int j = 0 ;j<2*N-(2*i+1); j++){
			cout<< "*";
		}
		for(int j = 0; j<i; j++){
			cout<< " ";
		}
		cout<<endl;
	}
}

void pattern9(int N){
	for(int i=1 ; i<=N; i++){
		for(int j=1; j<=(N-i); j++){
			cout<< " ";
		}
		for(int j=1; j<=(2*i-1); j++){
			cout<<"*";
		}
		for(int j=1; j<=(N-i); j++){
			cout<< " ";
		}
		cout<<endl;
		
	}
	for(int i=1; i<=N;i++){
		for(int j=1 ; j<i; j++){
			cout<<" ";
		}
		for(int j=1; j<=2*N-(2*i-1); j++){
			cout<<"*";
		}
		for(int j=1 ; j<i; j++){
			cout<<" ";
		}
		cout<<endl;
	}
}

void pattern10(int N){
	for(int i=1; i<=N;i++){
		for(int j=1; j<=i; j++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=1; i<=(N-1); i++){
		for(int j=1; j<=(N-i); j++){
			cout<<"*";
		}
		cout<<endl;
	}
}

void pattern11(int N){
	for(int i=1; i<=N; i++){
		int start = 1;
		if(i % 2 == 0) start= 0 ;
		else start = 1;
		for(int j=1 ; j<=i; j++){
			cout<<start;
			start = 1-start;
		}
		cout<<endl;
	}
}

void pattern12(int N){
	
}








int main(){
	int N = 5 ; 
//	pattern1(N);
//	pattern2(N);
//	pattern3(N);
//	pattern4(N);
//  pattern5(N);
//	pattern6(N);
//	pattern7(N);
//	pattern8(N);
//	pattern9(N);
//	pattern10(N);
	pattern11(N);
	return 0 ;
}
