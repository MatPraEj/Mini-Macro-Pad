// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_RSFT,   KC_UP,   KC_MUTE,
        KC_RCTL,   KC_LEFT,   KC_DOWN,   KC_RIGHT
    )
};

#if defined (ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) } //set functions of rotating encoder
}; 
#endif

#if defined (OLED_ENABLE)

// Animation parameters
#define FRAME_DURATION 333 // how long each frame is in ms

// Animation variables
uint32_t timer = 0;
uint8_t current_frame = 0;

// Render animation
static void render_animation(void) {
    static const char epd_bitmap_frame_0_delay_0 [ ] PROGMEM = {
        // Byte array for image
    };

    static const char epd_bitmap_frame_1_delay_0 [ ] PROGMEM = {
        // Byte array for image
    };

    // add more const... to add more frames
    const char* epd_bitmap_allArray[2] = {
        epd_bitmap_frame_0_delay_0,
        epd_bitmap_frame_1_delay_0
    };

    // Frame sizes array
    uint16_t frame_sizes[2] = {
        sizeof(epd_bitmap_frame_0_delay_0),
        sizeof(epd_bitmap_frame_1_delay_0)
    };

    // Run animation
    if (timer_elapsed(timer) > FRAME_DURATION) {
        // Set timer to updated time
        timer = timer_read();
        
        // Increment frame
        current_frame = (current_frame + 1) % (sizeof(epd_bitmap_allArray) / sizeof(epd_bitmap_allArray[0]));

        // Draw frame to OLED
        oled_write_raw_P(epd_bitmap_allArray[current_frame], frame_sizes[current_frame]); 
    }
}


// Draw to OLED
bool oled_task_user() {
    render_animation();

    return false;
}
#endif
