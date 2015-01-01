/* Auto-generated sem_timedwait proxy file -- do not edit */

#include <nuttx/config.h>
#include <semaphore.h>
#include <syscall.h>

int sem_timedwait(FAR sem_t* parm1, FAR const struct timespec * parm2)
{
  return (int)sys_call2((unsigned int)SYS_sem_timedwait, (uintptr_t)parm1, (uintptr_t)parm2);
}

