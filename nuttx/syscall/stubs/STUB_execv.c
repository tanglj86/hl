/* Auto-generated execv stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <unistd.h>

#if !defined(CONFIG_BINFMT_DISABLE) && defined(CONFIG_LIBC_EXECFUNCS)

uintptr_t STUB_execv(int nbr, uintptr_t parm1, uintptr_t parm2)
{
  return (uintptr_t)execv((FAR const char *)parm1, (FAR char *const *)parm2);
}

#endif /* !defined(CONFIG_BINFMT_DISABLE) && defined(CONFIG_LIBC_EXECFUNCS) */
