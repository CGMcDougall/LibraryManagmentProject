Author: Connor McDougall #101179300
Program: Assignment 1 Library Reservations
Purpose: To organize reservations for a Library and its rooms

Compilation: make
Clean: make clean
Launch: ./a1 

Operation:


	
	Library()
		Contructor creates a Library Object
		Holds list of Students, Rooms and Reservations
	addStudent(name,numeber)
		Adds a student object ot the libraries array of students
	addRoom(name,capacity,computers, hasWhitboards)
		Adds a room object to the libraries array of Rooms
	isFree(room name, Date obj)
		Checks to see if room inputted exists
		Checks to see if the room is free
	makeReservation(student name, room name, Date obj)
		Checks to see if resevation overlaps with existing reservation
		Creates a resevation and adds it to the array of reservations in Library

Files:
	Date.h
	Date.cc
	Library.h
	Library.cc
	Reservation.h
	Reservation.cc
	Room.h
	Room.cc
	Student.h
	Student.cc
	Makefile
	README
	a1-global.cc
