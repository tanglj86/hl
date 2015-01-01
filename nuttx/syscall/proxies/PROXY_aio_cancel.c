/* Auto-generated aio_cancel proxy file -- do not edit */

#include <nuttx/config.h>
#include <aio.h>
#include <syscall.h>

#if defined(CONFIG_FS_AIO)

int aio_cancel(int parm1, FAR struct aiocb * parm2)
{
  return (int)sys_call2((unsigned int)SYS_aio_cancel, (uintptr_t)parm1, (uintptr_t)parm2);
}

#endif /* defined(CONFIG_FS_AIO) */
