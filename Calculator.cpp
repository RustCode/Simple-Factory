// Calculator.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include "Operation.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Operation* oper=NULL;
	OperFactory* Factory=NULL;
	oper=Factory->create('/');
	oper->num1=30;
	oper->num2=10;
	cout<<oper->GetResult()<<endl;


	system("pause");
	return 0;
}

