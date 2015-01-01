/* Auto-generated sigtimedwait stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <signal.h>

#if !defined(CONFIG_DISABLE_SIGNALS)

uintptr_t STUB_sigtimedwait(int nbr, uintptr_t parm1, uintptr_t parm2, uintptr_t parm3)
{
  return (uintptr_t)sigtimedwait((FAR const sigset_t*)parm1, (FAR struct siginfo*)parm2, (FAR const struct timespec*)parm3);
}

#endif /* !defined(CONFIG_DISABLE_SIGNALS) */
