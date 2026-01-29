#pragma once
namespace text {
    // metadata about the translation: replace this!
    constexpr bn::string_view translation_language = "English"; // the language you're translating
    constexpr bn::string_view translation_credits[] = { "" };   // your name here!

    // menu
        inline constexpr bn::string_view title = "Minigame Investigator";
        inline constexpr bn::string_view start = "Start";
        inline constexpr bn::string_view quit  = "Quit";

    // night 1, inciting incident
        inline constexpr bn::string_view n1  = "Night 1";

        // animatronic conversation
            inline constexpr bn::string_view n1_anim_convo1  = "I know he's still out there."; // we could use italics on "know" or we could use an H_BLANK trick on the whole textbox
            inline constexpr bn::string_view n1_anim_convo2  = "I'm looking! It's not easy, you know?";
            inline constexpr bn::string_view n1_anim_convo3  = "Hey! Wh-what are you-?!";
            
            inline constexpr bn::string_view n1_zap  = "ZAP!!";  // italics // do we even need this?

            inline constexpr bn::string_view n1_anim_convo4  = "That's it, recess is over.";
            inline constexpr bn::string_view n1_anim_convo5  = "And you, get out of here before I call the police.";

        inline constexpr bn::string_view n1_thought1 = "So I decided to wait outside.";

        // real conversation
            inline constexpr bn::string_view n1_real_convo1  = "Why are you still here?";
            inline constexpr bn::string_view n1_real_convo2  = "";

}
