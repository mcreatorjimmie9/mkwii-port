/* Function at 0x807FB514, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807FB514(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807FB524
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807FB52C
    r30 = r3;
    if (==) goto 0x0x807fb570;
    r0 = *(8 + r3); // lwz @ 0x807FB538
    /* lis r4, 0 */ // 0x807FB53C
    r4 = r4 + 0; // 0x807FB540
    *(0 + r3) = r4; // stw @ 0x807FB544
    if (==) goto 0x0x807fb560;
    r3 = r0;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    /* li r0, 0 */ // 0x807FB558
    *(8 + r30) = r0; // stw @ 0x807FB55C
    if (<=) goto 0x0x807fb570;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807FB574
    r30 = *(8 + r1); // lwz @ 0x807FB578
    r0 = *(0x14 + r1); // lwz @ 0x807FB57C
}