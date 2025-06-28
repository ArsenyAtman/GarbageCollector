#pragma once

#include "Array.h"
#include "Object.h"

class GarbageCollector
{

public:

	GarbageCollector()
	{
		// ...
	}

	virtual ~GarbageCollector() = default;

	bool addToRoot(Object* object) { return rootSet.add(object); } // TODO: check for uniqueness
	bool removeFromRoot(Object* object)
	{
		for (int i = 0; i < rootSet.length(); ++i)
		{
			if (rootSet[i] == object)
			{
				rootSet.remove(i);
				return true;
			}
		}
	}

private:

	Array<Object*> rootSet;

};
