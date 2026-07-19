/* Function at 0x806038B4, size=196 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_806038B4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806038C8
    r30 = r3;
    FUN_8061ECE4(); // bl 0x8061ECE4
    r0 = *(0x1c + r3); // lwz @ 0x806038D4
    r4 = *(0x18 + r3); // lwz @ 0x806038D8
    r0 = r0 rlwinm 0x17; // rlwinm
    r3 = r4 rlwinm 0x17; // rlwinm
    if (==) goto 0x0x80603960;
    r3 = *(0 + r30); // lwz @ 0x806038EC
    r3 = *(4 + r3); // lwz @ 0x806038F0
    r0 = *(8 + r3); // lwz @ 0x806038F4
    /* rlwinm. r0, r0, 0, 9, 9 */ // 0x806038F8
    if (!=) goto 0x0x80603960;
    r3 = r30;
    FUN_8061ECC8(r3); // bl 0x8061ECC8
    r3 = r30;
    FUN_8061ECC8(r3, r3); // bl 0x8061ECC8
    r0 = *(0x9f + r3); // lbz @ 0x80603910
    r3 = r30;
    *(0x14 + r30) = r0; // stw @ 0x80603918
    FUN_8061ECC8(r3, r3); // bl 0x8061ECC8
    r0 = *(0x9e + r3); // lbz @ 0x80603920
    *(0x18 + r30) = r0; // stb @ 0x80603924
    if (>=) goto 0x0x80603938;
    /* li r0, 1 */ // 0x80603930
    /* b 0x80603944 */ // 0x80603934
    if (<=) goto 0x0x80603944;
    /* li r0, 4 */ // 0x80603940
    *(0x18 + r30) = r0; // stb @ 0x80603944
    r3 = r30;
    r4 = r31;
    r12 = *(0xc + r30); // lwz @ 0x80603950
    r12 = *(0xc + r12); // lwz @ 0x80603954
    /* mtctr r12 */ // 0x80603958
    /* bctrl  */ // 0x8060395C
    r0 = *(0x14 + r1); // lwz @ 0x80603960
    r31 = *(0xc + r1); // lwz @ 0x80603964
    r30 = *(8 + r1); // lwz @ 0x80603968
    return;
}