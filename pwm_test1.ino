#include <hardware/pwm.h>
//https://lipoyang.hatenablog.com/entry/2021/12/12/201432
void setup()
{
    // GP2とGP3のピン機能をPWMに設定
    gpio_set_function(2, GPIO_FUNC_PWM);
    gpio_set_function(3, GPIO_FUNC_PWM);

    // GP2(とGP3)のPWMスライスを取得
    uint slice_num = pwm_gpio_to_slice_num(2);

    // PWM周期を設定
    pwm_set_clkdiv(slice_num, 130);
    pwm_set_wrap(slice_num, 800);
    
    // チャンネルA(GP2)とチャンネルB(GP3)のPWMのHigh期間を設定
    pwm_set_chan_level(slice_num, PWM_CHAN_A, 1024);
    pwm_set_chan_level(slice_num, PWM_CHAN_B, 512);
    
    // PWM出力イネーブル
    pwm_set_enabled(slice_num, true);
}

void loop()
{
  
}