/* Function at 0x805F3A04, size=80 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 2 function(s) */

int FUN_805F3A04(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* lis r8, 0 */ // 0x805F3A0C
    *(0x24 + r1) = r0; // stw @ 0x805F3A14
    r8 = r8 + 0; // 0x805F3A18
    /* stmw r26, 8(r1) */ // 0x805F3A1C
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r30 = r7;
    *(0 + r3) = r8; // stw @ 0x805F3A34
    if (!=) goto 0x0x805f3a44;
    FUN_805ABAFC(); // bl 0x805ABAFC
    r30 = *(0xc94 + r3); // lwz @ 0x805F3A40
    r4 = r30;
    /* li r3, 0x28 */ // 0x805F3A48
    /* li r5, 4 */ // 0x805F3A4C
    FUN_805E3430(r4, r3, r5); // bl 0x805E3430
}