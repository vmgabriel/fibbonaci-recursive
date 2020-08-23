#include <stdio.h>
#include <iostream>

using namespace std;

double factiterativo(int num, int & op)
{
	double res=1;
	for (int i=1;i<=num;i++)
	{
		op++;
		res=res*i;
	}
	return res;
}

double factrecursivo(int num, int & op)
{
	op++;
	if (num == 1 || num == 0)
	{
		return 1;
	}
	else
	{
		return factrecursivo(num-1, op)*num;
	}
}

int main()
{
	int n, op=0;
	cin>>n;
	cout<<"forma iterativa de "<<n<<endl;
	cout<<"valor dado: "<<factiterativo(n,op)<<" con cantidad de operaciones "<<op<<endl;
	op=0;
	cout<<"forma recursiva de "<<n<<endl;
	cout<<"valor dado: "<<factrecursivo(n,op)<<" con cantidad de operaciones "<<op<<endl;
	return 0;
}
