#include "stdafx.h"

class Operation
{
public:
	virtual double GetResult()=0;
	double num1,num2;
};

class OperationAdd:public Operation
{

public:
	double GetResult();

};

class OperationSub:public Operation
{
public:
	double GetResult();
};

class OperationMul:public Operation
{
public:
	double GetResult();
};

class OperationDiv:public Operation
{
public:
	double GetResult();
};

class OperFactory
{
public:
	Operation* create(char);
};