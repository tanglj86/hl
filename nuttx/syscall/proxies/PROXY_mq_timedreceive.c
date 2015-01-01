/* Auto-generated mq_timedreceive proxy file -- do not edit */

#include <nuttx/config.h>
#include <mqueue.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_MQUEUE)

ssize_t mq_timedreceive(mqd_t parm1, void* parm2, size_t parm3, int* parm4, const struct timespec* parm5)
{
  return (ssize_t)sys_call5((unsigned int)SYS_mq_timedreceive, (uintptr_t)parm1, (uintptr_t)parm2, (uintptr_t)parm3, (uintptr_t)parm4, (uintptr_t)parm5);
}

#endif /* !defined(CONFIG_DISABLE_MQUEUE) */
