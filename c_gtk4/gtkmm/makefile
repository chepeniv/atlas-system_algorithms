CC = g++

FL_WARN = -Wall -Werror -Wextra 
FL_DEBUG = -ggdb3
FL_STD = -std=c++17
FSANINTIZE = -fsanitize=address,leak,memory
FL_GTKMM = $(shell pkg-config --cflags --libs gtkmm-4.0)

CCMD = ${CC} ${FL_WARN} ${FL_DEBUG} ${FL_STD}

.DELETE_ON_ERROR:

.PHONY: clean 

example1:
	@${CCMD} helloworld.cpp main.cpp ${FL_GTKMM} -o testwin.exec 
	@./testwin.exec

example2:
	@${CCMD} base.cpp ${FL_GTKMM} -o testwin.exec 
	@./testwin.exec

clean:
	rm -v *~ *.exec *.o
