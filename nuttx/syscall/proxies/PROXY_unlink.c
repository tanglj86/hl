/* Auto-generated unlink proxy file -- do not edit */

#include <nuttx/config.h>
#include <unistd.h>
#include <syscall.h>

#if CONFIG_NFILE_DESCRIPTORS > 0 && !defined(CONFIG_DISABLE_MOUNTPOINT)

int unlink(FAR const char* parm1)
{
  return (int)sys_call1((unsigned int)SYS_unlink, (uintptr_t)parm1);
}

#endif /* CONFIG_NFILE_DESCRIPTORS > 0 && !defined(CONFIG_DISABLE_MOUNTPOINT) */
