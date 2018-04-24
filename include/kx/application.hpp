#ifndef KX_APPLICATION_HPP_INCLUDED
#   define KX_APPLICATION_HPP_INCLUDED

namespace kx
{
    class application
    {
    public: // types
        typedef application     class_type;
    public:
        application(int argc, char ** argv);
        virtual ~application();
    };
} // namespace kx
#endif // KX_APPLICATION_HPP_INCLUDED
