#pragma once
#include "IDBwriter.h"

class PatientXMLdatawriter:public IDBwriter 
{
public:
	
	PatientXMLdatawriter(void);
public:
	~PatientXMLdatawriter(void);

	virtual void read() = 0
};
