/* Auto-generated mq_unlink proxy file -- do not edit */

#include <nuttx/config.h>
#include <mqueue.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_MQUEUE)

int mq_unlink(const char* parm1)
{
  return (int)sys_call1((unsigned int)SYS_mq_unlink, (uintptr_t)parm1);
}

#endif /* !defined(CONFIG_DISABLE_MQUEUE) */
