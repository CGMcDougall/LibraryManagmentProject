a1: a1

a1:  Date.o Room.o Student.o Reservation.o Library.o a1-global.cc
	g++ -o r Date.o Reservation.cc Room.o Student.o Library.o a1-global.cc

Date.o: Date.h Date.cc
	g++ -c Date.cc

Student.o: Student.h Student.cc
	g++ -c Student.cc

Room.o: Room.h Room.cc
	g++ -c Room.cc

Reservation.o: Reservation.h Reservation.cc
	g++ -c Reservation.cc

Library.o: Library.h Library.cc
	g++ -c Library.cc

clean:
	rm -f a1 Student.o Room.o Reservation.o Library.o Date.o a1
