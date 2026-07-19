/* Function at 0x80654A3C, size=216 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80654A3C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r6, 0 */ // 0x80654A44
    r6 = r6 + 0; // 0x80654A4C
    *(0xc + r1) = r31; // stw @ 0x80654A50
    r31 = r4;
    r4 = r6 + 0x82; // 0x80654A58
    *(8 + r1) = r30; // stw @ 0x80654A5C
    r30 = r3;
    r0 = *(0x1e0 + r3); // lwz @ 0x80654A64
    r5 = *(0x270 + r3); // lwz @ 0x80654A68
    /* mulli r0, r0, 0x178 */ // 0x80654A6C
    r3 = r5 + r0; // 0x80654A70
    r3 = r3 + 0xa8; // 0x80654A74
    FUN_80665D1C(r3); // bl 0x80665D1C
    r0 = *(0xbb + r3); // lbz @ 0x80654A7C
    r0 = r0 rlwinm 0; // rlwinm
    *(0xbb + r3) = r0; // stb @ 0x80654A84
    r4 = *(0x1e0 + r30); // lwz @ 0x80654A88
    r0 = *(0x1dc + r30); // lwz @ 0x80654A8C
    if (>=) goto 0x0x80654ab8;
    /* mulli r0, r4, 0x178 */ // 0x80654A98
    r3 = *(0x270 + r30); // lwz @ 0x80654A9C
    r3 = r3 + r0; // 0x80654AA0
    r0 = *(0x174 + r3); // lwz @ 0x80654AA4
    if (<) goto 0x0x80654ab8;
    r0 = r4 + 1; // 0x80654AB0
    *(0x1e0 + r30) = r0; // stw @ 0x80654AB4
    r0 = *(0x1e0 + r30); // lwz @ 0x80654AB8
    /* lis r4, 0 */ // 0x80654ABC
    r4 = r4 + 0; // 0x80654AC0
    r3 = *(0x270 + r30); // lwz @ 0x80654AC4
    /* mulli r0, r0, 0x178 */ // 0x80654AC8
    r4 = r4 + 0x8b; // 0x80654ACC
    r3 = r3 + r0; // 0x80654AD0
    r3 = r3 + 0xa8; // 0x80654AD4
    FUN_80665D1C(r4, r3); // bl 0x80665D1C
    r0 = *(0xbb + r3); // lbz @ 0x80654ADC
    r5 = r31;
    /* li r4, 0x19 */ // 0x80654AE4
    r0 = r0 rlwinm 0; // rlwinm
    r0 = r0 | 1; // 0x80654AEC
    *(0xbb + r3) = r0; // stb @ 0x80654AF0
    r3 = r30;
    FUN_806A03CC(r4, r3); // bl 0x806A03CC
    r0 = *(0x14 + r1); // lwz @ 0x80654AFC
    r31 = *(0xc + r1); // lwz @ 0x80654B00
    r30 = *(8 + r1); // lwz @ 0x80654B04
    return;
}