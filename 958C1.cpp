#include <iostream>
#include <vector>
#include <ostream>
using namespace std;

template<typename T>
ostream& operator<<(ostream& os, const vector<T>& v){
	for(int i=0;i<v.size();i++)os<<v[i]<<" ";
		return os;
}

void solution(int n, int p, vector<int>v){
	long long max=0, sum=0, sum1=0,sum2=0,s=0;
    for(int i=0;i<v.size();i++){
    	sum += v[i];
    }
    sum2=sum;
    max = sum2%p;
    for(int i=0;i<v.size();i++){
    	sum1 += v[i];
    	sum2 -= v[i];
    	s = sum1%p + sum2%p;
    	if(s>max)max=s;
    }
	cout << max << endl;
}

int readint(){
	int x;
	scanf("%d", &x);
	return x;
}


int main(int argc, char const *argv[])
{
	vector<int> v;
	int n, p;
	n = readint();
	p = readint();
	for(int i=0;i<n;i++){
		v.push_back(readint());
	}
	solution(n,p,v);
	return 0;
}