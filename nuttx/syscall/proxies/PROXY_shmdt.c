/* Auto-generated shmdt proxy file -- do not edit */

#include <nuttx/config.h>
#include <sys/shm.h>
#include <syscall.h>

#if defined(CONFIG_MM_SHM)

int shmdt(FAR const void * parm1)
{
  return (int)sys_call1((unsigned int)SYS_shmdt, (uintptr_t)parm1);
}

#endif /* defined(CONFIG_MM_SHM) */
