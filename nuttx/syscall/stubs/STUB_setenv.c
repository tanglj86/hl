/* Auto-generated setenv stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <stdlib.h>

#if !defined(CONFIG_DISABLE_ENVIRON)

uintptr_t STUB_setenv(int nbr, uintptr_t parm1, uintptr_t parm2, uintptr_t parm3)
{
  return (uintptr_t)setenv((const char*)parm1, (const char*)parm2, (int)parm3);
}

#endif /* !defined(CONFIG_DISABLE_ENVIRON) */
