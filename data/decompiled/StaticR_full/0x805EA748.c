/* Function at 0x805EA748, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805EA748(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r3 = *(0x1c + r3); // lwz @ 0x805EA750
    *(0x14 + r1) = r0; // stw @ 0x805EA754
    *(0xc + r1) = r31; // stw @ 0x805EA758
    r31 = *(0x2c + r3); // lwz @ 0x805EA75C
    if (!=) goto 0x0x805ea794;
    /* lis r3, 0 */ // 0x805EA768
    /* lis r5, 0 */ // 0x805EA76C
    /* lis r6, 0 */ // 0x805EA770
    /* lis r7, 0 */ // 0x805EA774
    r3 = r3 + 0; // 0x805EA778
    r5 = r5 + 0; // 0x805EA77C
    r6 = r6 + 0; // 0x805EA780
    r7 = r7 + 0; // 0x805EA784
    /* li r4, 0x5c */ // 0x805EA788
    /* crclr cr1eq */ // 0x805EA78C
    FUN_805E3430(r5, r6, r7, r4); // bl 0x805E3430
    r3 = *(0x38 + r31); // lwz @ 0x805EA794
    r31 = *(0xc + r1); // lwz @ 0x805EA798
    r0 = *(0x14 + r1); // lwz @ 0x805EA79C
    return;
}