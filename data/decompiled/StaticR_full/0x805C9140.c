/* Function at 0x805C9140, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_805C9140(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x805C9148
    *(0x14 + r1) = r0; // stw @ 0x805C914C
    *(0xc + r1) = r31; // stw @ 0x805C9150
    r31 = r4;
    /* li r4, 4 */ // 0x805C9158
    r3 = *(0 + r3); // lwz @ 0x805C915C
    FUN_805C5788(r4); // bl 0x805C5788
    if (!=) goto 0x0x805c9180;
    /* lis r3, 0 */ // 0x805C916C
    r4 = r31;
    r3 = *(0 + r3); // lwz @ 0x805C9174
    r5 = *(7 + r3); // lbz @ 0x805C9178
    FUN_8090A0A8(r3, r4); // bl 0x8090A0A8
    r0 = *(0x14 + r1); // lwz @ 0x805C9180
    r31 = *(0xc + r1); // lwz @ 0x805C9184
    return;
}