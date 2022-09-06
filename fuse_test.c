#define _GNU_SOURCE
#include <unistd.h>

#include <sys/syscall.h>
#include <linux/fs.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>


int main() {
  const char* src_path = "/dev/fuse";
  unsigned int flags = O_RDWR;
  printf("RET: %ld\n", syscall(SYS_openat, AT_FDCWD, src_path, flags));
}
