/* Function at 0x805EADD0, size=120 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_805EADD0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x805EADDC
    r27 = r3;
    r28 = r4;
    /* li r29, 0 */ // 0x805EADE8
    r0 = r29 rlwinm 2; // rlwinm
    /* li r31, 0 */ // 0x805EADF0
    r3 = r27 + r0; // 0x805EADF4
    r30 = *(4 + r3); // lwz @ 0x805EADF8
    r3 = *(0x14 + r30); // lwz @ 0x805EADFC
    r3 = *(0 + r3); // lwz @ 0x805EAE00
    if (==) goto 0x0x805eae18;
    r5 = r28;
    /* li r4, 0 */ // 0x805EAE10
    FUN_805E3430(r5, r4); // bl 0x805E3430
    r31 = r31 + 1; // 0x805EAE18
    r30 = r30 + 4; // 0x805EAE1C
    if (<) goto 0x0x805eadfc;
    r29 = r29 + 1; // 0x805EAE28
    if (<) goto 0x0x805eadec;
    r0 = *(0x24 + r1); // lwz @ 0x805EAE38
    return;
}