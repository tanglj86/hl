/* Auto-generated sendfile stub file -- do not edit */

#include <nuttx/config.h>
#include <stdint.h>
#include <sys/sendfile.h>

#if CONFIG_NFILE_DESCRIPTORS > 0 && defined(CONFIG_NET_SENDFILE)

uintptr_t STUB_sendfile(int nbr, uintptr_t parm1, uintptr_t parm2, uintptr_t parm3, uintptr_t parm4)
{
  return (uintptr_t)sendfile((int)parm1, (int)parm2, (FAR off_t*)parm3, (size_t)parm4);
}

#endif /* CONFIG_NFILE_DESCRIPTORS > 0 && defined(CONFIG_NET_SENDFILE) */
