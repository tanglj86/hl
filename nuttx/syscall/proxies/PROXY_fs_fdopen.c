/* Auto-generated fs_fdopen proxy file -- do not edit */

#include <nuttx/config.h>
#include <nuttx/fs/fs.h>
#include <syscall.h>

#if CONFIG_NFILE_DESCRIPTORS > 0 && CONFIG_NFILE_STREAMS > 0

FAR struct file_struct* fs_fdopen(int parm1, int parm2, FAR struct tcb_s* parm3)
{
  return (FAR struct file_struct*)sys_call3((unsigned int)SYS_fs_fdopen, (uintptr_t)parm1, (uintptr_t)parm2, (uintptr_t)parm3);
}

#endif /* CONFIG_NFILE_DESCRIPTORS > 0 && CONFIG_NFILE_STREAMS > 0 */
