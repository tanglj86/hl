/* Auto-generated sigpending stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <signal.h>

#if !defined(CONFIG_DISABLE_SIGNALS)

uintptr_t STUB_sigpending(int nbr, uintptr_t parm1)
{
  return (uintptr_t)sigpending((FAR sigset_t*)parm1);
}

#endif /* !defined(CONFIG_DISABLE_SIGNALS) */
