#include "kx/application.hpp"

#include <iostream>
namespace kx
{
    application::application (int argc, char ** argv)
    {
        std::cout << "Created application" << " with " << argc << " argument(s):" << std::endl;
        for (int i = 0; i < argc; i++)
        {
            std::cout << "  " << i << ": " << argv[i] << std::endl;
        }
    }

    application::~application()
    {
        std::cout << "Destroyed application" << std::endl;
    }
} // namespace kx
