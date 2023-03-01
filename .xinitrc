# Author: hedies23
## Date: 2023-03-01
### This xinitrc is intended to be modified to your needs.
#### Use it as a guidline for how you want to set up this dwm rice.
##### The commented out lines are to do with the packages in the 'optional-pkgs.txt' file.
###### !!!! Remember to set an alias in your shell for the command "dbus-run-session startx ~/.xinitrc dwm"
##### Enjoy :)
####
###
#

session=$(1:-dwm)

# ~/.screenlayout/screen.sh &
xrdb ~/.Xresources &
xscreensaver &
# xbindkeys &
feh --bg-fill ~/Pictures/Wallpapers/match.jpg &
dunst &
picom --vsync &
# /usr/bin/pipewire &
# /usr/bin/pipewire-pulse &
# /usr/bin/wireplumber &
dwmblocks &
case $session in
	dwm	) exec dbus-run-session dwm;;
	*	) exec $1;;
esac
