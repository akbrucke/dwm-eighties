# dwm-eighties
My new (as of 2023) dwm rice

These dotfiles are here for you to rice your Void or Arch system like me. This rice is based on the Base16-Eighties theme. Extended GTK support and install script coming soon.

![alt text](https://github.com/akbrucke/dwm-eighties/blob/main/display.png?raw=true)


To create this rice on your system:

1. Back up your files
2. Clone this repo on your machine
3. Install the dependencies from pkglist.txt, and optionally, the packages in optional-pkgs.txt for added functionality in the xinitrc file 
4. Copy these files and folders to your home folder, overwriting as needed: .fonts .Xresources.d .xinitrc .Xresources
5. Copy match.jpg to ~/Pictures/Wallpapers or edit .xinitrc to point feh to your own wallpaper
6. Copy the contents of Scripts to ~/.local/bin/bash
7. Edit volume script based on whether you want to use amixer command or pactl command.
8. If on Arch, edit the blocks.h file in dwmblocks folder to say "pacupdate" instead of "xbpsupdate" on line 11. If on Void, leave "xbpsupdate."
9. Open a terminal, cd into dmenu-flexipatch, run:
sudo make clean install
10. cd into dwm-flexipatch, run the same command
11. cd innto dwmblocks, run the same command
12. cd into st-flexipatch, run the same command one more time
13. Make an alias in your shell for "dbus-run-session startx ~/.xinitrc dwm"
14. Add that alias command to the end of your shell profile to automatically start dwm after logging in
15. Disable any display managers
16. Log out and log back in

Finished :)