#pragma once

#include "Object.h"
#include "GarbageCollectorTypes.h"

namespace GC
{
	bool isValid(const Object* object)
	{
		if (object == nullptr)
		{
			return false;
		}

		if (object->getFlags() & GC::flags::pendingKill)
		{
			return false;
		}

		return true;
	}
}