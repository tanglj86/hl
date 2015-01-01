/* Auto-generated fcntl proxy file -- do not edit */

#include <nuttx/config.h>
#include <stdarg.h>
#include <fcntl.h>
#include <syscall.h>

#if CONFIG_NFILE_DESCRIPTORS > 0

int fcntl(int parm1, int parm2, ...)
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

  return (int)sys_call6((unsigned int)SYS_fcntl, (uintptr_t)parm1, (uintptr_t)parm2, (uintptr_t)parm3, (uintptr_t)parm4, (uintptr_t)parm5, (uintptr_t)parm6);
}

#endif /* CONFIG_NFILE_DESCRIPTORS > 0 */
