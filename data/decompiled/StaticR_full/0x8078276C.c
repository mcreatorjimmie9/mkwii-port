/* Function at 0x8078276C, size=436 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8078276C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x80782774
    *(0xc + r1) = r31; // stw @ 0x8078277C
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x80782784
    r0 = *(0xb0 + r3); // lbz @ 0x80782788
    if (==) goto 0x0x807827a4;
    r0 = *(0xb1 + r3); // lbz @ 0x80782794
    if (!=) goto 0x0x807827a4;
    /* li r4, 1 */ // 0x807827A0
    if (==) goto 0x0x807827b4;
    /* li r0, 0 */ // 0x807827AC
    *(0xc4 + r3) = r0; // stw @ 0x807827B0
    r0 = *(0xbc + r3); // lwz @ 0x807827B4
    if (!=) goto 0x0x807827c8;
    r3 = r31;
    FUN_80776978(r3); // bl 0x80776978
    r0 = *(0xbc + r31); // lwz @ 0x807827C8
    if (!=) goto 0x0x80782908;
    r12 = *(0 + r31); // lwz @ 0x807827D4
    r3 = r31;
    /* li r30, 0 */ // 0x807827DC
    r12 = *(0x30 + r12); // lwz @ 0x807827E0
    /* mtctr r12 */ // 0x807827E4
    /* bctrl  */ // 0x807827E8
    /* lis r4, 0x101 */ // 0x807827EC
    r0 = *(0x20 + r3); // lwz @ 0x807827F0
    r3 = r4 + 0x101; // 0x807827F4
    /* andc. r0, r3, r0 */ // 0x807827F8
    if (!=) goto 0x0x80782818;
    /* lis r3, 0 */ // 0x80782800
    r3 = *(0 + r3); // lwz @ 0x80782804
    FUN_8070D8D8(r3, r3); // bl 0x8070D8D8
    if (==) goto 0x0x80782818;
    /* li r30, 1 */ // 0x80782814
    /* li r4, 0 */ // 0x8078281C
    if (==) goto 0x0x80782834;
    r0 = *(0xc0 + r31); // lbz @ 0x80782824
    if (!=) goto 0x0x80782834;
    /* li r4, 1 */ // 0x80782830
    /* li r3, 0 */ // 0x80782838
    if (!=) goto 0x0x80782850;
    r0 = *(0xc0 + r31); // lbz @ 0x80782840
    if (==) goto 0x0x80782850;
    /* li r3, 1 */ // 0x8078284C
    if (==) goto 0x0x80782874;
    r3 = *(0xb8 + r31); // lwz @ 0x80782858
    /* li r4, 0 */ // 0x8078285C
    r12 = *(0 + r3); // lwz @ 0x80782860
    r12 = *(0x20 + r12); // lwz @ 0x80782864
    /* mtctr r12 */ // 0x80782868
    /* bctrl  */ // 0x8078286C
    /* b 0x80782894 */ // 0x80782870
    if (==) goto 0x0x80782894;
    r3 = *(0xb8 + r31); // lwz @ 0x8078287C
    /* li r4, 1 */ // 0x80782880
    r12 = *(0 + r3); // lwz @ 0x80782884
    r12 = *(0x20 + r12); // lwz @ 0x80782888
    /* mtctr r12 */ // 0x8078288C
    /* bctrl  */ // 0x80782890
    r0 = *(0xc4 + r31); // lwz @ 0x80782894
    if (!=) goto 0x0x807828c0;
    r3 = *(0xb8 + r31); // lwz @ 0x807828A0
    /* li r4, 1 */ // 0x807828A4
    /* li r5, 1 */ // 0x807828A8
    r12 = *(0 + r3); // lwz @ 0x807828AC
    r12 = *(0x7c + r12); // lwz @ 0x807828B0
    /* mtctr r12 */ // 0x807828B4
    /* bctrl  */ // 0x807828B8
    /* b 0x807828e4 */ // 0x807828BC
    if (!=) goto 0x0x807828e4;
    r3 = *(0xb8 + r31); // lwz @ 0x807828C8
    /* li r4, 1 */ // 0x807828CC
    /* li r5, 0 */ // 0x807828D0
    r12 = *(0 + r3); // lwz @ 0x807828D4
    r12 = *(0x7c + r12); // lwz @ 0x807828D8
    /* mtctr r12 */ // 0x807828DC
    /* bctrl  */ // 0x807828E0
    r3 = *(0xb8 + r31); // lwz @ 0x807828E4
    r12 = *(0 + r3); // lwz @ 0x807828E8
    r12 = *(0x80 + r12); // lwz @ 0x807828EC
    /* mtctr r12 */ // 0x807828F0
    /* bctrl  */ // 0x807828F4
    r3 = *(0xc4 + r31); // lwz @ 0x807828F8
    *(0xc0 + r31) = r30; // stb @ 0x807828FC
    r0 = r3 + 1; // 0x80782900
    *(0xc4 + r31) = r0; // stw @ 0x80782904
    r0 = *(0x14 + r1); // lwz @ 0x80782908
    r31 = *(0xc + r1); // lwz @ 0x8078290C
    r30 = *(8 + r1); // lwz @ 0x80782910
    return;
}