/* Auto-generated sem_open proxy file -- do not edit */

#include <nuttx/config.h>
#include <stdarg.h>
#include <semaphore.h>
#include <syscall.h>

#if defined(CONFIG_FS_NAMED_SEMAPHORES)

FAR sem_t* sem_open(FAR const char* parm1, int parm2, ...)
{
  va_list ap;
  uintptr_t parm3;
  uintptr_t parm4;
  uintptr_t parm5;
  uintptr_t parm6;

  va_start(ap, parm2);
  parm3 = va_arg(ap, uintptr_t);
  parm4 = va_arg(ap, uintptr_t);
  parm5 = va_arg(ap, uintptr_t);
  parm6 = va_arg(ap, uintptr_t);
  va_end(ap);

  return (FAR sem_t*)sys_call6((unsigned int)SYS_sem_open, (uintptr_t)parm1, (uintptr_t)parm2, (uintptr_t)parm3, (uintptr_t)parm4, (uintptr_t)parm5, (uintptr_t)parm6);
}

#endif /* defined(CONFIG_FS_NAMED_SEMAPHORES) */
