/* Function at 0x807C3A1C, size=176 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_807C3A1C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x807C3A30
    r29 = r3;
    r0 = *(4 + r3); // lwz @ 0x807C3A38
    if (<=) goto 0x0x807c3ab0;
    r30 = *(8 + r3); // lwz @ 0x807C3A44
    r3 = r0;
    FUN_807CFA78(r3); // bl 0x807CFA78
    /* lis r5, 0 */ // 0x807C3A50
    r4 = r3;
    r3 = *(0 + r5); // lwz @ 0x807C3A58
    FUN_807C03BC(r3, r5, r4); // bl 0x807C03BC
    r4 = r3;
    /* lis r31, 0 */ // 0x807C3A64
    r3 = *(4 + r29); // lwz @ 0x807C3A68
    r5 = r31 + 0; // 0x807C3A6C
    FUN_807CFB7C(r4, r5); // bl 0x807CFB7C
    r6 = r29;
    r5 = r31 + 0; // 0x807C3A78
    /* li r7, 0 */ // 0x807C3A7C
    /* b 0x807c3aa4 */ // 0x807C3A80
    r0 = *(0 + r5); // lwz @ 0x807C3A84
    r5 = r5 + 4; // 0x807C3A88
    r3 = *(0xc + r6); // lwz @ 0x807C3A8C
    r6 = r6 + 4; // 0x807C3A90
    r4 = r30 + r0; // 0x807C3A94
    r7 = r7 + 1; // 0x807C3A98
    r0 = r4 + -1; // 0x807C3A9C
    *(0x18 + r3) = r0; // stw @ 0x807C3AA0
    r0 = *(4 + r29); // lwz @ 0x807C3AA4
    if (<) goto 0x0x807c3a84;
    r0 = *(0x24 + r1); // lwz @ 0x807C3AB0
    r31 = *(0x1c + r1); // lwz @ 0x807C3AB4
    r30 = *(0x18 + r1); // lwz @ 0x807C3AB8
    r29 = *(0x14 + r1); // lwz @ 0x807C3ABC
    return;
}