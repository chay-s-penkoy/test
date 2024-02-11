#ifndef F_H
#define F_H
#define N 1111

class numbers {
	private:
	public:
		int size;
		numbers(); 	
		void set(const char* mas );
		void printt();
		char num[N+1];

		//friend CMatrix operator + (const CMatrix& A, const CMatrix& B);
		//friend numbers operator + (const numbers& n1, const numbers& n2);
		//friend numbers operator - (const numbers& n1, const numbers& n2);
};

		numbers operator + (const numbers& n1, const numbers& n2);
		numbers operator - (const numbers& n1, const numbers& n2);

/* 
 numbers operator + (numbers n1, numbers n2);
 numbers operator - (numbers n1, numbers n2);
 */
#endif //F_H
