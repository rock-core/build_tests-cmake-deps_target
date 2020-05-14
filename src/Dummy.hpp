#ifndef _DUMMYPROJECT_DUMMY_HPP_
#define _DUMMYPROJECT_DUMMY_HPP_

#include <deps_target_dependency/Dummy.hpp>

namespace deps_target
{
    class DummyClass
    {
        // We want this to be in the header, to later check if the pkg-config
        // export worked
        deps_target_dependency::DummyClass mDummy;

    public: 
        /**
         * Print a welcome to stdout
         * \return nothing
         */
        void welcome();
    };

} // end namespace deps_target

#endif // _DUMMYPROJECT_DUMMY_HPP_
