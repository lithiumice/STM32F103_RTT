#include <rtthread.h>
#include <rtdevice.h>
#include <board.h>
#include "oled.h"
#include "my_def.h"

#define DBG_TAG "main"
#define DBG_LVL DBG_LOG
#include <rtdbg.h>
#define LED0_PIN GET_PIN(C, 13)

int main(void)
{
    rt_thread_mdelay(300);
    rt_pin_mode(LED0_PIN, PIN_MODE_OUTPUT);
    OLED_Init();
    OLED_ShowString(0, 0, (uint8 *)"hello");

    while (1)
    {
        LOG_D("Hello RT-Thread!");
        rt_pin_write(LED0_PIN, PIN_HIGH);
        rt_thread_mdelay(500);
        rt_pin_write(LED0_PIN, PIN_LOW);
        rt_thread_mdelay(500);
    }

    return RT_EOK;
}
