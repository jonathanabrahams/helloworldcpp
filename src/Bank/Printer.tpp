#ifndef BANK_PRINTER_TPP
#define BANK_PRINTER_TPP

#include<iostream>

namespace Bank {

    template <class T>
    class Printer
    {
        T var_;
        public:
            Printer( const T arg );
            void stream( std::ostream& s ) const;
    };

    template <class T>
    Printer<T>::Printer( const T arg ) : var_( arg ) { } ;

    template <class T>
    void Printer<T>::stream( std::ostream& s ) const
    {
        s << var_.getName();
    };

    template <class T>
    std::ostream& operator<<( std::ostream& s, const Printer<T>& arg )
    {
        arg.stream( s );

        return s;
    };

}
#endif