/* Function at 0x806E7034, size=136 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 4 function(s) */

int FUN_806E7034(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    *(0x24 + r1) = r0; // stw @ 0x806E7040
    /* stmw r26, 8(r1) */ // 0x806E7044
    r26 = r3;
    r27 = r4;
    if (==) goto 0x0x806e7100;
    /* lis r4, 0 */ // 0x806E7054
    r29 = r26;
    r4 = r4 + 0; // 0x806E705C
    *(0 + r3) = r4; // stw @ 0x806E7060
    /* li r28, 0 */ // 0x806E7064
    /* li r31, 0 */ // 0x806E7068
    r30 = *(0x1b0 + r29); // lwz @ 0x806E706C
    if (==) goto 0x0x806e708c;
    r3 = *(0 + r30); // lwz @ 0x806E7078
    FUN_805E3430(); // bl 0x805E3430
    *(0 + r30) = r31; // stw @ 0x806E7080
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r28 = r28 + 1; // 0x806E708C
    r29 = r29 + 4; // 0x806E7090
    if (<) goto 0x0x806e706c;
    r30 = r26 + 0xf0; // 0x806E709C
    r31 = r26 + 0x150; // 0x806E70A0
    /* li r28, 0 */ // 0x806E70A4
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r31;
    FUN_805E3430(r3, r3); // bl 0x805E3430
    r28 = r28 + 1; // 0x806E70B8
}