/* Auto-generated vfork proxy file -- do not edit */

#include <nuttx/config.h>
#include <unistd.h>
#include <syscall.h>

#if defined(CONFIG_ARCH_HAVE_VFORK)

pid_t vfork(void)
{
  return (pid_t)sys_call0((unsigned int)SYS_vfork);
}

#endif /* defined(CONFIG_ARCH_HAVE_VFORK) */
