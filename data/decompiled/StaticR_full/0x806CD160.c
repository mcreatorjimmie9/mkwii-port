/* Function at 0x806CD160, size=56 bytes */
/* Stack frame: 0 bytes */

int FUN_806CD160(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* lis r8, 0 */ // 0x806CD160
    r7 = r3 + r4; // 0x806CD164
    r8 = *(0 + r8); // lwz @ 0x806CD168
    /* mulli r4, r5, 0x24 */ // 0x806CD16C
    r0 = *(0x1950 + r7); // lbz @ 0x806CD170
    r7 = *(0x58 + r8); // lwz @ 0x806CD174
    /* mulli r5, r0, 0x144 */ // 0x806CD178
    /* mulli r0, r7, 0xca8 */ // 0x806CD17C
    r0 = r3 + r0; // 0x806CD180
    r0 = r5 + r0; // 0x806CD184
    /* mulli r3, r6, 0xc */ // 0x806CD188
    r0 = r4 + r0; // 0x806CD18C
    r3 = r3 + r0; // 0x806CD190
    return;
}