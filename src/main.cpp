#include "bn_core.h"
#include "bn_keypad.h"
#include "bn_bg_palettes.h"
#include "bn_sprite_text_generator.h"

#include "bn_sprite_animate_actions.h"

#include "bn_sprite_items_old_freddy.h"
#include "bn_sprite_items_freddy64.h"
#include "bn_sprite_items_freddy.h"


namespace {
    /**
    * wait this is good for free sprite movement but what about tiled sprite movement?
    */
    void detect_input(bn::sprite_ptr sprite) {
        if (bn::keypad::left_held()) {
            sprite.set_x(sprite.x() - 1);
        }
        if (bn::keypad::right_held()) {
            sprite.set_x(sprite.x() + 1);
        }
        if (bn::keypad::up_held()) {
            sprite.set_y(sprite.y() - 1);
        }
        if (bn::keypad::down_held()) {
            sprite.set_y(sprite.y() + 1);
        }
    }

    bool freddy_eyes_change(bn::sprite_ptr freddy64, bool possessed) {
        if (bn::keypad::a_pressed()) {
            freddy64.set_tiles(bn::sprite_items::freddy64.tiles_item().create_tiles(possessed));
            possessed = !possessed;
        }
        return possessed;
    }

    void freddy_sprite_test() {

        // original Minigame Investigator sprite
        bn::sprite_ptr old_freddy_sprite = bn::sprite_items::old_freddy.create_sprite(-16,0);

        // re-imagined Freddy sprite, 16x32 - way too small; would be a cool overworld sprite if I was porting FNaF World
        bn::sprite_ptr freddy_sprite = bn::sprite_items::freddy.create_sprite(0,1);

        // re-imagined Freddy sprite, 32x64 - be just about the right size
        bn::sprite_ptr freddy64_sprite = bn::sprite_items::freddy64.create_sprite(20,-14);

        bool possessed = true;
        while(! bn::keypad::start_pressed())
        {
            // walk
            detect_input(freddy64_sprite);
            possessed = freddy_eyes_change(freddy64_sprite, possessed); // there's better ways to do this but this is just a sloppy test
            // update frame
            bn::core::update();
        }
    }
}

int main()
{
    // Initializaton
    // do things AFTER this
    bn::core::init();

    //set the transparent background to something
    bn::bg_palettes::set_transparent_color(bn::color(16, 16, 10));

    while(true)
    {
        freddy_sprite_test();
        bn::core::update();
    }
}
