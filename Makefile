all:zadanie-1.o f.o #���� ������ ��������������, �������	
	wg++ zadanie-1.o f.o 
zadanie-1.o: zadanie-1.cpp f.h  #���� ����� f.h ��� zadanie-1.cpp ����������, �����������
	wg++ -c -fno-elide-constructors -std=c++11 zadanie-1.cpp
f.o: f.cpp f.h  #���� ����� f.h ��� f.c ����������, �����������
	wg++ -c -fno-elide-constructors -std=c++11 f.cpp
