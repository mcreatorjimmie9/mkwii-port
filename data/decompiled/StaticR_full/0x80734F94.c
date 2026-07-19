/* Function at 0x80734F94, size=340 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80734F94(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -112(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x80734F9C
    /* lfs f0, 0(r4) */ // 0x80734FA8
    *(0x6c + r1) = r31; // stw @ 0x80734FB0
    *(0x68 + r1) = r30; // stw @ 0x80734FB4
    r30 = r3;
    /* lfs f1, 0x74(r3) */ // 0x80734FBC
    r3 = r3 + 0x6f4; // 0x80734FC0
    /* fneg f1, f1 */ // 0x80734FC4
    /* stfs f0, 0x20(r1) */ // 0x80734FC8
    /* stfs f1, 0x24(r1) */ // 0x80734FCC
    /* stfs f0, 0x28(r1) */ // 0x80734FD0
    FUN_80743D20(r3); // bl 0x80743D20
    r6 = *(0x6f4 + r30); // lwz @ 0x80734FD8
    r0 = *(0x6f8 + r30); // lwz @ 0x80734FE0
    r4 = r30 + 0x6d0; // 0x80734FE4
    *(0x34 + r1) = r0; // stw @ 0x80734FE8
    *(0x30 + r1) = r6; // stw @ 0x80734FF0
    r6 = *(0x6fc + r30); // lwz @ 0x80734FF4
    r0 = *(0x700 + r30); // lwz @ 0x80734FF8
    *(0x3c + r1) = r0; // stw @ 0x80734FFC
    *(0x38 + r1) = r6; // stw @ 0x80735000
    r6 = *(0x704 + r30); // lwz @ 0x80735004
    r0 = *(0x708 + r30); // lwz @ 0x80735008
    *(0x44 + r1) = r0; // stw @ 0x8073500C
    *(0x40 + r1) = r6; // stw @ 0x80735010
    r6 = *(0x70c + r30); // lwz @ 0x80735014
    r0 = *(0x710 + r30); // lwz @ 0x80735018
    *(0x4c + r1) = r0; // stw @ 0x8073501C
    *(0x48 + r1) = r6; // stw @ 0x80735020
    r6 = *(0x714 + r30); // lwz @ 0x80735024
    r0 = *(0x718 + r30); // lwz @ 0x80735028
    *(0x54 + r1) = r0; // stw @ 0x8073502C
    *(0x50 + r1) = r6; // stw @ 0x80735030
    r6 = *(0x71c + r30); // lwz @ 0x80735034
    r0 = *(0x720 + r30); // lwz @ 0x80735038
    *(0x5c + r1) = r0; // stw @ 0x8073503C
    *(0x58 + r1) = r6; // stw @ 0x80735040
    FUN_805A4464(); // bl 0x805A4464
    /* lfs f2, 8(r1) */ // 0x80735048
    /* lfs f1, 0xc(r1) */ // 0x8073504C
    /* lfs f0, 0x10(r1) */ // 0x80735050
    /* stfs f2, 0x3c(r1) */ // 0x80735054
    /* stfs f1, 0x4c(r1) */ // 0x80735058
    /* stfs f0, 0x5c(r1) */ // 0x8073505C
    r31 = *(0x288 + r30); // lwz @ 0x80735060
    if (==) goto 0x0x807350d0;
    r12 = *(0 + r31); // lwz @ 0x8073506C
    r3 = r31;
    r12 = *(0xc + r12); // lwz @ 0x80735074
    /* mtctr r12 */ // 0x80735078
    /* bctrl  */ // 0x8073507C
    r12 = *(0 + r31); // lwz @ 0x80735080
    r3 = r31;
    r12 = *(0x78 + r12); // lwz @ 0x8073508C
    /* mtctr r12 */ // 0x80735090
    /* bctrl  */ // 0x80735094
    r0 = *(0xb0 + r30); // lbz @ 0x80735098
    if (==) goto 0x0x807350bc;
    r12 = *(0 + r31); // lwz @ 0x807350A4
    r3 = r31;
    r4 = r30 + 0x72c; // 0x807350AC
    r12 = *(0x70 + r12); // lwz @ 0x807350B0
    /* mtctr r12 */ // 0x807350B4
    /* bctrl  */ // 0x807350B8
    r12 = *(0 + r31); // lwz @ 0x807350BC
    r3 = r31;
    r12 = *(0x80 + r12); // lwz @ 0x807350C4
    /* mtctr r12 */ // 0x807350C8
    /* bctrl  */ // 0x807350CC
    r0 = *(0x74 + r1); // lwz @ 0x807350D0
    r31 = *(0x6c + r1); // lwz @ 0x807350D4
    r30 = *(0x68 + r1); // lwz @ 0x807350D8
    return;
}