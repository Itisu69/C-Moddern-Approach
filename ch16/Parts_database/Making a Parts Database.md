To illustrate how nested arrays and structures are used in practice, we'll now develop a fairly long program that maintains a database of information about parts stored in a warehouse. The program is built around an array of structures, with each structure containing information- part number, name, and quantity - about one part. This program will support the following operations:

- ***Add a new part number, name, and initial quantity on hand*.** The program must print an error message if the part is already in the database or if the database is full.
- ***Given a part number, print the name of the part and the current quantity on hand.*** The program must print an error message if the part number isn't in the database.
- ***Given part number change the quantity on hand*.** The program must print an error message if the part number isn't in the database.
- ***Print a table showing all information in the database.*** Parts must be displayed in the order in which they are entered.
- ***Terminate program execution.***

---

	Enter operation code: i
	Enter part number: 528
	Enter part name: DIsk drive
	Enter quantity on hand: 10

	Enter operation code: 8
	Enter part number: 528
	Part name: Disk drive 
	Quantity on hand: 10