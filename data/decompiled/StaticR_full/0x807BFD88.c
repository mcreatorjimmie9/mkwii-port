/* Function at 0x807BFD88, size=16 bytes */
/* Stack frame: 0 bytes */

int FUN_807BFD88(int r3, int r4)
{
    /* slwi r0, r4, 2 */ // 0x807BFD88
    r3 = r3 + r0; // 0x807BFD8C
    r3 = *(0x54 + r3); // lwz @ 0x807BFD90
    return;
}