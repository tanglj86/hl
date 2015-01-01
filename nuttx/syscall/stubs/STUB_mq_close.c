/* Auto-generated mq_close stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <mqueue.h>

#if !defined(CONFIG_DISABLE_MQUEUE)

uintptr_t STUB_mq_close(int nbr, uintptr_t parm1)
{
  return (uintptr_t)mq_close((mqd_t)parm1);
}

#endif /* !defined(CONFIG_DISABLE_MQUEUE) */
