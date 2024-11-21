P2.	Modify class SharedString from folder N:\CLASS\GanchevG\CS221\Class19_MemoryManagement\ProgramsCh15\SharedStringRenamed\ in the following two ways:
a)	Add a private member function compare(SharedString) that returns -1 or 0 or 1 depending on whether the string is lexicographically less than, equal to, or greater than the argument. Use this function to overload the operators <,  ==, and >.
[8 points]

b)	Implement operator[] in class SharedString. Write this operator so that changes to a character value alter only the target string and not any shared strings. For example: 
SharedString a = "Jim";
SharedString b = a;
b[0] = 'f'; // a should still have value Jim
     But if the current character is the same, do not make any change.
     Provide a test program to test your class. 
