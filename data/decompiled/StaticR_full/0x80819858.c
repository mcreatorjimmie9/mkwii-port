/* Function at 0x80819858, size=124 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r20 */
/* Calls: 1 function(s) */

int FUN_80819858(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -80(r1) */
    /* saved r20 */
    /* stmw r20, 0x20(r1) */ // 0x80819864
    /* lis r27, 0 */ // 0x80819868
    r24 = r3;
    r25 = r4;
    /* li r26, 0 */ // 0x80819874
    r27 = r27 + 0; // 0x80819878
    /* lis r28, 0 */ // 0x8081987C
    /* lis r29, 0 */ // 0x80819880
    /* lis r30, 0 */ // 0x80819884
    /* lis r31, 0 */ // 0x80819888
    /* lis r21, 0 */ // 0x8081988C
    /* lis r22, 0 */ // 0x80819890
    /* lis r23, 0 */ // 0x80819894
    /* b 0x80819960 */ // 0x80819898
    r5 = *(0 + r24); // lwz @ 0x8081989C
    r4 = *(0 + r27); // lwz @ 0x808198A4
    r0 = *(0xc + r5); // lwz @ 0x808198A8
    *(0xc + r1) = r0; // stw @ 0x808198AC
    FUN_805E3430(r3); // bl 0x805E3430
    r20 = r3;
    if (==) goto 0x0x80819958;
    if (!=) goto 0x0x808198e0;
    r3 = r28 + 0; // 0x808198C4
    r5 = r29 + 0; // 0x808198C8
    r6 = r30 + 0; // 0x808198CC
    r7 = r31 + 0; // 0x808198D0
}