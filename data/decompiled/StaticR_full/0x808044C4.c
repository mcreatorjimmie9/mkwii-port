/* Function at 0x808044C4, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808044C4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x808044D4
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808044DC
    r30 = r3;
    if (==) goto 0x0x80804520;
    r0 = *(8 + r3); // lwz @ 0x808044E8
    /* lis r4, 0 */ // 0x808044EC
    r4 = r4 + 0; // 0x808044F0
    *(0 + r3) = r4; // stw @ 0x808044F4
    if (==) goto 0x0x80804510;
    r3 = r0;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    /* li r0, 0 */ // 0x80804508
    *(8 + r30) = r0; // stw @ 0x8080450C
    if (<=) goto 0x0x80804520;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80804524
    r30 = *(8 + r1); // lwz @ 0x80804528
    r0 = *(0x14 + r1); // lwz @ 0x8080452C
}