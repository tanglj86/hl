/* Auto-generated sem_wait proxy file -- do not edit */

#include <nuttx/config.h>
#include <semaphore.h>
#include <syscall.h>

int sem_wait(FAR sem_t* parm1)
{
  return (int)sys_call1((unsigned int)SYS_sem_wait, (uintptr_t)parm1);
}

