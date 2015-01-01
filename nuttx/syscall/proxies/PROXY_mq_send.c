/* Auto-generated mq_send proxy file -- do not edit */

#include <nuttx/config.h>
#include <mqueue.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_MQUEUE)

int mq_send(mqd_t parm1, const void* parm2, size_t parm3, int parm4)
{
  return (int)sys_call4((unsigned int)SYS_mq_send, (uintptr_t)parm1, (uintptr_t)parm2, (uintptr_t)parm3, (uintptr_t)parm4);
}

#endif /* !defined(CONFIG_DISABLE_MQUEUE) */
