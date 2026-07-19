/* Function at 0x805A02F4, size=156 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805A02F4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805A0304
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805A030C
    r30 = r3;
    if (==) goto 0x0x805a0374;
    if (==) goto 0x0x805a0364;
    /* lis r5, 0 */ // 0x805A031C
    /* lis r4, 0 */ // 0x805A0320
    r5 = r5 + 0; // 0x805A0324
    *(0 + r3) = r5; // stw @ 0x805A0328
    r3 = *(0 + r4); // lwz @ 0x805A032C
    if (==) goto 0x0x805a0358;
    /* li r0, 0 */ // 0x805A0338
    *(0 + r4) = r0; // stw @ 0x805A033C
    if (==) goto 0x0x805a0358;
    r12 = *(0x10 + r3); // lwz @ 0x805A0344
    /* li r4, 1 */ // 0x805A0348
    r12 = *(8 + r12); // lwz @ 0x805A034C
    /* mtctr r12 */ // 0x805A0350
    /* bctrl  */ // 0x805A0354
    r3 = r30;
    /* li r4, 0 */ // 0x805A035C
    FUN_805E3430(r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x805a0374;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x805A0378
    r30 = *(8 + r1); // lwz @ 0x805A037C
    r0 = *(0x14 + r1); // lwz @ 0x805A0380
    return;
}