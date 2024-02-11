#include <iostream>
#include <cmath>
#include"f.h"      

using namespace std;

numbers::numbers() {
		size =1+rand() % N;
		//cout<<"size = "<<size<<endl;
		//num[0]=(char)kk;
		int w;
		for (int i = 1; i <= N; i++) 
			num[i]='0';
			
		for (int i = size; i >0; i--) {
			if ( i== 1 ) 
				w=1+ rand() % 9;
			else w= rand() % 10;
			//cout<< w<<endl;
			num[N-size+i]='0' + w;
			

		}
	}

void  numbers::set(const char* mas  ) {
		for (int i =0 ; i<=N; i++) {
		num[i] = mas[i]; 
		}
	}

void numbers::printt ()  {
		//cout << "(" << size << ") ";
		for (int i = 1; i <=( size) ; i++) {
			cout << num[N-size+i];
			
		
		}
		// cout<<endl;
		
	}


 numbers operator + (const numbers& n1, const numbers& n2)
{	
	numbers result;
	int s1;
	
	int size1=n1.size;
	int size2=(int)n2.size;
	int maxx= max(size1 , size2  );
	char res[N+1];
	for (int i = 0; i <= N; i++) 
		res[i]='0';
	int k=1;
	int ost=0;
	for (int i = 0 ; i <maxx ; i++) 
	{
		
		s1= (n1.num[N-i]- '0')+ ( n2.num[N-i]- '0') +ost;
	
		//cout<<"s1= "<<n1.num[N-i]<<"+"<<n2.num[N-i]<<"+"<<ost<<"="<<s1<<endl;
		if  ( s1<10 ) {
			res[N-i]= '0' + s1;
			ost=0;
			
					}
		else {
			ost= 1;
			//cout<<"s2= "<<s2<<endl;
			s1=s1-10;
			res[N-i]= '0' + s1;
			
			}
			if (s1 != 0) 
				k=i+1;
	 	//cout<<"res[" <<(N-i)<<"]="<<res[N-i]<<endl;
	}
	
	if ( (ost==1)&& (maxx<N) ){
		res[N-maxx]='1';
		//res[0]=(char)(maxx+1);
		result.size=maxx+1;
		//cout<<" (ost==1)&& (maxx<N) "<<endl;
	}
	else 
		//res[0]=(char)k;
		result.size=k;
	
	result.set(res);
/* 	n1.printt();
	cout<<" + ";
	n2.printt();
	cout<<" = ";
	//cout<<"Result= ";
	result.printt();
	cout<<endl;
	cout<<endl;
 */    return result;

} 

 numbers operator - (const numbers& n1, const numbers& n2){
	//numbers result;
	numbers diff;
	char res[N+1];
	int s1;
	int ost=0;
	int k=1;
	for (int i = 0 ; i <N ; i++) { // 10^N - n2
			s1= 10 - ( n2.num[N-i]- '0') - ost;

			if  ( s1<10 ) { // 0 <= s1 < 10
				res[N-i]= '0' + s1;
				ost=1;
				k=i+1;
				}
			else { // s1 == 10
				ost= 0;
				res[N-i]= '0';
				}
			
		}
	//default=k;
	diff.size=k;
	diff.set(res);
	/* cout<<"10^N - ";
	n2.printt();
	cout<<" = ";
	diff.printt();
	cout<<endl;
	cout<<endl;
	 */
	
    return n1+diff;
 
 }
