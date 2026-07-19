/* Function at 0x806D2100, size=92 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_806D2100(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x806D2114
    *(0x14 + r1) = r29; // stw @ 0x806D2118
    r0 = *(0x6c + r3); // lwz @ 0x806D211C
    if (>) goto 0x0x806d2ae4;
    /* lis r4, 0 */ // 0x806D2128
    /* slwi r0, r0, 2 */ // 0x806D212C
    r4 = r4 + 0; // 0x806D2130
    /* lwzx r4, r4, r0 */ // 0x806D2134
    /* mtctr r4 */ // 0x806D2138
    /* bctr  */ // 0x806D213C
    /* lis r3, 0 */ // 0x806D2140
    r3 = *(0 + r3); // lwz @ 0x806D2144
    r3 = *(0 + r3); // lwz @ 0x806D2148
    r29 = *(0x310 + r3); // lwz @ 0x806D214C
    if (!=) goto 0x0x806d2160;
    /* li r29, 0 */ // 0x806D2158
}