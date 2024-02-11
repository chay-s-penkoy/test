all:zadanie-1.o f.o #если проект откомпилирован, линкуем	
	wg++ zadanie-1.o f.o 
zadanie-1.o: zadanie-1.cpp f.h  #если файлы f.h или zadanie-1.cpp изменялись, компилируем
	wg++ -c -fno-elide-constructors -std=c++11 zadanie-1.cpp
f.o: f.cpp f.h  #если файлы f.h или f.c изменялись, компилируем
	wg++ -c -fno-elide-constructors -std=c++11 f.cpp
