/* Function at 0x805B6790, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805B6790(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805B67A0
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805B67A8
    r30 = r3;
    if (==) goto 0x0x805b680c;
    /* lis r5, 0 */ // 0x805B67B4
    /* lis r4, 0 */ // 0x805B67B8
    r5 = r5 + 0; // 0x805B67BC
    *(0 + r3) = r5; // stw @ 0x805B67C0
    r3 = *(0 + r4); // lwz @ 0x805B67C4
    if (==) goto 0x0x805b67f0;
    /* li r0, 0 */ // 0x805B67D0
    *(0 + r4) = r0; // stw @ 0x805B67D4
    if (==) goto 0x0x805b67f0;
    r12 = *(0x10 + r3); // lwz @ 0x805B67DC
    /* li r4, 1 */ // 0x805B67E0
    r12 = *(8 + r12); // lwz @ 0x805B67E4
    /* mtctr r12 */ // 0x805B67E8
    /* bctrl  */ // 0x805B67EC
    r3 = r30;
    /* li r4, 0 */ // 0x805B67F4
    FUN_805E3430(r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x805b680c;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x805B6810
    r30 = *(8 + r1); // lwz @ 0x805B6814
}