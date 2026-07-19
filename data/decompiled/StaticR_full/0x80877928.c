/* Function at 0x80877928, size=188 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_80877928(int r3, int r4, int r5)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xd8 + r1) = r30; // stw @ 0x80877938
    r30 = r3;
    r12 = *(0 + r3); // lwz @ 0x80877940
    r12 = *(0x3c + r12); // lwz @ 0x80877944
    /* mtctr r12 */ // 0x80877948
    /* bctrl  */ // 0x8087794C
    r3 = r30;
    FUN_80876FEC(r3); // bl 0x80876FEC
    /* lis r4, 0 */ // 0x80877958
    r3 = r3 rlwinm 2; // rlwinm
    r4 = *(0 + r4); // lwz @ 0x80877960
    r0 = *(0x198 + r30); // lwz @ 0x80877964
    r4 = *(0xc + r4); // lwz @ 0x80877968
    /* lwzx r3, r4, r3 */ // 0x8087796C
    r31 = *(0x22 + r3); // lhz @ 0x80877970
    if (==) goto 0x0x808779cc;
    *(0x198 + r30) = r31; // stw @ 0x8087797C
    FUN_80654ECC(r3); // bl 0x80654ECC
    *(8 + r1) = r31; // stw @ 0x80877988
    r3 = r30;
    FUN_80876FEC(r3, r3); // bl 0x80876FEC
    /* clrlwi r0, r3, 0x18 */ // 0x80877994
    /* lis r3, 0 */ // 0x80877998
    /* mulli r0, r0, 0xf0 */ // 0x8087799C
    r4 = *(0 + r3); // lwz @ 0x808779A0
    r3 = r30;
    r4 = r4 + r0; // 0x808779AC
    r0 = *(0xf4 + r4); // lwz @ 0x808779B0
    /* cntlzw r0, r0 */ // 0x808779B4
    r0 = r0 rlwinm 0x1b; // rlwinm
    /* neg r4, r0 */ // 0x808779BC
    r4 = r4 + 0x76d; // 0x808779C0
    FUN_806A0A34(r4); // bl 0x806A0A34
    *(0x198 + r30) = r31; // stw @ 0x808779C8
    r0 = *(0xe4 + r1); // lwz @ 0x808779CC
    r31 = *(0xdc + r1); // lwz @ 0x808779D0
    r30 = *(0xd8 + r1); // lwz @ 0x808779D4
    return;
}