#include <iostream>
#include <vector>
#include <map>
#include <ostream>
using namespace std;

template<typename T>
ostream& operator<<(ostream& os, const vector<T>& v){
	for(int i=0;i<v.size();i++)os<<v[i]<<" ";
		return os;
}

bool judge(int m, int u[]){
	for(int i=0;i<m;i++){
		if(u[i]==0)continue;
		else return false;
	}
	return true;
}

void solution(int n, int m, vector<int>v, int u[]){
	int total = 0;
	for(int i=0;i<m;i++){
		total += u[i];
	}
	for(int i=0;i<total;i++){
		u[v[i]-1] -= 1;
	}
	int p=0;
	while((judge(m,u)==false)&&(p<n-total)){
		u[v[p]-1] += 1;
		u[v[p+total]-1] -=1;
		p++;
	}
	if(judge(m,u)){
		printf("YES");
	}
	else{
		printf("NO");
	}
}



int readint(){
	int x;
	scanf("%d", &x);
	return x;
}


int main(int argc, char const *argv[])
{
	vector<int> v;
	int n, m;
	scanf("%d %d", &n, &m);
	for(int i=0;i<n;i++){
		v.push_back(readint());
	}
	int u[m];
	for(int i=0;i<m;i++){
		u[i]=readint();
	}
	solution(n, m, v, u);
	return 0;
}