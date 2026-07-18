#ifndef CONFIG_H
#define CONFIG_H

static const char *fontstr = "JetBrainsMono NFP:size=14:fontfeatures=ss02=1:fontfeatures=zero=1";
// static const char *fontstr = "IoskeleyMono Nerd Font:style=Medium:size=15";
// static const char *fontstr = "Sarasa Mono K:style=SemiBold:size=17";
static const int bar_height = 34;
static const int buffer_scale = 1;
static const int max_title_len = 100;

/* bar position: 0 = top, 1 = bottom */
#define BAR_POSITION 1

#define TAG_COUNT 5
static const char *tag_names[TAG_COUNT] = {
    " 󱘹 ", " 󱘹 ", " 󱘹 ", " 󱘹 ", " 󱘹 "
    // "  ", "  ", "  ", "  ", "  "
    // " 1:WEB ", " 2:CODE ", " 3:MUSIC ", " 4:MISC ", " 5:CHAT "
};
static const char *tag_names_occupied[TAG_COUNT] = {
    " 󱇬 ", " 󱇬 ", " 󱇬 ", " 󱇬 ", " 󱇬 "
    // " 󰊠 ", " 󰊠 ", " 󰊠 ", " 󰊠 ", " 󰊠 "
    // " 1:WEB ", " 2:CODE ", " 3:MUSIC ", " 4:MISC ", " 5:CHAT "
};
static const char *tag_names_active[TAG_COUNT] = {
    "  ", "  ", "  ", "  ", "  "
    // " 󰮯 ", " 󰮯 ", " 󰮯 ", " 󰮯 ", " 󰮯 "
    // " 1:WEB ", " 2:CODE ", " 3:MUSIC ", " 4:MISC ", " 5:CHAT "
};
static const char *tag_names_urgent[TAG_COUNT] = {
    " 󱈸 ", " 󱈸 ", " 󱈸 ", " 󱈸 ", " 󱈸 "
    // " 1:WEB ", " 2:CODE ", " 3:MUSIC ", " 4:MISC ", " 5:CHAT "
};

/* enable module */
#define show_tags            1
#define show_layout          1
#define show_title           1
#define show_cpu             0
#define show_mem             0
#define show_clock           1
#define show_keymode         0
#define show_keyboardlayout  0
#define show_pacman           1

/* show only occupied tags */
#define show_only_occupied_tags 0

/* separator */
#define separator_str "  "

/* ========== color definitions (ARGB hexadecimal) ========== */
#define active_fg_color_hex     0XC4A855FF
#define active_bg_color_hex     0X262624FF
#define occupied_fg_color_hex   0XE8E4DCFF
#define occupied_bg_color_hex   0X262624FF
#define urgent_fg_color_hex     0XC67777FF
#define urgent_bg_color_hex     0X262624FF
#define empty_fg_color_hex      0X5A5955FF
#define empty_bg_color_hex      0X262624FF

/* --- layout symbol --- */
#define layout_fg_color_hex     0XE8E4DCFF
#define layout_bg_color_hex     0X262624FF

/* --- title --- */
#define title_fg_color_hex      0XE8E4DCFF
#define title_bg_color_hex      0X262624FF

/* --- right side modules --- */
#define cpu_fg_color_hex        0X7FBBB3FF
#define cpu_bg_color_hex        0X262624FF
#define mem_fg_color_hex        0XDBBC7FFF
#define mem_bg_color_hex        0X262624FF
#define clock_fg_color_hex      0XE8E4DCFF
#define clock_bg_color_hex      0X262624FF
#define keymode_fg_color_hex    0XC68A93FF
#define keymode_bg_color_hex    0X262624FF
#define keyboardlayout_fg_color_hex 0XC68A93FF
#define keyboardlayout_bg_color_hex 0XC68A93FF
#define pacman_fg_color_hex        0XE8E4DCFF
#define pacman_bg_color_hex        0X262624FF

/* --- OVERVIEW mode (text displayed when active_tags == [0]) --- */
#define overview_fg_color_hex   0XE8E4DCFF
#define overview_bg_color_hex   0X262624FF

/* --- separator --- */
#define separator_fg_color_hex  0X5A5955FF
#define separator_bg_color_hex  0X262624FF

/* --- middle blank area background --- */
#define middle_bg_color_hex      0X262624FF
#define middle_bg_sel_color_hex  0X262624FF

#endif
