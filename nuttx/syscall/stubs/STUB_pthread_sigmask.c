/* Auto-generated pthread_sigmask stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <pthread.h>

#if !defined(CONFIG_DISABLE_SIGNALS) && !defined(CONFIG_DISABLE_PTHREAD)

uintptr_t STUB_pthread_sigmask(int nbr, uintptr_t parm1, uintptr_t parm2, uintptr_t parm3)
{
  return (uintptr_t)pthread_sigmask((int)parm1, (FAR const sigset_t*)parm2, (FAR sigset_t*)parm3);
}

#endif /* !defined(CONFIG_DISABLE_SIGNALS) && !defined(CONFIG_DISABLE_PTHREAD) */
