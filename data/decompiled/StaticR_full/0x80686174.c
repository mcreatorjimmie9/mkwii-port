/* Function at 0x80686174, size=204 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_80686174(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r30, 0 */ // 0x80686188
    *(0x14 + r1) = r29; // stw @ 0x8068618C
    r29 = r3;
    r31 = r29;
    /* b 0x806861c8 */ // 0x80686198
    r3 = *(0x354 + r31); // lwz @ 0x8068619C
    r12 = *(0 + r3); // lwz @ 0x806861A0
    r12 = *(0x18 + r12); // lwz @ 0x806861A4
    /* mtctr r12 */ // 0x806861A8
    /* bctrl  */ // 0x806861AC
    if (!=) goto 0x0x806861c0;
    /* li r3, 0 */ // 0x806861B8
    /* b 0x80686224 */ // 0x806861BC
    r31 = r31 + 4; // 0x806861C0
    r30 = r30 + 1; // 0x806861C4
    r0 = *(0x37c + r29); // lwz @ 0x806861C8
    if (<) goto 0x0x8068619c;
    /* li r30, 0 */ // 0x806861D4
    r3 = *(0x380 + r29); // lwz @ 0x806861D8
    if (==) goto 0x0x80686210;
    r0 = *(8 + r3); // lwz @ 0x806861E4
    if (==) goto 0x0x80686210;
    r12 = *(0 + r3); // lwz @ 0x806861F0
    r12 = *(0x18 + r12); // lwz @ 0x806861F4
    /* mtctr r12 */ // 0x806861F8
    /* bctrl  */ // 0x806861FC
    if (!=) goto 0x0x80686210;
    /* li r3, 0 */ // 0x80686208
    /* b 0x80686224 */ // 0x8068620C
    r30 = r30 + 1; // 0x80686210
    r29 = r29 + 4; // 0x80686214
    if (<) goto 0x0x806861d8;
    /* li r3, 1 */ // 0x80686220
    r0 = *(0x24 + r1); // lwz @ 0x80686224
    r31 = *(0x1c + r1); // lwz @ 0x80686228
    r30 = *(0x18 + r1); // lwz @ 0x8068622C
    r29 = *(0x14 + r1); // lwz @ 0x80686230
    return;
}