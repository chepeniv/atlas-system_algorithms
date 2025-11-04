CC      := gcc
GDB     := cgdb

FL_ERR   := -Wall -Werror -Wextra -pedantic 
# --std=c89
FL_DEBUG := -fsanitize=address -fsanitize=undefined -fsanitize=leak -ggdb3 
FL_TEST  := $(shell pkg-config --cflags --libs criterion)

CREL     := ${CC} ${FL_ERR}
CDEV     := ${CC} ${FL_ERR} ${FL_DEBUG} 
CTEST    := ${CC} ${FL_ERR} ${FL_DEBUG} ${FL_TEST} 

DIR_TEST := dev_tests

FL_VALG   := -s --track-origins=yes --leak-check=full --show-leak-kinds=all
MEMTEST := valgrind ${FL_VALG}

FL_TEST := --full-stats --verbose=0 --timeout=4 --color=always

.DELETE_ON_ERROR:
.PHONY: clean clean-obj clean-lib betty

######## TASKS

######## RELEASE

######## DEVELOPMENT

dev-criterion_testdrive:
	@${CTEST} ${DIR_TEST}/template.test.c -o testdrive_unittest.x
	@./testdrive_unittest.x ${FL_TEST}

######## UNIT TESTS

######## MEMORY CHECKS

######## RUN

######## UTILITY

betty:
	@echo "running Betty CODING STYLE checks..."
	@betty-style *.c *.h
	@echo "running Betty DOCUMENTATION checks..."
	@betty-doc *.c *.h

clean: clean-obj clean-lib
	@$(RM) -v *~ *.exec *.out *.x

clean-obj:
	@$(RM) -v *.o

clean-lib:
	@$(RM) -v *.so
