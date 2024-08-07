/*
 * ESPRESSIF MIT License
 *
 * Copyright (c) 2020 <ESPRESSIF SYSTEMS (SHANGHAI) CO., LTD>
 *
 * Permission is hereby granted for use on all ESPRESSIF SYSTEMS products, in which case,
 * it is free of charge, to any person obtaining a copy of this software and associated
 * documentation files (the "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the Software is furnished
 * to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all copies or
 * substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 */

#include <string.h>
#include "esp_log.h"
#include "board.h"

#include "pcm5102.h"

static const char *TAG = "PCM5102";

static bool codec_init_flag;

audio_hal_func_t AUDIO_CODEC_PCM5102_DEFAULT_HANDLE = {
    .audio_codec_initialize = pcm5102_init,
    .audio_codec_deinitialize = pcm5102_deinit,
    .audio_codec_ctrl = pcm5102_ctrl_state,
    .audio_codec_config_iface = pcm5102_config_i2s,
    .audio_codec_set_mute = pcm5102_set_voice_mute,
    .audio_codec_set_volume = pcm5102_set_voice_volume,
    .audio_codec_get_volume = pcm5102_get_voice_volume,
};

bool pcm5102_initialized()
{
    return codec_init_flag;
}

esp_err_t pcm5102_init(audio_hal_codec_config_t *cfg)
{
    ESP_LOGI(TAG, "pcm5102 init");
    return ESP_OK;
}

esp_err_t pcm5102_deinit(void)
{
    return ESP_OK;
}

esp_err_t pcm5102_ctrl_state(audio_hal_codec_mode_t mode, audio_hal_ctrl_t ctrl_state)
{
    return ESP_OK;
}

esp_err_t pcm5102_config_i2s(audio_hal_codec_mode_t mode, audio_hal_codec_i2s_iface_t *iface)
{
    return ESP_OK;
}

esp_err_t pcm5102_set_voice_mute(bool mute)
{
    return ESP_OK;
}

esp_err_t pcm5102_set_voice_volume(int volume)
{
    return ESP_OK;
}

esp_err_t pcm5102_get_voice_volume(int *volume)
{
    return ESP_OK;
}
