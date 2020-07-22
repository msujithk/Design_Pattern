#pragma once
#include "FileHandler.h"
class FileLogger
{
public:
	FlieHandler *pFileHandler = new FlieHandler();
	FileLogger(void);
public:
	~FileLogger(void);
};
