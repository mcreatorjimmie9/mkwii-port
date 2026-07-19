/* Function at 0x807BFD78, size=16 bytes */
/* Stack frame: 0 bytes */

int FUN_807BFD78(int r3, int r4)
{
    /* slwi r0, r4, 2 */ // 0x807BFD78
    r3 = r3 + r0; // 0x807BFD7C
    r3 = *(0x24 + r3); // lwz @ 0x807BFD80
    return;
}