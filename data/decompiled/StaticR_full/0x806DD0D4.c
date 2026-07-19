/* Function at 0x806DD0D4, size=288 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_806DD0D4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x806DD0DC
    *(0x1c + r1) = r31; // stw @ 0x806DD0E4
    r31 = r3;
    r3 = r3 + 0x98; // 0x806DD0EC
    *(0x18 + r1) = r30; // stw @ 0x806DD0F0
    FUN_8069F4A0(r3); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x806DD0F8
    r30 = r3;
    if (==) goto 0x0x806dd114;
    if (==) goto 0x0x806dd168;
    /* b 0x806dd178 */ // 0x806DD110
    r3 = *(0 + r3); // lwz @ 0x806DD114
    /* slwi r0, r0, 4 */ // 0x806DD118
    /* lwzx r3, r3, r0 */ // 0x806DD11C
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x806DD124
    /* lis r0, 0x4330 */ // 0x806DD128
    *(0xc + r1) = r4; // stw @ 0x806DD12C
    /* lis r3, 0 */ // 0x806DD130
    /* lfd f3, 0(r3) */ // 0x806DD134
    /* lis r5, 0 */ // 0x806DD138
    *(8 + r1) = r0; // stw @ 0x806DD13C
    r3 = r30;
    /* lfs f1, 0x3c(r30) */ // 0x806DD144
    /* li r4, 3 */ // 0x806DD148
    /* lfd f2, 8(r1) */ // 0x806DD14C
    /* lfs f0, 0(r5) */ // 0x806DD150
    /* fsubs f2, f2, f3 */ // 0x806DD154
    /* fdivs f1, f1, f2 */ // 0x806DD158
    /* fsubs f1, f0, f1 */ // 0x806DD15C
    FUN_8069F718(); // bl 0x8069F718
    /* b 0x806dd178 */ // 0x806DD164
    /* lis r5, 0 */ // 0x806DD168
    /* li r4, 3 */ // 0x806DD16C
    /* lfs f1, 0(r5) */ // 0x806DD170
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
    r3 = r31;
    /* li r4, 0 */ // 0x806DD17C
    FUN_806DD47C(r4, r3, r4); // bl 0x806DD47C
    r3 = *(0x188 + r31); // lwz @ 0x806DD184
    r4 = *(0x174 + r31); // lwz @ 0x806DD188
    r12 = *(0 + r3); // lwz @ 0x806DD18C
    r12 = *(0x40 + r12); // lwz @ 0x806DD190
    /* mtctr r12 */ // 0x806DD194
    /* bctrl  */ // 0x806DD198
    /* li r0, 1 */ // 0x806DD19C
    *(0x80 + r3) = r0; // stb @ 0x806DD1A0
    r3 = *(0x64 + r31); // lwz @ 0x806DD1A4
    r30 = *(0xc + r3); // lwz @ 0x806DD1A8
    if (!=) goto 0x0x806dd1bc;
    /* li r30, 0 */ // 0x806DD1B4
    /* b 0x806dd210 */ // 0x806DD1B8
    /* lis r31, 0 */ // 0x806DD1BC
    r31 = r31 + 0; // 0x806DD1C0
    if (==) goto 0x0x806dd20c;
    r12 = *(0 + r30); // lwz @ 0x806DD1C8
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806DD1D0
    /* mtctr r12 */ // 0x806DD1D4
    /* bctrl  */ // 0x806DD1D8
    /* b 0x806dd1f4 */ // 0x806DD1DC
    if (!=) goto 0x0x806dd1f0;
    /* li r0, 1 */ // 0x806DD1E8
    /* b 0x806dd200 */ // 0x806DD1EC
    r3 = *(0 + r3); // lwz @ 0x806DD1F0
}