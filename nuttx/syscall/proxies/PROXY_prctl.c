/* Auto-generated prctl proxy file -- do not edit */

#include <nuttx/config.h>
#include <stdarg.h>
#include <sys/prctl.h>
#include <syscall.h>

#if CONFIG_TASK_NAME_SIZE > 0

int prctl(int parm1, ...)
{
  va_list ap;
  uintptr_t parm2;
  uintptr_t parm3;
  uintptr_t parm4;
  uintptr_t parm5;
  uintptr_t parm6;

  va_start(ap, parm1);
  parm2 = va_arg(ap, uintptr_t);
  parm3 = va_arg(ap, uintptr_t);
  parm4 = va_arg(ap, uintptr_t);
  parm5 = va_arg(ap, uintptr_t);
  parm6 = va_arg(ap, uintptr_t);
  va_end(ap);

  return (int)sys_call6((unsigned int)SYS_prctl, (uintptr_t)parm1, (uintptr_t)parm2, (uintptr_t)parm3, (uintptr_t)parm4, (uintptr_t)parm5, (uintptr_t)parm6);
}

#endif /* CONFIG_TASK_NAME_SIZE > 0 */
