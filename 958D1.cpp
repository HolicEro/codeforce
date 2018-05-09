#include <iostream>
#include <vector>
#include <ostream>
#include <map>
using namespace std;

template<typename T>
ostream& operator<<(ostream& os, const vector<T>& v){
	for(int i=0;i<v.size();i++)os<<v[i]<<" ";
		return os;
}

void solution(int n, vector<float>v){
	map<float,int> m;
	vector<int>result;
	for(int i=0;i<v.size();i++){
		if(m.count(v[i]==0)){
			m[v[i]]=0;
		}
		m[v[i]]++;
	}
	for(int i=0;i<v.size();i++){
		result.push_back(m[v[i]]);
	}
	cout << result << endl;
}

int readint(){
	int x;
	scanf("%d", &x);
	return x;
}


int main(int argc, char const *argv[])
{
	vector<float> v;
	int n;
	float a,b,c;
	float p;
	n = readint();
	for(int i=0;i<n;i++){
		scanf("\n %*c %f %*c %f %*c %*c %f", &a, &b, &c);
		p = (a+b)/c;
		v.push_back(p);
	}
	
	
	solution(n, v);
	cout << endl;
	return 0;
}