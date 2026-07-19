/* Function at 0x80915F44, size=356 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80915F44(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r7 = r4;
    *(0x1c + r1) = r31; // stw @ 0x80915F54
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x80915F5C
    r30 = r5;
    r0 = *(0x174 + r3); // lwz @ 0x80915F64
    if (!=) goto 0x0x80915f78;
    /* li r3, 0 */ // 0x80915F70
    /* b 0x80916090 */ // 0x80915F74
    if (==) goto 0x0x80915f88;
    if (!=) goto 0x0x8091608c;
    if (==) goto 0x0x80915fec;
    r0 = *(4 + r4); // lwz @ 0x80915F90
    if (==) goto 0x0x80915fa4;
    if (!=) goto 0x0x80915fd0;
    r4 = r31 + 0x30; // 0x80915FA8
    r5 = r7 + 0x50; // 0x80915FAC
    FUN_805A4498(r3, r4, r5); // bl 0x805A4498
    /* lfs f0, 8(r1) */ // 0x80915FB4
    /* stfs f0, 0x158(r31) */ // 0x80915FB8
    /* lfs f0, 0xc(r1) */ // 0x80915FBC
    /* stfs f0, 0x15c(r31) */ // 0x80915FC0
    /* lfs f0, 0x10(r1) */ // 0x80915FC4
    /* stfs f0, 0x160(r31) */ // 0x80915FC8
    /* b 0x80916004 */ // 0x80915FCC
    /* lfs f0, 0x44(r4) */ // 0x80915FD0
    /* stfs f0, 0x158(r3) */ // 0x80915FD4
    /* lfs f0, 0x48(r4) */ // 0x80915FD8
    /* stfs f0, 0x15c(r3) */ // 0x80915FDC
    /* lfs f0, 0x4c(r4) */ // 0x80915FE0
    /* stfs f0, 0x160(r3) */ // 0x80915FE4
    /* b 0x80916004 */ // 0x80915FE8
    /* lfs f2, 0x30(r3) */ // 0x80915FEC
    /* lfs f1, 0x34(r3) */ // 0x80915FF0
    /* lfs f0, 0x38(r3) */ // 0x80915FF4
    /* stfs f2, 0x158(r3) */ // 0x80915FF8
    /* stfs f1, 0x15c(r3) */ // 0x80915FFC
    /* stfs f0, 0x160(r3) */ // 0x80916000
    /* li r0, 0 */ // 0x80916004
    /* li r3, 2 */ // 0x80916008
    *(0x174 + r31) = r3; // stw @ 0x8091600C
    r3 = r31;
    *(0x178 + r31) = r0; // stw @ 0x80916014
    *(0x17c + r31) = r0; // stw @ 0x80916018
    r12 = *(0 + r31); // lwz @ 0x8091601C
    r12 = *(0x24 + r12); // lwz @ 0x80916020
    /* mtctr r12 */ // 0x80916024
    /* bctrl  */ // 0x80916028
    /* lis r4, 0 */ // 0x8091602C
    /* lis r5, 0 */ // 0x80916030
    r6 = *(0 + r4); // lwz @ 0x80916034
    /* clrlwi r4, r3, 0x10 */ // 0x80916038
    r3 = *(0 + r5); // lwz @ 0x8091603C
    r0 = *(0xb70 + r6); // lwz @ 0x80916040
    if (!=) goto 0x0x8091608c;
    r0 = *(0xb9e + r6); // lhz @ 0x8091604C
    if (!=) goto 0x0x8091608c;
    r31 = *(0x10 + r3); // lwz @ 0x8091605C
    if (<) goto 0x0x80916080;
    r12 = *(0 + r31); // lwz @ 0x80916064
    r3 = r31;
    r12 = *(0x38 + r12); // lwz @ 0x8091606C
    /* mtctr r12 */ // 0x80916070
    /* bctrl  */ // 0x80916074
    if (==) goto 0x0x8091608c;
    r3 = *(8 + r31); // lwz @ 0x80916080
    r0 = r3 + 1; // 0x80916084
    *(8 + r31) = r0; // stw @ 0x80916088
    r3 = r30;
    r0 = *(0x24 + r1); // lwz @ 0x80916090
    r31 = *(0x1c + r1); // lwz @ 0x80916094
    r30 = *(0x18 + r1); // lwz @ 0x80916098
    return;
}