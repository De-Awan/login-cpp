#include <iostream>
using namespace std;

int main() {

string username = "projek", pw ="uas";
string uput,pwput;

cout<<"MASKUKAN USER NAME : ";
cin>>uput;

cout<<"MASUKAN PASSWORD ANDA :";
cin>>pwput;

if (username == uput && pw == pwput){
 cout<<"SELAMAT DATANG DI WEB KELOMPOK 2";
}else {
	cout<<"MAAF USER NAME ANDA SALAH"<<endl;
}


return 0;
}
