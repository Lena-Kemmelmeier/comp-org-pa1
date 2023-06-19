// Author: Lena Kemmelmeier
// Purpose: CS 219 PA1 (Summer '23) - hexadecimal addition calculator

#ifndef ASSEMBLY_CALCULATOR
#define ASSEMBLY_CALCULATOR

#include <iostream>
#include <string>
using namespace std;

class AssemblyCalculator{
    private:
        string currentOperation;
        unsigned int firstOperand;
        unsigned int secondOperand;

    public:
        //constructors
        AssemblyCalculator(); //default
        AssemblyCalculator(string newOper, unsigned int newOperand1, unsigned int newOperand2); //parameterized
        AssemblyCalculator(const AssemblyCalculator& oldCalc); //copy
    
        // getters + setters
        void setFirstOperand(unsigned int newOperand1);
        void setSecondOperand(unsigned int newOperand2);
        unsigned int getFirstOperand() const;
        unsigned int getSecondOperand() const;

        void setCurrentOperation(string newOper);
        string getCurrentOperation() const;

        // calculating behaviors . . . more to come
        unsigned int calculateSum();
        bool isThereOverFlow();

};

#endif