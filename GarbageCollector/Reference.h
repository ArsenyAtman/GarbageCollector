#pragma once

#include "Object.h"

class Reference
{

public:

	Reference(Object* objectPointer) :
		pointer(objectPointer)
	{
		// ...
	}

	virtual ~Reference() = default;

	Object* get() { return pointer; }
	const Object* get() const { return pointer; }

	Object* operator -> () { return pointer; }
	const Object* operator -> () const { return pointer; }

private:

	Object* pointer;

};