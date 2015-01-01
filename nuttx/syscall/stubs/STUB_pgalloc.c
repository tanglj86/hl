/* Auto-generated pgalloc stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <nuttx/arch.h>

#if defined(CONFIG_BUILD_KERNEL)

uintptr_t STUB_pgalloc(int nbr, uintptr_t parm1, uintptr_t parm2)
{
  return (uintptr_t)pgalloc((uintptr_t)parm1, (unsigned int)parm2);
}

#endif /* defined(CONFIG_BUILD_KERNEL) */
