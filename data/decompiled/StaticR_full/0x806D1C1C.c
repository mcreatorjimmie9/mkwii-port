/* Function at 0x806D1C1C, size=192 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_806D1C1C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x806D1C24
    *(0x14 + r1) = r0; // stw @ 0x806D1C28
    *(0xc + r1) = r31; // stw @ 0x806D1C2C
    r31 = r3;
    r3 = *(0 + r5); // lwz @ 0x806D1C34
    r3 = *(0 + r3); // lwz @ 0x806D1C38
    r0 = *(0 + r3); // lwz @ 0x806D1C3C
    if (==) goto 0x0x806d1c64;
    if (==) goto 0x0x806d1c64;
    if (==) goto 0x0x806d1c7c;
    if (==) goto 0x0x806d1ca4;
    /* b 0x806d1cc8 */ // 0x806D1C60
    r3 = r4;
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r31;
    /* li r4, 1 */ // 0x806D1C70
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    /* b 0x806d1cc8 */ // 0x806D1C78
    r3 = r4;
    FUN_8064A384(r3, r4, r3); // bl 0x8064A384
    r12 = *(0 + r31); // lwz @ 0x806D1C84
    r3 = r31;
    /* li r4, 0x7a */ // 0x806D1C8C
    /* li r5, 1 */ // 0x806D1C90
    r12 = *(0x1c + r12); // lwz @ 0x806D1C94
    /* mtctr r12 */ // 0x806D1C98
    /* bctrl  */ // 0x806D1C9C
    /* b 0x806d1cc8 */ // 0x806D1CA0
    r3 = r4;
    FUN_8064A384(r3); // bl 0x8064A384
    r12 = *(0 + r31); // lwz @ 0x806D1CAC
    r3 = r31;
    /* li r4, 0x9e */ // 0x806D1CB4
    /* li r5, 1 */ // 0x806D1CB8
    r12 = *(0x1c + r12); // lwz @ 0x806D1CBC
    /* mtctr r12 */ // 0x806D1CC0
    /* bctrl  */ // 0x806D1CC4
    r0 = *(0x14 + r1); // lwz @ 0x806D1CC8
    r31 = *(0xc + r1); // lwz @ 0x806D1CCC
    return;
}