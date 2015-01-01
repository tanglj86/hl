/* Auto-generated sem_trywait proxy file -- do not edit */

#include <nuttx/config.h>
#include <semaphore.h>
#include <syscall.h>

int sem_trywait(FAR sem_t* parm1)
{
  return (int)sys_call1((unsigned int)SYS_sem_trywait, (uintptr_t)parm1);
}

