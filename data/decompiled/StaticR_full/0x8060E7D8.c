/* Function at 0x8060E7D8, size=152 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8060E7D8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8060E7E4
    r31 = r3;
    r5 = *(0 + r3); // lwz @ 0x8060E7EC
    r4 = *(4 + r5); // lwz @ 0x8060E7F0
    r0 = *(0xc + r4); // lwz @ 0x8060E7F4
    /* rlwinm. r0, r0, 0, 0xf, 0xf */ // 0x8060E7F8
    if (==) goto 0x0x8060e85c;
    r4 = *(0x192 + r3); // lha @ 0x8060E800
    r0 = r4 + -1; // 0x8060E804
    *(0x192 + r3) = r0; // sth @ 0x8060E808
    /* extsh. r0, r0 */ // 0x8060E80C
    if (>) goto 0x0x8060e85c;
    r4 = *(4 + r5); // lwz @ 0x8060E814
    r0 = *(0xc + r4); // lwz @ 0x8060E818
    /* rlwinm. r0, r0, 0, 0xf, 0xf */ // 0x8060E81C
    if (==) goto 0x0x8060e85c;
    r4 = *(4 + r5); // lwz @ 0x8060E824
    r0 = *(0xc + r4); // lwz @ 0x8060E828
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r4) = r0; // stw @ 0x8060E830
    FUN_8061E010(); // bl 0x8061E010
    r12 = *(0 + r3); // lwz @ 0x8060E838
    /* lis r4, 0 */ // 0x8060E83C
    /* lfs f1, 0(r4) */ // 0x8060E840
    /* li r4, 0x1a5 */ // 0x8060E844
    r12 = *(0xe0 + r12); // lwz @ 0x8060E848
    /* mtctr r12 */ // 0x8060E84C
    /* bctrl  */ // 0x8060E850
    r3 = *(0x260 + r31); // lwz @ 0x8060E854
    FUN_806426B0(r4); // bl 0x806426B0
    r0 = *(0x14 + r1); // lwz @ 0x8060E85C
    r31 = *(0xc + r1); // lwz @ 0x8060E860
    return;
}