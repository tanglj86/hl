/* Auto-generated mq_unlink stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <mqueue.h>

#if !defined(CONFIG_DISABLE_MQUEUE)

uintptr_t STUB_mq_unlink(int nbr, uintptr_t parm1)
{
  return (uintptr_t)mq_unlink((const char*)parm1);
}

#endif /* !defined(CONFIG_DISABLE_MQUEUE) */
