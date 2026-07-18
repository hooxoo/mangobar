# install
```
yay -S cjson wayland-protocols fcft pixman

git clone https://github.com/hooxoo/mangobar.git
cd mangobar
meson build -Dprefix=/usr/
sudo ninja -C build install
```
# vibecoded with opencode
i have zero programming background so i vibedcoded some features i wanted with opencode  
so take that into consideration. for me, it works w/o any problems so far.

# added features
- ability to place bar top or bottom of the screen
- pacman (pending updates) ~~and volume module (via wpctl)~~
- customize tag colors depending on state (occupied/active/urgent)
- layout name module moved to right side

# things to note
- i only use 5 tags and is forked to work with that.
  - edit lines 13~29 in config.def.h file to match your tag count
- some layout names (layouts I never use) won't be formatted properly.
  - check line 130 of mangobar.c file and edit it to personal liking.
