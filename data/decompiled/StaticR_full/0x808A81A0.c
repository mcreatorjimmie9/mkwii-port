/* Function at 0x808A81A0, size=100 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_808A81A0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x808A81A8
    /* li r4, 3 */ // 0x808A81AC
    *(0x14 + r1) = r0; // stw @ 0x808A81B0
    r3 = *(0 + r3); // lwz @ 0x808A81B4
    r3 = *(8 + r3); // lwz @ 0x808A81B8
    FUN_805E364C(r3, r4); // bl 0x805E364C
    if (==) goto 0x0x808a81d4;
    if (==) goto 0x0x808a81e0;
    /* b 0x808a81ec */ // 0x808A81D0
    /* lis r3, 0 */ // 0x808A81D4
    r3 = r3 + 0; // 0x808A81D8
    /* b 0x808a81f4 */ // 0x808A81DC
    /* lis r3, 0 */ // 0x808A81E0
    r3 = r3 + 0; // 0x808A81E4
    /* b 0x808a81f4 */ // 0x808A81E8
    /* lis r3, 0 */ // 0x808A81EC
    r3 = r3 + 0; // 0x808A81F0
    r0 = *(0x14 + r1); // lwz @ 0x808A81F4
    return;
}