# suckless-tools

Tweaks and patches for a variety of suckless utilities.

## tools

- dwm
- dwmblocks (not official suckless tool. useful for dwm.)
- dmenu
- slock

## patches

**dwm:**
- fonts, uses ubuntu mono nerd font. installable from aur: `paru nerd-fonts-ubuntu-mono`
- matches arc-dark gtk theme
- super modkey
- gaps when there are multiple windows on screen

**dwmblocks:**
- changes that thing up at the top panel that says "dwm-6.2"
- adds panel for kernel version, pacman+aur updates (requires `pacman-contrib` and `checkupdates+aur`, installable from aur), memory usage, and date/time

**dmenu:**
- font change, uses ubuntu mono nerd font. installable from aur: `paru nerd-fonts-ubuntu-mono`
- color changes, integrates with arc-dark gtk theme
- shows # of programs under search/# of total programs
- fuzzy highlighting
- mouse support -- you can click on selections

**slock:**
- message appears in slock. uses some random font, no need for installation
- blurs screen, uses as background

## installation

all of these programs are installed by navigating to the directory, and executing `sudo make install`.