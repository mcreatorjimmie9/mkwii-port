/* Function at 0x80742878, size=332 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80742878(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x8074288C
    r0 = *(0x7a + r3); // lbz @ 0x80742890
    if (==) goto 0x0x807428a4;
    /* li r0, 0 */ // 0x8074289C
    *(0x7a + r3) = r0; // stb @ 0x807428A0
    r0 = *(0x14b + r3); // lbz @ 0x807428A4
    /* li r4, -1 */ // 0x807428A8
    *(0x64 + r3) = r4; // stw @ 0x807428AC
    if (==) goto 0x0x807428c0;
    /* li r0, 0 */ // 0x807428B8
    *(0x10c + r3) = r0; // stb @ 0x807428BC
    r0 = *(0x7b + r3); // lbz @ 0x807428C0
    if (==) goto 0x0x80742998;
    /* lis r4, 0 */ // 0x807428CC
    r4 = *(0 + r4); // lwz @ 0x807428D0
    r0 = *(0x10 + r4); // lbz @ 0x807428D4
    if (!=) goto 0x0x8074296c;
    r0 = *(4 + r3); // lbz @ 0x807428E0
    if (!=) goto 0x0x8074296c;
    r0 = *(0x12b + r3); // lbz @ 0x807428EC
    if (!=) goto 0x0x8074296c;
    r30 = *(0x25c + r3); // lwz @ 0x807428F8
    if (==) goto 0x0x8074293c;
    r12 = *(0 + r30); // lwz @ 0x80742904
    r3 = r30;
    r12 = *(0xc + r12); // lwz @ 0x8074290C
    /* mtctr r12 */ // 0x80742910
    /* bctrl  */ // 0x80742914
    r0 = *(0xb0 + r31); // lbz @ 0x80742918
    if (==) goto 0x0x8074293c;
    r12 = *(0 + r30); // lwz @ 0x80742924
    r3 = r30;
    r4 = r31 + 0x72c; // 0x8074292C
    r12 = *(0x70 + r12); // lwz @ 0x80742930
    /* mtctr r12 */ // 0x80742934
    /* bctrl  */ // 0x80742938
    r3 = *(0x118 + r31); // lwz @ 0x8074293C
    FUN_8061E010(r4); // bl 0x8061E010
    r12 = *(0 + r3); // lwz @ 0x80742944
    /* lis r4, 0 */ // 0x80742948
    /* lfs f1, 0(r4) */ // 0x8074294C
    /* li r4, 0x350 */ // 0x80742950
    r12 = *(0xe4 + r12); // lwz @ 0x80742954
    /* mtctr r12 */ // 0x80742958
    /* bctrl  */ // 0x8074295C
    r3 = *(0x118 + r31); // lwz @ 0x80742960
    /* li r4, 0x1a */ // 0x80742964
    FUN_8061E02C(r4); // bl 0x8061E02C
    r3 = *(0x160 + r31); // lwz @ 0x8074296C
    /* li r4, 0 */ // 0x80742970
    r12 = *(0 + r3); // lwz @ 0x80742974
    r12 = *(0xc + r12); // lwz @ 0x80742978
    /* mtctr r12 */ // 0x8074297C
    /* bctrl  */ // 0x80742980
    /* li r30, 0 */ // 0x80742984
    *(0x7b + r31) = r30; // stb @ 0x80742988
    r3 = *(0x118 + r31); // lwz @ 0x8074298C
    FUN_8061F264(); // bl 0x8061F264
    *(0x794 + r31) = r30; // stb @ 0x80742994
    r0 = *(0x7c + r31); // lbz @ 0x80742998
    if (==) goto 0x0x807429ac;
    /* li r0, 0 */ // 0x807429A4
    *(0x7c + r31) = r0; // stb @ 0x807429A8
    r0 = *(0x14 + r1); // lwz @ 0x807429AC
    r31 = *(0xc + r1); // lwz @ 0x807429B0
    r30 = *(8 + r1); // lwz @ 0x807429B4
    return;
}