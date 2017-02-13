#include <iostream>
#include<math.h>
#include <iomanip>
using namespace std;

int main() {
	int test;
	double R,pi;
	pi=3.14159265358979323846264338327;
	int i,n;
	i=1;
	cin>>test;
	while(test--)
	{
		cin>>R>>n;
		cout<<"Scenario #"<<i<<':'<<endl;
		i++;
		cout<<setprecision(3)<<(double)(R*sin(pi/n))/(1+sin(pi/n))<<endl;
	}
	// your code goes here
	return 0;
}