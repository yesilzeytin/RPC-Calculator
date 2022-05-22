# RPC-Calculator
A simple calculator implemented by using Sun RPG (rpcgen)

**Commands to install:**
sudo apt-get install rpcbind
rpcinfo
(rpcinfo command is for checking the installation)

**Commands used for RPC generation from the main file calc.x:**
rpcgen -a -C calc.x
make -f Makefile.calc
sudo ./calc_server
**Open another Terminal and run**
sudo ./calc_client localhost [operations in postfix syntax]

**Example test codes**

**Example 1 Call: (basic operation)**
sudo ./calc_client localhost 10 20 x
**Example 1 Server:**
mul(10, 20) is called
**Example 1 Client:**
Inserting 10
Inserting 20
Removing 20
Removing 10
Result: 200
Inserting 200


**Example 2 Call: (complex operation)**
sudo ./calc_client localhost 10 20 x 35 - 44 +
**Example 2 Server:**
mul(10, 20) is called
sub(200, 35) is called
add(165, 44) is called
**Example 2 Client:**
Inserting 10
Inserting 20
Removing 20
Removing 10
Result: 200
Inserting 200
Inserting 35
Removing 35
Removing 200
Result: 165
Inserting 165
Inserting 44
Removing 44
Removing 165
Result: 209
Inserting 209

**Example 3 Call: (invalid input type error test)**
	sudo ./calc_client localhost 10 20 asd
**Example 3 Server:**
	(nothing)
**Example 3 Client:**
	Inserting 10
	Inserting 20
	Please enter a valid input and try again.

**Example 4 Call: (missing arguments input error test)**
	sudo ./calc_client localhost 10
**Example 4 Server:**
	(nothing)
**Example 4 Client:**
	usage: ./calc_client server_host [expression without whitespace] [operation] [expression without whitespace]

**Example 5 Call: (division with 0 handling. Handled in server since if it someone meddles with the client code and sends such a request to the server, the server crashes. Has to be on the server side. Divides with 1 instead.)**
	sudo ./calc_client localhost 10 0 /
**Example 5 Server:**
	You have tried a zero division. Do not trust the output (it's divided by 1) and please don't try to divide something with 0.
**Example 5 Client:**
	Inserting 10
	Inserting 0
	Removing 0
	Removing 10
	Result: 10
	Inserting 10

**Example 6 Call: (unnecessary amount of operations being called error test)**
	sudo ./calc_client localhost 102 + +
**Example 6 Server:**
	(nothing)
**Example 6 Client:**
	Inserting 102
	Removing 102
	Underflow
	Program Terminated
