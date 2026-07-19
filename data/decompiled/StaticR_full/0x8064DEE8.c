/* Function at 0x8064DEE8, size=40 bytes */
/* Stack frame: 0 bytes */

int FUN_8064DEE8(int r3, int r4, int r5, int r6, int r7, int r8)
{
    r7 = *(0 + r3); // lwz @ 0x8064DEE8
    /* slwi r0, r4, 2 */ // 0x8064DEEC
    r8 = r5;
    r5 = r6;
    /* stwx r8, r7, r0 */ // 0x8064DEF8
    r4 = r3;
    r6 = *(4 + r3); // lwz @ 0x8064DF00
    r3 = r8;
    /* stwx r8, r6, r0 */ // 0x8064DF08
    /* b 0x806a0018 */ // 0x8064DF0C
}