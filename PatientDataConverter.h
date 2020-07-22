#pragma once
#include "PatientCSVdatareader.h"

class PatientDataConverter
{
public:
	PatientCSVdatareader *pPatientCSVdatareader = new PatientCSVdatareader();
	PatientDataConverter(void);
public:
	~PatientDataConverter(void);
};
