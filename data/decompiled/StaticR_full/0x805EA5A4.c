/* Function at 0x805EA5A4, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805EA5A4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r3 = *(0x1c + r3); // lwz @ 0x805EA5AC
    *(0x14 + r1) = r0; // stw @ 0x805EA5B0
    *(0xc + r1) = r31; // stw @ 0x805EA5B4
    r31 = *(0x2c + r3); // lwz @ 0x805EA5B8
    if (!=) goto 0x0x805ea5f0;
    /* lis r3, 0 */ // 0x805EA5C4
    /* lis r5, 0 */ // 0x805EA5C8
    /* lis r6, 0 */ // 0x805EA5CC
    /* lis r7, 0 */ // 0x805EA5D0
    r3 = r3 + 0; // 0x805EA5D4
    r5 = r5 + 0; // 0x805EA5D8
    r6 = r6 + 0; // 0x805EA5DC
    r7 = r7 + 0; // 0x805EA5E0
    /* li r4, 0xa6 */ // 0x805EA5E4
    /* crclr cr1eq */ // 0x805EA5E8
    FUN_805E3430(r5, r6, r7, r4); // bl 0x805E3430
    r3 = *(0x28 + r31); // lwz @ 0x805EA5F0
    r31 = *(0xc + r1); // lwz @ 0x805EA5F4
    r0 = *(0x14 + r1); // lwz @ 0x805EA5F8
    return;
}