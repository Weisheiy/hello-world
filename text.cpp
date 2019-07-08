#include<iostream>
#include<cmath>

using namespace std;

int length(int a[]){
	int i = 0;
	int temp;
	cin>>temp;
	while(temp != -9999){
		a[i] = temp;
		i++;
		cin>>temp;
	}
	return i;
}



int getlength(char c[]){
	int i = 0;
	while(c[i] != '\0'){
		i++;
	}
	return i;
}
void exchange(char c[]){
	int i = 0;
	while(c[i]!='\0'){
		if(c[i]>='a' && c[i]<='z')
			c[i]-=32;
		i++;
	}
}
void mystrcpy(char s1[],char s2[]){
	int i = 0;
	while(s1[i]!='\0'){
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
}
int mycmpstr(char c1[],char c2[]){
	int i = 0;
	int ans = 0;
	while(c1[i]!='\0'||c2[i] != '\0'){
		if(c1[i]>c2[i] ){
			ans = 1;
			break;
		}else if(c1[i]<c2[i]){
			ans = -1;
			break;
		}else{
			i++;
		}
	}
	return ans;
}
int G(int n){
	if(n == 0)
		return 1;
	return n*G(n-1);
}

int getMax(int s[],int n){
	if(n>1){
		int t;
		t = getMax(s,n-1);
		return (t>s[n-1])?t:s[n-1];
	}else
		return s[0];
}
int fib(int n){
	if(n == 0)
		return 0;
	if(n == 1)
		return 1;
	return fib(n-1)+fib(n-2);
}
void reverse1(int a[],int n,int i){
	if(n>i){
		reverse1(a,n-1,i+1);	
		int temp = a[n];
		a[n] =a[i] ;
		a[i] = temp;
	}
	
}
void print(int a[],int len){
	for(int i = 0;i<len;i++){
		cout<<a[i];
		if(i != len-1)
			cout<<" ";
	}
	cout<<endl;
}
void print(double a[],int len){
	for(int i = 0;i<len;i++){
		cout<<a[i];
		if(i != len-1)
			cout<<" ";
	}
	cout<<endl;
}
void reverse(int a[],int n){
	int i = 0;
	int j = n-1;
	for(;i<j;i++,j--){
		int temp = a[i];
		a[i]=a[j];
		a[j] = temp;
	}
}
void reverse(double a[],int n){
	int i = 0;
	int j = n-1;
	for(;i<j;i++,j--){
		double temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
int input(int ai[]){
	int i = 0;
	int a;
	cin>>a;
	while(a!=-9999){
		ai[i] = a;
		i++;
		cin>>a;
	}
	return i;
}
int input(double ad[]){
	int i = 0;
	double a;
	cin>>a;
	while(a != -9999){
		ad[i] = a;
		i++;
		cin>>a;
	}
	return i;
}
int Sum(int a[],int n){
	int sum = 0;
	for(int i = 0;i<n;i++){
		sum+=a[i];
	}
	return sum;
}
double Sum(double a[],int n){
	double sum = 0;
	for(int i = 0;i<n;i++){
		sum += a[i];
	}
	return sum;
}
void swap(int &a,int &b){
	int temp = a;
	a = b;
	b = temp;
}
void swap(double &a,double &b){
	double temp = a;
	a = b;
	b = temp;
}
void swap(int a[],int &a1,int b[],int &b1){
	int temp[100];
	int i;
	for(i = 0;i<a1;i++){
		temp[i] = a[i];
	}
	for(i = 0;i<b1;i++){
		a[i] = b[i];
	}
	a[i]='\0';
	for(i = 0;i<a1;i++){
		b[i] = temp[i];
	}
	b[i] = '\0';
	int tem = a1;
	a1 = b1;
	b1 = tem;
}
void swap(char a[],char b[]){
	char temp[100];
	int i = 0;
	while(a[i] !='\0'){
		temp[i] = a[i];
		i++;
	}
	temp[i] = '\0';
	i = 0;
	while(b[i] !='\0'){
		a[i] = b[i];
		i++;
	}
	a[i] = '\0';
	i = 0;
	while(temp[i]!='\0'){
		b[i] = temp[i];
		i++;
	}
	b[i] = '\0';
}
int main(){
	int a,b;
	double da,db;
	int aa[100],ab[100];
	char s1[100],s2[100];
	int n,m;
	int i;
	cin>>a>>b;
	cin>>da>>db;
	cin>>n;
	for(int i = 0;i<n;i++){
		cin>>aa[i];
	}
	cin>>m;
	for(int i = 0;i<m;i++){
		cin>>ab[i];
	}
	cin>>s1>>s2;
	
	swap(a,b);
	swap(da,db);
	swap(aa,n,ab,m);
	swap(s1,s2);
	
	cout<<a<<" "<<b<<endl;
	cout<<da<<" "<<db<<endl;
	print(aa,n);
	print(ab,m);
	cout<<s1<<" "<<s2<<endl;
	return 0;
}

