/* Function at 0x8065A3E4, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8065A3E4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x8065A3EC
    *(0x14 + r1) = r0; // stw @ 0x8065A3F0
    *(0xc + r1) = r31; // stw @ 0x8065A3F4
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x8065A3FC
    FUN_806F58E0(r4); // bl 0x806F58E0
    if (==) goto 0x0x8065a434;
    r0 = *(8 + r31); // lbz @ 0x8065A40C
    if (==) goto 0x0x8065a434;
    r12 = *(0 + r31); // lwz @ 0x8065A418
    r3 = r31;
    r12 = *(0x14 + r12); // lwz @ 0x8065A420
    /* mtctr r12 */ // 0x8065A424
    /* bctrl  */ // 0x8065A428
    /* li r0, 0 */ // 0x8065A42C
    *(8 + r31) = r0; // stb @ 0x8065A430
    /* li r3, -1 */ // 0x8065A434
    /* li r0, 0 */ // 0x8065A438
    *(0x7c + r31) = r3; // stw @ 0x8065A43C
    *(0x78 + r31) = r0; // stb @ 0x8065A440
    r31 = *(0xc + r1); // lwz @ 0x8065A444
    r0 = *(0x14 + r1); // lwz @ 0x8065A448
    return;
}