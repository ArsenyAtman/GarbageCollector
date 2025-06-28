#pragma once

#include "GarbageCollectorTypes.h"

class Object
{

public:

	Object(Object* outerObject) :
		outer(outerObject)
	{
		// ...
	}

	virtual ~Object() = default;

	Object* getOuter() { return outer; }
	const Object* getOuter() const { return outer; }

	GC::bitField getFlags() const { return flags; }
	void setFlags(GC::bitField newFlags) { flags &= newFlags; }

private:

	Object* outer;
	GC::bitField flags;
};

