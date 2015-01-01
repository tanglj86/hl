/* Auto-generated mq_close proxy file -- do not edit */

#include <nuttx/config.h>
#include <mqueue.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_MQUEUE)

int mq_close(mqd_t parm1)
{
  return (int)sys_call1((unsigned int)SYS_mq_close, (uintptr_t)parm1);
}

#endif /* !defined(CONFIG_DISABLE_MQUEUE) */
