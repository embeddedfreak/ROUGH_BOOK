#include <linux/module.h>
#include <linux/kernel.h>

static int __init my_init(void)
{
	printk(KERN_INFO "Gladson's driver loaded\n");
	return 0;
}

static void __exit my_exit(void)
{
	printk(KERN_INFO "Gladson's driver unloaded\n");
}

module_init(my_init);
module_exit(my_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Gladson");
MODULE_DESCRIPTION("Gladson's own driver");
