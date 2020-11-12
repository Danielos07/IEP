#include <stdio.h>
class Lock
{
public:
	explicit Lock(Mutex* pm)
		:mutexPtr(pm, unlock)
	{
		lock(mutexPtr.get());
	}
private:
	std::tr1::shared_ptr<Mutex> mutexPtr;
};
