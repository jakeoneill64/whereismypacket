
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/printk.h>


int init_module(void) {
    printk("eep eep");
    return 0;
}

void cleanup_module(void) {

}


