/* Auto-generated unsetenv stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <stdlib.h>

#if !defined(CONFIG_DISABLE_ENVIRON)

uintptr_t STUB_unsetenv(int nbr, uintptr_t parm1)
{
  return (uintptr_t)unsetenv((const char*)parm1);
}

#endif /* !defined(CONFIG_DISABLE_ENVIRON) */
