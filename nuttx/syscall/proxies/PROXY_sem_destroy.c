/* Auto-generated sem_destroy proxy file -- do not edit */

#include <nuttx/config.h>
#include <semaphore.h>
#include <syscall.h>

int sem_destroy(FAR sem_t* parm1)
{
  return (int)sys_call1((unsigned int)SYS_sem_destroy, (uintptr_t)parm1);
}

