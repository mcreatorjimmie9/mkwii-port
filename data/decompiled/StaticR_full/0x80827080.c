/* Function at 0x80827080, size=104 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80827080(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r7;
    *(0x14 + r1) = r29; // stw @ 0x80827098
    r29 = r3;
    r31 = *(0x11 + r3); // lbz @ 0x808270A0
    if (==) goto 0x0x80827124;
    /* mulli r0, r31, 0x24 */ // 0x808270AC
    r3 = *(0x18 + r3); // lwz @ 0x808270B0
    r3 = r3 + r0; // 0x808270B4
    *(0x18 + r3) = r4; // stw @ 0x808270B8
    r4 = r6;
    *(0x1c + r3) = r5; // stw @ 0x808270C0
    r5 = r30;
    FUN_805E3430(r4, r5); // bl 0x805E3430
    r4 = *(0x10 + r29); // lbz @ 0x808270CC
    r5 = r31 rlwinm 2; // rlwinm
    r3 = *(0x14 + r29); // lwz @ 0x808270D4
    /* lbzx r0, r3, r5 */ // 0x808270DC
    *(0x11 + r29) = r0; // stb @ 0x808270E0
    if (!=) goto 0x0x808270f8;
}