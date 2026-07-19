/* Function at 0x808F5224, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808F5224(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808F5230
    r31 = r3;
    r0 = *(0x6ff + r3); // lbz @ 0x808F5238
    if (==) goto 0x0x808f5274;
    r0 = *(0x6d8 + r3); // lwz @ 0x808F5244
    if (>=) goto 0x0x808f526c;
    if (!=) goto 0x0x808f5260;
    /* li r4, 0x1c */ // 0x808F5258
    FUN_808F4584(r4); // bl 0x808F4584
    r3 = *(0x6d8 + r31); // lwz @ 0x808F5260
    r0 = r3 + 1; // 0x808F5264
    *(0x6d8 + r31) = r0; // stw @ 0x808F5268
    /* li r0, 1 */ // 0x808F526C
    *(0x6f8 + r31) = r0; // stb @ 0x808F5270
    r0 = *(0x14 + r1); // lwz @ 0x808F5274
    r31 = *(0xc + r1); // lwz @ 0x808F5278
    return;
}