make modules
make modules_install
yes | cp arch/x86/boot/bzImage /boot/vmlinuz-2.6.32
yes | cp System.map /boot/System.map-2.6.32
new-kernel-pkg --mkinitrd --install 2.6.32

#export KERNELVERSION=${make kernelversion}
#cp arch/x86/boot/bzImage /boot/vmlinuz-$KERNELVERSION
#cp System.map /boot/System.map-$KERNELVERSION
#new-kernel-pkg --mkinitrd --install $KERNELVERSION
