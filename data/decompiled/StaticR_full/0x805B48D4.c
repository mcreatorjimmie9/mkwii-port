/* Function at 0x805B48D4, size=120 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_805B48D4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x805B48E0
    r26 = r3;
    /* li r30, 0 */ // 0x805B48E8
    /* li r27, 0 */ // 0x805B48EC
    r28 = r26;
    /* li r31, -1 */ // 0x805B48F4
    *(0x14 + r3) = r30; // stw @ 0x805B48F8
    r29 = *(4 + r28); // lwz @ 0x805B48FC
    r3 = *(4 + r29); // lwz @ 0x805B4900
    if (==) goto 0x0x805b4918;
    r5 = *(0xc + r29); // lwz @ 0x805B490C
    /* li r4, 0 */ // 0x805B4910
    FUN_805E3430(r4); // bl 0x805E3430
    *(8 + r29) = r31; // stw @ 0x805B4918
    r27 = r27 + 1; // 0x805B491C
    r28 = r28 + 4; // 0x805B4924
    *(0x14 + r29) = r30; // stw @ 0x805B4928
    if (<) goto 0x0x805b48fc;
    /* li r0, 2 */ // 0x805B4930
    *(0x14 + r26) = r0; // stw @ 0x805B4934
    r0 = *(0x24 + r1); // lwz @ 0x805B493C
    return;
}