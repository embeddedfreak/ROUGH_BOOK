#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/cdev.h>
#include <linux/fs.h>

#include <linux/device.h>
#include <linux/uaccess.h>

char buffer[100];
dev_t dev_num;

static struct cdev cdev_num;

static struct class *glad_class;
static struct device *glad_device;

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

static ssize_t my_write(struct file *file,
		const char __user *buf,
		size_t len,
		loff_t *off)
{
	copy_from_user(buffer, buf, len);

	printk(KERN_INFO "Data from user: %s\n", buffer);

	return len;
}

static ssize_t my_read(struct file *file,
                       char __user *buf,
                       size_t len,
                       loff_t *off)
{
    int size = strlen(buffer);

    if (*off >= size)
        return 0;

    copy_to_user(buf, buffer, size);
    *off += size;

    return size;
}

static const struct file_operations fops = {
	.owner = THIS_MODULE,
	.open = my_open,
	.release = my_release,
	.read    = my_read,
	.write   = my_write,
};

static int __init my_init(void)
{
	alloc_chrdev_region(&dev_num, 0, 1, "glad_driver");

	cdev_init(&cdev_num, &fops);

	cdev_add(&cdev_num, dev_num, 1);

	glad_class = class_create("glad_class");

	glad_device = device_create(glad_class, NULL, dev_num, NULL, "glad_device");

	printk(KERN_INFO "Glad Driver Loaded\n");

	return 0;
}

static void __exit my_exit(void)
{
	device_destroy(glad_class, dev_num);
	class_destroy(glad_class);

	cdev_del(&cdev_num);
	unregister_chrdev_region(dev_num, 1);

}


module_init(my_init);
module_exit(my_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Gladson");
MODULE_DESCRIPTION("Gladson's trial on driver");
