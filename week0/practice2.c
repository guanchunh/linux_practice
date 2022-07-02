#include <assert.h>
int main()
{
    assert(0. == -0.);
    assert(1./0. == 1./-0.);
}