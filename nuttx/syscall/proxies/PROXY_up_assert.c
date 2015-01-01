/* Auto-generated up_assert proxy file -- do not edit */

#include <nuttx/config.h>
#include <assert.h>
#include <syscall.h>

void up_assert(FAR const uint8_t* parm1, int parm2)
{
  (void)sys_call2((unsigned int)SYS_up_assert, (uintptr_t)parm1, (uintptr_t)parm2);
}

