#include <iostream>
#include <ctime>

#include"f.h"      

using namespace std;

int main() {
	srand( time(0) );
	//setlocale(LC_CTYPE, "rus");
	numbers tt1;
	numbers tt2;
	cout<<"N= "<<N<<endl;
	cout<<"tt1 = ";
	tt1.printt();
	cout<<endl;
	cout<<"tt2 = ";
	tt2.printt();
	cout<<endl<<"tt1-tt1=";
(tt1-tt1).printt();
puts("");
return 0; 
//	cout<<endl;
//	cout<<endl;

	numbers tt3=tt1-tt2;
	cout<<"tt1-tt2  = ";
	tt3.printt();
	cout<<endl;
	
	tt3=tt1+tt2;
	cout<<"tt1+tt2  = ";
	tt3.printt();
	cout<<endl;
	cout<<endl;
	
	cout<< " TESTS :"<<endl;
	
 	tt3=tt1+tt2-tt1-tt2;
	cout<<"1) tt1+tt2-tt1-tt2= ";
	tt3.printt();
	cout<<endl;

	
	cout<<"2) tt1-tt1+tt1  = ";
	tt3=tt1-tt1+tt1;
	tt3.printt();
	cout<<endl;
	
	cout<<"3) tt1+tt2  = ";
	tt3=tt1+tt2;
	tt3.printt();
	cout<<endl;
	cout<<" tt2+tt1  = ";
	tt3=tt2+tt1;
	tt3.printt();
	cout<<endl;

	numbers tt4;
	cout<<"tt4= ";
	tt4.printt();
	cout<<endl;	
	cout<<"4) tt1+(tt2+ tt4) = ";
	tt3=tt1+(tt2+ tt4);
	tt3.printt();
	cout<<endl;
	cout<<" (tt1+tt2) + tt4 = ";
	tt3=(tt1+tt2) + tt4;
	tt3.printt();
	cout<<endl;
	
	cout<<"5) tt1-tt2 = ";
	tt3=tt1-tt2;
	tt3.printt();
	cout<<endl;
	cout<<" tt2-tt1 = ";
	tt3=tt2-tt1;
	tt3.printt();
	cout<<endl;


 
	return 0;
}

