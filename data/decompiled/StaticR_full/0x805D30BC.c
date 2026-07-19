/* Function at 0x805D30BC, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805D30BC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805D30CC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805D30D4
    r30 = r3;
    if (==) goto 0x0x805d3154;
    /* addis r3, r3, 1 */ // 0x805D30E0
    /* lis r4, 0 */ // 0x805D30E4
    r4 = r4 + 0; // 0x805D30E8
    /* li r5, 0x14 */ // 0x805D30EC
    /* li r6, 0xa */ // 0x805D30F0
    r3 = r3 + -0x6e78; // 0x805D30F4
    FUN_805E3430(r4, r4, r5, r6, r3); // bl 0x805E3430
    /* lis r4, 0 */ // 0x805D30FC
    r3 = r30 + 0x5920; // 0x805D3100
    r4 = r4 + 0; // 0x805D3104
    /* li r5, 0x1c */ // 0x805D3108
    /* li r6, 6 */ // 0x805D310C
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    /* lis r4, 0 */ // 0x805D3114
}