/* Auto-generated fs_fdopen stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <nuttx/fs/fs.h>

#if CONFIG_NFILE_DESCRIPTORS > 0 && CONFIG_NFILE_STREAMS > 0

uintptr_t STUB_fs_fdopen(int nbr, uintptr_t parm1, uintptr_t parm2, uintptr_t parm3)
{
  return (uintptr_t)fs_fdopen((int)parm1, (int)parm2, (FAR struct tcb_s*)parm3);
}

#endif /* CONFIG_NFILE_DESCRIPTORS > 0 && CONFIG_NFILE_STREAMS > 0 */
