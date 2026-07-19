/* Function at 0x805ED3DC, size=104 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r20 */
/* Calls: 1 function(s) */

int FUN_805ED3DC(int r3, int r4)
{
    /* Stack frame: -64(r1) */
    /* saved r20 */
    /* stmw r20, 0x10(r1) */ // 0x805ED3E8
    r30 = r3;
    r20 = *(0 + r3); // lwz @ 0x805ED3F0
    r0 = *(0x44 + r20); // lwz @ 0x805ED3F4
    if (!=) goto 0x0x805ed538;
    /* li r31, 0 */ // 0x805ED400
    /* lis r22, 0 */ // 0x805ED404
    /* lis r23, 0 */ // 0x805ED408
    /* lis r24, 0 */ // 0x805ED40C
    /* lis r25, 0 */ // 0x805ED410
    /* lis r26, 0 */ // 0x805ED414
    /* lis r27, 0 */ // 0x805ED418
    /* lis r28, 0 */ // 0x805ED41C
    /* lis r29, 0 */ // 0x805ED420
    /* b 0x805ed518 */ // 0x805ED424
    r3 = r30;
    r4 = r31;
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r21 = r3;
    if (!=) goto 0x0x805ed45c;
    r3 = r22 + 0; // 0x805ED440
}