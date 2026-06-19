#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/cdev.h>
#include <linux/fs.h>

dev_t dev_num;

static struct cdev cdev_num;


static int my_open(struct inode *inode, struct file *file)
{
        printk(KERN_INFO "Glad Driver: Open\n");
	
	return 0;
}

static int my_release(struct inode *inode, struct file *file)
{       
        printk(KERN_INFO "Glad Driver: Release\n");

        return 0;
}

static const struct file_operations fops = {
.owner = THIS_MODULE,
.open = my_open,
.release = my_release,
};

static int __init my_init(void)
{
	alloc_chrdev_region(&dev_num, 0, 1, "glad_driver");

	cdev_init(&cdev_num, &fops);

	cdev_add(&cdev_num, dev_num, 1);

	printk(KERN_INFO "Glad Driver Loaded\n");

	return 0;
}

static void __init my_exit(void)
{
	cdev_del(&cdev_num);
	unregister_chrdev_region(dev_num, 1);

}


module_init(my_init);
module_exit(my_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Gladson");
MODULE_DESCRIPTION("Gladson's trial on driver");
