/* Function at 0x807A20C8, size=176 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_807A20C8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x807A20D0
    /* li r0, 1 */ // 0x807A20D8
    *(0xc + r1) = r31; // stw @ 0x807A20DC
    *(8 + r1) = r30; // stw @ 0x807A20E0
    r30 = r3;
    *(8 + r3) = r0; // stw @ 0x807A20E8
    /* li r0, 0 */ // 0x807A20EC
    r4 = *(0 + r4); // lwz @ 0x807A20F0
    r4 = *(0 + r4); // lwz @ 0x807A20F4
    if (==) goto 0x0x807a2104;
    r0 = *(0 + r4); // lwz @ 0x807A2100
    *(0x10 + r3) = r0; // stw @ 0x807A2104
    r3 = r0;
    FUN_806950E4(r3); // bl 0x806950E4
    /* lis r31, 0 */ // 0x807A2110
    r4 = r3;
    r3 = *(0 + r31); // lwz @ 0x807A2118
    /* li r5, 0 */ // 0x807A211C
    FUN_807A9C14(r4, r5); // bl 0x807A9C14
    r3 = *(0 + r31); // lwz @ 0x807A2124
    FUN_807A9CE4(r4, r5); // bl 0x807A9CE4
    r0 = *(0x10 + r30); // lwz @ 0x807A212C
    if (!=) goto 0x0x807a2148;
    /* lis r3, 0 */ // 0x807A2138
    /* li r4, 0 */ // 0x807A213C
    r3 = *(0 + r3); // lwz @ 0x807A2140
    FUN_807881A8(r3, r4); // bl 0x807881A8
    r12 = *(0 + r30); // lwz @ 0x807A2148
    r3 = r30;
    r12 = *(0x28 + r12); // lwz @ 0x807A2150
    /* mtctr r12 */ // 0x807A2154
    /* bctrl  */ // 0x807A2158
    r31 = *(0xc + r1); // lwz @ 0x807A215C
    /* li r3, 1 */ // 0x807A2160
    r30 = *(8 + r1); // lwz @ 0x807A2164
    r0 = *(0x14 + r1); // lwz @ 0x807A2168
    return;
}