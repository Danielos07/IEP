#include <stdio.h>
class Font
{
public:
    explicit Font(FontHandle fh):
    f(fh)
    {}

    ~Font(){releaseFont(f);}

    // explicitly convert Font to FontHandle
    operator FontHandle() const
    {return f;}
 
private:
    FontHandle f;
};

