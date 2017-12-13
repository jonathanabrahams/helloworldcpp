#include "Object.h"

namespace Bank
{
    Object::Object( ) : id_( boost::uuids::random_generator()() ) { };
    uuid Object::getId( ) const
    {
        return id_;
    };
}