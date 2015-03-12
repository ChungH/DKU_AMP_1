#include "Mul.h"
#include "System.h"

using namespace Instruction::Arithmetic;

Mul::Mul(void)
{
}

Mul::~Mul(void)
{
}

unsigned int Mul::Instruct(unsigned int operand0_value, unsigned int operand1_value)
{
    return operand0_value * operand1_value;
}