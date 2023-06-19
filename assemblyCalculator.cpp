// Author: Lena Kemmelmeier
// Purpose: CS 219 PA1 (Summer '23) - hexadecimal addition calculator

#include "assemblyCalculator.h"

AssemblyCalculator::AssemblyCalculator(){
    firstOperand = 12;
    secondOperand = 12;
    currentOperation = "DEFAULT";
}

AssemblyCalculator::AssemblyCalculator(string newOper, unsigned int newOperand1, unsigned int newOperand2){
    currentOperation = newOper;
    firstOperand = newOperand1;
    secondOperand = newOperand2;
}

AssemblyCalculator::AssemblyCalculator(const AssemblyCalculator& oldCalc){
    currentOperation = oldCalc.currentOperation;
    firstOperand = oldCalc.firstOperand;
    secondOperand = oldCalc.secondOperand;
}

// getters + setters
void AssemblyCalculator::setFirstOperand(unsigned int newOperand1){
    firstOperand = newOperand1;
}

void AssemblyCalculator::setSecondOperand(unsigned int newOperand2){
    secondOperand = newOperand2;
}

unsigned int AssemblyCalculator::getFirstOperand() const{
    return firstOperand;
}

unsigned int AssemblyCalculator::getSecondOperand() const{
    return secondOperand;
}

void AssemblyCalculator::setCurrentOperation(string newOper){
    currentOperation = newOper;
}

string AssemblyCalculator::getCurrentOperation() const{
    return currentOperation;
}

// calculating behaviors . . . more to come

// calculate the sum
unsigned int AssemblyCalculator::calculateSum(){
    return (firstOperand + secondOperand);
}

// checking for overflow with calculateSum()
bool AssemblyCalculator::isThereOverFlow(){
    bool hasOverflowOccured = false;
    unsigned int sum = calculateSum();

    // if the sum result is less than either of the two operands (unsigned), then overflow has occured
    if (sum < firstOperand || sum < secondOperand){
        return hasOverflowOccured = true;
    }
    return hasOverflowOccured;
}