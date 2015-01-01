/* Auto-generated putenv stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <stdlib.h>

#if !defined(CONFIG_DISABLE_ENVIRON)

uintptr_t STUB_putenv(int nbr, uintptr_t parm1)
{
  return (uintptr_t)putenv((FAR const char*)parm1);
}

#endif /* !defined(CONFIG_DISABLE_ENVIRON) */
