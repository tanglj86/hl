/* Auto-generated shmctl proxy file -- do not edit */

#include <nuttx/config.h>
#include <sys/shm.h>
#include <syscall.h>

#if defined(CONFIG_MM_SHM)

int shmctl(int parm1, int parm2, FAR struct shmid_ds * parm3)
{
  return (int)sys_call3((unsigned int)SYS_shmctl, (uintptr_t)parm1, (uintptr_t)parm2, (uintptr_t)parm3);
}

#endif /* defined(CONFIG_MM_SHM) */
