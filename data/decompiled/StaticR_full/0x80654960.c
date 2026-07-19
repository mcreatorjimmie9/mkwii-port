/* Function at 0x80654960, size=220 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_80654960(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x80654978
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x80654980
    *(0x10 + r1) = r28; // stw @ 0x80654984
    r28 = r5;
    if (<) goto 0x0x80654a0c;
    if (==) goto 0x0x806549b0;
    r0 = r5 + -1; // 0x80654994
    r4 = *(0x270 + r3); // lwz @ 0x80654998
    /* mulli r0, r0, 0x178 */ // 0x8065499C
    r4 = r4 + r0; // 0x806549A0
    r0 = *(0x174 + r4); // lwz @ 0x806549A4
    if (<) goto 0x0x80654a0c;
    r0 = *(0x1e0 + r3); // lwz @ 0x806549B0
    /* lis r29, 0 */ // 0x806549B4
    r29 = r29 + 0; // 0x806549B8
    r3 = *(0x270 + r3); // lwz @ 0x806549BC
    /* mulli r0, r0, 0x178 */ // 0x806549C0
    r4 = r29 + 0x70; // 0x806549C4
    r3 = r3 + r0; // 0x806549C8
    r3 = r3 + 0xa8; // 0x806549CC
    FUN_80665D1C(r4, r3); // bl 0x80665D1C
    r5 = *(0xbb + r3); // lbz @ 0x806549D4
    /* mulli r0, r28, 0x178 */ // 0x806549D8
    r4 = r29 + 0x79; // 0x806549DC
    r5 = r5 rlwinm 0; // rlwinm
    *(0xbb + r3) = r5; // stb @ 0x806549E4
    r3 = *(0x270 + r30); // lwz @ 0x806549E8
    *(0x1e0 + r30) = r28; // stw @ 0x806549EC
    r3 = r3 + r0; // 0x806549F0
    r3 = r3 + 0xa8; // 0x806549F4
    FUN_80665D1C(r3); // bl 0x80665D1C
    r0 = *(0xbb + r3); // lbz @ 0x806549FC
    r0 = r0 rlwinm 0; // rlwinm
    r0 = r0 | 1; // 0x80654A04
    *(0xbb + r3) = r0; // stb @ 0x80654A08
    r3 = r30;
    r5 = r31;
    /* li r4, 0x1a */ // 0x80654A14
    FUN_806A03CC(r3, r5, r4); // bl 0x806A03CC
    r0 = *(0x24 + r1); // lwz @ 0x80654A1C
    r31 = *(0x1c + r1); // lwz @ 0x80654A20
    r30 = *(0x18 + r1); // lwz @ 0x80654A24
    r29 = *(0x14 + r1); // lwz @ 0x80654A28
    r28 = *(0x10 + r1); // lwz @ 0x80654A2C
    return;
}