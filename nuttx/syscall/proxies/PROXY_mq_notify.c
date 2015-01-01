/* Auto-generated mq_notify proxy file -- do not edit */

#include <nuttx/config.h>
#include <mqueue.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_SIGNALS) && !defined(CONFIG_DISABLE_MQUEUE)

int mq_notify(mqd_t parm1, const struct sigevent* parm2)
{
  return (int)sys_call2((unsigned int)SYS_mq_notify, (uintptr_t)parm1, (uintptr_t)parm2);
}

#endif /* !defined(CONFIG_DISABLE_SIGNALS) && !defined(CONFIG_DISABLE_MQUEUE) */
