/* Function at 0x805EA8EC, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805EA8EC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r3 = *(0x1c + r3); // lwz @ 0x805EA8F4
    *(0x14 + r1) = r0; // stw @ 0x805EA8F8
    *(0xc + r1) = r31; // stw @ 0x805EA8FC
    r31 = *(0x2c + r3); // lwz @ 0x805EA900
    if (!=) goto 0x0x805ea938;
    /* lis r3, 0 */ // 0x805EA90C
    /* lis r5, 0 */ // 0x805EA910
    /* lis r6, 0 */ // 0x805EA914
    /* lis r7, 0 */ // 0x805EA918
    r3 = r3 + 0; // 0x805EA91C
    r5 = r5 + 0; // 0x805EA920
    r6 = r6 + 0; // 0x805EA924
    r7 = r7 + 0; // 0x805EA928
    /* li r4, 0x26 */ // 0x805EA92C
    /* crclr cr1eq */ // 0x805EA930
    FUN_805E3430(r5, r6, r7, r4); // bl 0x805E3430
    r3 = *(0x28 + r31); // lwz @ 0x805EA938
    r31 = *(0xc + r1); // lwz @ 0x805EA93C
    r0 = *(0x14 + r1); // lwz @ 0x805EA940
    return;
}