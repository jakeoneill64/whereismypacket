#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jake O'Neill");
MODULE_DESCRIPTION("Determine why a packet was dropped");
MODULE_VERSION("1.0");

int __init startup(void) {
    printk("eep eep");
    return 0;
}

module_init(startup);
//cleanup_module();


