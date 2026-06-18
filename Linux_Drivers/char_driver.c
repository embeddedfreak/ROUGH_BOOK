#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/cdev.h>
#include <linux/fs.h>

dev_t my_dev;

struct cdev my_cdev;

static int my_open(struct inode *inode, struct file *file)
{
	printk(KERN_INFO "Open\n");
	return 0;
}

static int my_release(struct inode *inode, struct file *file)
{
	printk(KERN_INFO "Release\n");
	return 0;
}

static const struct file_operations fops = {
	.owner = THIS_MODULE,
	.open = my_open,
	.release = my_release,
};

static int __init my_init(void)
{
	alloc_chrdev_region(&my_dev, 0, 1, "my_device");

	cdev_init(&my_cdev, &fops);	

	cdev_add(&my_cdev, my_dev, 1);

	printk(KERN_INFO "Driver is loaded\n");

	return 0;
}

static void __exit my_exit(void)
{
	cdev_del(&my_cdev);

	unregister_chrdev_region(my_dev,  1);

}


module_init(my_init);
module_exit(my_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Gladson");
MODULE_DESCRIPTION("My First Char Driver");
