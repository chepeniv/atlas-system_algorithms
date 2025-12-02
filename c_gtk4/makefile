include ../common.mk

testdrive-gtk4: 
	@${CC} c_gtk4/gtk_window.c -o gtk_window.x ${C_FL_GTK4}
	@./gtk_window.x 

testdrive-gtkmm: 
	@${CC} gtkmm/gtk_window.c -o gtk_window.x ${C_FL_GTKMM}
	@./gtk_window.x 

testdrive-criterion:
	@${CC} ${DIR_TEST}/template.test.c -o testdrive_unittest.x
	@./testdrive_unittest.x ${CRIT_FL}
