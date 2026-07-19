/* Function at 0x807B0ECC, size=116 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r21 */
/* Calls: 1 function(s) */

int FUN_807B0ECC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r21 */
    *(0x44 + r1) = r0; // stw @ 0x807B0ED8
    /* stmw r21, 0x14(r1) */ // 0x807B0EDC
    r21 = r4;
    r22 = r5;
    r23 = r6;
    /* li r24, 0 */ // 0x807B0EEC
    if (<=) goto 0x0x807b0fc4;
    /* lis r26, 0 */ // 0x807B0EF4
    /* lis r27, 0 */ // 0x807B0EF8
    /* lis r28, 0 */ // 0x807B0EFC
    /* lis r29, 0 */ // 0x807B0F00
    /* lis r30, 0 */ // 0x807B0F04
    /* lis r31, 0 */ // 0x807B0F08
    /* b 0x807b0fbc */ // 0x807B0F0C
    r0 = *(0xc + r22); // lwz @ 0x807B0F10
    r4 = r24;
    *(8 + r1) = r0; // stw @ 0x807B0F18
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r25 = r3;
    if (!=) goto 0x0x807b0f4c;
    r3 = r26 + 0; // 0x807B0F30
    r5 = r27 + 0; // 0x807B0F34
    r6 = r28 + 0; // 0x807B0F38
    r7 = r29 + 0; // 0x807B0F3C
}