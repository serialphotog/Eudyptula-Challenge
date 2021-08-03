#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

int my_init(void)
{
    pr_info("Hello, World!\n");
    return 0;
}

void my_exit(void)
{
    pr_info("Goodbye, World\n");
}

module_init(my_init);
module_exit(my_exit);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Simple kernel module");
MODULE_AUTHOR("Adam Thompson - adam@hackeradam.com");
MODULE_VERSION("1.0");
