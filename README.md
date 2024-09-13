# Computer Organization Assignment 1

The following files are required to run the program: driver.cpp, assemblyCalculator.cpp, assemblyCalculator.h, Programming-Project-1.txt, makefile (makes the assemblySim executable)

To run, please first try ./assemblySim Programming-Project-1.txt. If that does not work, try running the make clean command, then the make command and trying again, and make sure that the txt file is spelled correctly.

The program works by reading the data from the Programming-Project-1.txt and iterating through the lines and storing their data (instruction - here ADD, operand1, and operand2) into assemblyCalculator objects. Each assemblyCalculator object is stored in the calculationsArr (an assemblyCalculator array) for easy access later. This is done with the readOperationOperands() function in the driver, which conveniently returns a count of the number of instructions. 

After that, we run and display the results of each operation with the runOperations() function, which displays the instructions again with their results (here, the sum) by iterating through calculationsArr. We also call the calculateSum() and the isThereOverFlow methods on each assemblyCalculator object with this, and display the results.

In this particular problem, the only instruction we are dealing with is adding unsigned hex numbers. To make the adding of the integers easier for me, I typecast the hex values as unsigned integers and just converted them back to hex for when I had to display the results back to the user. 

To check overflow, I checked whether the resulting sum for any addition was less than either of the operands. If it was, overflow occurred, and this was the case for the ADD 0xFFFFFFFF 0x1 instruction (with the rest, there was no overflow). From what I can see, I believe the outputs of my addition operations are correct.

If there are any issues with my running my program please let me know! My github link is https://github.com/Lena-Kemmelmeier/cs219-pa1 if there are any reasons why the file is not working.
