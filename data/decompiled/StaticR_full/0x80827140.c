/* Function at 0x80827140, size=128 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80827140(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r8;
    *(0x14 + r1) = r29; // stw @ 0x80827158
    r29 = r3;
    r31 = *(0x21 + r3); // lbz @ 0x80827160
    if (==) goto 0x0x808271ec;
    /* mulli r0, r31, 0x24 */ // 0x8082716C
    r3 = *(0x28 + r3); // lwz @ 0x80827170
    /* lis r6, 0 */ // 0x80827178
    r3 = r3 + r0; // 0x8082717C
    *(0x18 + r3) = r4; // stw @ 0x80827180
    *(0x1c + r3) = r5; // stw @ 0x80827184
    r0 = *(0 + r6); // lwz @ 0x80827188
    if (==) goto 0x0x80827194;
    r0 = r30;
    *(0x20 + r3) = r0; // stw @ 0x80827194
    r4 = r7;
    /* li r5, 0x15 */ // 0x8082719C
    FUN_805E3430(r4, r5); // bl 0x805E3430
    r4 = *(0x24 + r29); // lwz @ 0x808271A4
    r5 = r31 rlwinm 2; // rlwinm
    r0 = *(0x20 + r29); // lbz @ 0x808271B0
    /* lbzx r3, r4, r5 */ // 0x808271B4
    *(0x21 + r29) = r3; // stb @ 0x808271B8
    /* stbx r0, r4, r5 */ // 0x808271BC
}