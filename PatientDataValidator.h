#pragma once
#include "FileLogger.h"
class PatientDataValidator
{
public:
	FileLogger *pFileLogger = new FileLogger();
	PatientDataValidator(void);
public:
	~PatientDataValidator(void);
};
