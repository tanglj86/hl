/* Auto-generated mq_open stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <mqueue.h>

#if !defined(CONFIG_DISABLE_MQUEUE)

uintptr_t STUB_mq_open(int nbr, uintptr_t parm1, uintptr_t parm2, uintptr_t parm3, uintptr_t parm4, uintptr_t parm5, uintptr_t parm6)
{
  return (uintptr_t)mq_open((const char*)parm1, (int)parm2, parm3, parm4, parm5, parm6);
}

#endif /* !defined(CONFIG_DISABLE_MQUEUE) */
