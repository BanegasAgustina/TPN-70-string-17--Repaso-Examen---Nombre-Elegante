#include <bits/stdc++.h>
using  namespace std;
bool NombreElegante (string n);
int main (){
	string nombre;
	cout<<"insertar nombre:  ";
	cin>>nombre;
	bool o=NombreElegante ( nombre);
	if(o==false){
		cout<<"tu nombre no es elegante :(";
	}
	else{
		cout<<"tu nombre es elegante :)";
	}
	return 0;
}
bool NombreElegante (string n){
	bool flag=false;
	for(int i=0;i<n.size();i++){
		if (n[i] =='A'&& n[i] =='a'){
		    flag= true;
		}
		
	
}return flag;}
