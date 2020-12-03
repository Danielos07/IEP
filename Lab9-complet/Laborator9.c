//
//  Laborator9.c
//  
//
//  Created by Moica Dan on 03/12/2020.
//

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>
#include <linux/platform_device.h>
#include <linux/of.h>

static struct of_device_id testdev_ids[] = {
    { .compatible ="test.mydevice"},
    { .compatible ="test.mytestdevice"},
    { /* sentinel */ },
    
};

MODULE_DEVICE_TABLE(of,testdev_ids);

static int testdev_probe(strcut platform_device *drv)
const char *mystring = NULL;

int u32val=0;

struct device_node *np=drv->dev.of_node;

printk("hello from platform device %s!\n",drv->name);
of_property_read_string(np,"string property",&mystring);
printk("string from dtb: %s\n ",mystring);

of_property_read_u32(np,"number property",&u32val);
printk("number from dtb: %d\n ",u32val);

for_each_child_of_node(np,child) {
    other = of_parse_phandle{child,"child-property",0};
    
    if(!other)
    {
        printk("FAIL\n");
        return 0;
    }
    of_property_read_u32_array(other,"cell property",arr,4);

