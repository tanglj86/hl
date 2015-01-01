/* Auto-generated sendfile proxy file -- do not edit */

#include <nuttx/config.h>
#include <sys/sendfile.h>
#include <syscall.h>

#if CONFIG_NFILE_DESCRIPTORS > 0 && defined(CONFIG_NET_SENDFILE)

ssize_t sendfile(int parm1, int parm2, FAR off_t* parm3, size_t parm4)
{
  return (ssize_t)sys_call4((unsigned int)SYS_sendfile, (uintptr_t)parm1, (uintptr_t)parm2, (uintptr_t)parm3, (uintptr_t)parm4);
}

#endif /* CONFIG_NFILE_DESCRIPTORS > 0 && defined(CONFIG_NET_SENDFILE) */
