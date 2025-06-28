#pragma once

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

private:

	Object* outer;
};

