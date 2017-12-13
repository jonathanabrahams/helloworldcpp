#include "Object.h"

namespace Bank
{
    Object::Object( ) : id_( boost::uuids::random_generator()() ) { };
    Object::Object( uuid id ) : id_( id ) { };
    uuid Object::getId( ) const
    {
        return id_;
    };
}