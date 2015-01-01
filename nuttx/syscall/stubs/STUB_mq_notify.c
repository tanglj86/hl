/* Auto-generated mq_notify stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <mqueue.h>

#if !defined(CONFIG_DISABLE_SIGNALS) && !defined(CONFIG_DISABLE_MQUEUE)

uintptr_t STUB_mq_notify(int nbr, uintptr_t parm1, uintptr_t parm2)
{
  return (uintptr_t)mq_notify((mqd_t)parm1, (const struct sigevent*)parm2);
}

#endif /* !defined(CONFIG_DISABLE_SIGNALS) && !defined(CONFIG_DISABLE_MQUEUE) */
