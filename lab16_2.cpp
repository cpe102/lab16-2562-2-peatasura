#include<iostream>
#include<string>
using namespace std;

void  myString(char *&p,int N){

	p= new char [N+1];
	int u =65;
	for(int i=0;i<N;i++)
	{
		
		p[i]= u+i;
	}
	p[N]=0;

}
//Write the definition of myString() her
int main(){
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;		
	myString(p,N);
	cout << p;	
	delete [] p;
	return 0;
}
