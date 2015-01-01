/* Auto-generated mq_timedsend stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <mqueue.h>

#if !defined(CONFIG_DISABLE_MQUEUE)

uintptr_t STUB_mq_timedsend(int nbr, uintptr_t parm1, uintptr_t parm2, uintptr_t parm3, uintptr_t parm4, uintptr_t parm5)
{
  return (uintptr_t)mq_timedsend((mqd_t)parm1, (const char*)parm2, (size_t)parm3, (int)parm4, (const struct timespec*)parm5);
}

#endif /* !defined(CONFIG_DISABLE_MQUEUE) */
