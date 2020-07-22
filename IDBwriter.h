#pragma once

class IDBwriter
{
public:
	IDBwriter(void);
	virtual void writeToDB() = 0;
public:
	~IDBwriter(void);
	
};
