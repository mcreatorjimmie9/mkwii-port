/* Function at 0x805EC92C, size=212 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_805EC92C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r0, 1 */ // 0x805EC938
    r0 = r0 << r4; // slw
    *(0x1c + r1) = r31; // stw @ 0x805EC940
    /* clrlwi r0, r0, 0x10 */ // 0x805EC944
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x805EC94C
    *(0x14 + r1) = r29; // stw @ 0x805EC950
    *(0x10 + r1) = r28; // stw @ 0x805EC954
    r5 = *(8 + r3); // lhz @ 0x805EC958
    /* and. r0, r5, r0 */ // 0x805EC95C
    if (!=) goto 0x0x805ec9e0;
    /* lis r0, 1 */ // 0x805EC964
    r3 = *(4 + r3); // lwz @ 0x805EC968
    r0 = r0 << r4; // slw
    r30 = r31;
    r3 = r3 & r0; // 0x805EC974
    /* li r28, 0 */ // 0x805EC978
    /* neg r0, r3 */ // 0x805EC97C
    r0 = r0 | r3; // 0x805EC980
    /* srwi r29, r0, 0x1f */ // 0x805EC984
    r12 = *(0 + r31); // lwz @ 0x805EC988
    r3 = r31;
    r4 = *(0x14 + r30); // lwz @ 0x805EC990
    r5 = r29;
    r12 = *(0x20 + r12); // lwz @ 0x805EC998
    /* li r6, 1 */ // 0x805EC99C
    r4 = *(0 + r4); // lwz @ 0x805EC9A0
    /* mtctr r12 */ // 0x805EC9A4
    /* bctrl  */ // 0x805EC9A8
    r28 = r28 + 1; // 0x805EC9AC
    r30 = r30 + 4; // 0x805EC9B0
    if (<) goto 0x0x805ec988;
    if (!=) goto 0x0x805ec9d4;
    r0 = *(8 + r31); // lhz @ 0x805EC9C4
    r0 = r0 | 0x4000; // 0x805EC9C8
    *(8 + r31) = r0; // sth @ 0x805EC9CC
    /* b 0x805ec9e0 */ // 0x805EC9D0
    r0 = *(8 + r31); // lhz @ 0x805EC9D4
    r0 = r0 rlwinm 0; // rlwinm
    *(8 + r31) = r0; // sth @ 0x805EC9DC
    r0 = *(0x24 + r1); // lwz @ 0x805EC9E0
    r31 = *(0x1c + r1); // lwz @ 0x805EC9E4
    r30 = *(0x18 + r1); // lwz @ 0x805EC9E8
    r29 = *(0x14 + r1); // lwz @ 0x805EC9EC
    r28 = *(0x10 + r1); // lwz @ 0x805EC9F0
    return;
}