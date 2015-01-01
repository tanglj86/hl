/* Auto-generated mq_receive stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <mqueue.h>

#if !defined(CONFIG_DISABLE_MQUEUE)

uintptr_t STUB_mq_receive(int nbr, uintptr_t parm1, uintptr_t parm2, uintptr_t parm3, uintptr_t parm4)
{
  return (uintptr_t)mq_receive((mqd_t)parm1, (void*)parm2, (size_t)parm3, (int*)parm4);
}

#endif /* !defined(CONFIG_DISABLE_MQUEUE) */
