#ifndef OBJECT_H
#define OBJECT_H

#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>

using boost::uuids::uuid;

namespace Bank
{
    class Object
    {

        public:
            Object( );
            uuid getId() const;

        private:
            uuid id_;

    };
}

#endif