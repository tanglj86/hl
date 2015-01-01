/* Auto-generated sem_unlink proxy file -- do not edit */

#include <nuttx/config.h>
#include <semaphore.h>
#include <syscall.h>

#if defined(CONFIG_FS_NAMED_SEMAPHORES)

int sem_unlink(FAR const char* parm1)
{
  return (int)sys_call1((unsigned int)SYS_sem_unlink, (uintptr_t)parm1);
}

#endif /* defined(CONFIG_FS_NAMED_SEMAPHORES) */
