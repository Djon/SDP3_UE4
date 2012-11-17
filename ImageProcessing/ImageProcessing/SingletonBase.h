#include "Object.h"


//template singleton base class
template <typename T_DERIVED>
class SingletonBase {
public:
	static T_DERIVED& GetInstance();
protected:
	SingletonBase();
private:
	SingletonBase(SingletonBase const& s);
	SingletonBase& operator = (SingletonBase const& s);
};


  //------------------------------------------------------------//
 //                       Implementation                       //
//------------------------------------------------------------//

template <typename T_DERIVED>
static T_DERIVED& SingletonBase<T_DERIVED>::GetInstance()
{
	//declared in static method,
	//else linker error
	static T_DERIVED oInstance;
	return oInstance ;
}