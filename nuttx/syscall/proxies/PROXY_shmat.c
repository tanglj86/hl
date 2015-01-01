/* Auto-generated shmat proxy file -- do not edit */

#include <nuttx/config.h>
#include <sys/shm.h>
#include <syscall.h>

#if defined(CONFIG_MM_SHM)

FAR void * shmat(int parm1, FAR const void * parm2, int parm3)
{
  return (FAR void *)sys_call3((unsigned int)SYS_shmat, (uintptr_t)parm1, (uintptr_t)parm2, (uintptr_t)parm3);
}

#endif /* defined(CONFIG_MM_SHM) */
