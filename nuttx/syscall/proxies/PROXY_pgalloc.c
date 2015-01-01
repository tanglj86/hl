/* Auto-generated pgalloc proxy file -- do not edit */

#include <nuttx/config.h>
#include <nuttx/arch.h>
#include <syscall.h>

#if defined(CONFIG_BUILD_KERNEL)

uintptr_t pgalloc(uintptr_t parm1, unsigned int parm2)
{
  return (uintptr_t)sys_call2((unsigned int)SYS_pgalloc, (uintptr_t)parm1, (uintptr_t)parm2);
}

#endif /* defined(CONFIG_BUILD_KERNEL) */
