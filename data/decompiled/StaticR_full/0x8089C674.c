/* Function at 0x8089C674, size=168 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_8089C674(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    *(0x24 + r1) = r0; // stw @ 0x8089C680
    /* stmw r27, 0xc(r1) */ // 0x8089C684
    r27 = r3;
    r28 = r4;
    if (==) goto 0x0x8089c704;
    /* lis r4, 0 */ // 0x8089C694
    /* li r29, 0 */ // 0x8089C698
    r4 = r4 + 0; // 0x8089C69C
    *(0 + r3) = r4; // stw @ 0x8089C6A0
    /* li r31, 0 */ // 0x8089C6A4
    /* b 0x8089c6e4 */ // 0x8089C6A8
    r3 = *(8 + r27); // lwz @ 0x8089C6AC
    r30 = r29 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r30 */ // 0x8089C6B4
    if (==) goto 0x0x8089c6e0;
    if (==) goto 0x0x8089c6d8;
    r12 = *(0 + r3); // lwz @ 0x8089C6C4
    /* li r4, 1 */ // 0x8089C6C8
    r12 = *(8 + r12); // lwz @ 0x8089C6CC
    /* mtctr r12 */ // 0x8089C6D0
    /* bctrl  */ // 0x8089C6D4
    r3 = *(8 + r27); // lwz @ 0x8089C6D8
    /* stwx r31, r3, r30 */ // 0x8089C6DC
    r29 = r29 + 1; // 0x8089C6E0
    r0 = *(4 + r27); // lhz @ 0x8089C6E4
    /* clrlwi r3, r29, 0x10 */ // 0x8089C6E8
    if (<) goto 0x0x8089c6ac;
    if (<=) goto 0x0x8089c704;
    r3 = r27;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r27;
    r0 = *(0x24 + r1); // lwz @ 0x8089C70C
    return;
}