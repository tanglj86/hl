/* Auto-generated mq_timedsend proxy file -- do not edit */

#include <nuttx/config.h>
#include <mqueue.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_MQUEUE)

int mq_timedsend(mqd_t parm1, const char* parm2, size_t parm3, int parm4, const struct timespec* parm5)
{
  return (int)sys_call5((unsigned int)SYS_mq_timedsend, (uintptr_t)parm1, (uintptr_t)parm2, (uintptr_t)parm3, (uintptr_t)parm4, (uintptr_t)parm5);
}

#endif /* !defined(CONFIG_DISABLE_MQUEUE) */
