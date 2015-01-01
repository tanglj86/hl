/* Auto-generated select proxy file -- do not edit */

#include <nuttx/config.h>
#include <sys/select.h>
#include <syscall.h>

#if !defined(CONFIG_DISABLE_POLL) && (CONFIG_NSOCKET_DESCRIPTORS > 0 || CONFIG_NFILE_DESCRIPTORS > 0)

int select(int parm1, FAR fd_set* parm2, FAR fd_set* parm3, FAR fd_set* parm4, FAR struct timeval* parm5)
{
  return (int)sys_call5((unsigned int)SYS_select, (uintptr_t)parm1, (uintptr_t)parm2, (uintptr_t)parm3, (uintptr_t)parm4, (uintptr_t)parm5);
}

#endif /* !defined(CONFIG_DISABLE_POLL) && (CONFIG_NSOCKET_DESCRIPTORS > 0 || CONFIG_NFILE_DESCRIPTORS > 0) */
