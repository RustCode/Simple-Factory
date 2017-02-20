#include "stdafx.h"
#include <iostream>
#include "Operation.h"

using namespace std;

double OperationAdd::GetResult()
{
	return (num1+num2);
}

double OperationSub::GetResult()
{
	return (num1-num2);
}

double OperationMul::GetResult()
{
	return (num1*num2);
}

double OperationDiv::GetResult()
{
	try{
		if (num2==0) throw 0;
		return (num1/num2);
	}
	catch(int error){
		cout<<"cant divide by zero."<<endl;
	}
}

Operation* OperFactory::create(char ch)
{
	Operation* oper=nullptr;
	switch (ch)
	{
	case '+':
		oper=new OperationAdd();
		break;
	case '-':
		oper=new OperationSub();
		break;
	case '*':
		oper=new OperationMul();
		break;
	case '/':
		oper=new OperationDiv();
		break;
	}
	return oper;
}