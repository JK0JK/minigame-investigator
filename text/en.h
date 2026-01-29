#pragma once
namespace text {
    // menu
        inline constexpr const char* title = "Minigame Investigator";
        inline constexpr const char* start = "Start";
        inline constexpr const char* quit  = "Quit";

    // night 1, inciting incident
        inline constexpr const char* n1  = "Night 1";

        // animatronic conversation
            inline constexpr const char* n1_anim_convo1  = "I know he's still out there."; // we could use italics on "know" or we could use an H_BLANK trick on the whole textbox
            inline constexpr const char* n1_anim_convo2  = "I'm looking! It's not easy, you know?";
            inline constexpr const char* n1_anim_convo3  = "Hey! Wh-what are you-?!";
            
            inline constexpr const char* n1_zap  = "ZAP!!";  // italics // do we even need this?

            inline constexpr const char* n1_anim_convo4  = "That's it, recess is over.";
            inline constexpr const char* n1_anim_convo5  = "And you, get out of here before I call the police.";

        inline constexpr const char* n1_thought1 = "So I decided to wait outside.";

        // real conversation
            inline constexpr const char* n1_real_convo1  = "Why are you still here?";
            inline constexpr const char* n1_real_convo2  = "";

}
