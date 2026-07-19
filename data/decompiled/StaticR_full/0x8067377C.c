/* Function at 0x8067377C, size=184 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_8067377C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x8067378C
    *(8 + r1) = r30; // stw @ 0x80673790
    r30 = r3;
    r4 = r30;
    r3 = *(0 + r31); // lwz @ 0x8067379C
    r3 = *(0 + r3); // lwz @ 0x806737A0
    FUN_80686058(r4); // bl 0x80686058
    if (==) goto 0x0x8067381c;
    r0 = *(0xd6c + r30); // lbz @ 0x806737B0
    if (==) goto 0x0x8067381c;
    r0 = *(0xd68 + r30); // lwz @ 0x806737BC
    if (==) goto 0x0x8067381c;
    r3 = *(0 + r31); // lwz @ 0x806737C8
    r3 = r3 + 0x34; // 0x806737CC
    FUN_8067FCB8(r3); // bl 0x8067FCB8
    if (!=) goto 0x0x8067381c;
    /* li r0, -1 */ // 0x806737DC
    *(0xd68 + r30) = r0; // stw @ 0x806737E0
    r3 = *(0 + r31); // lwz @ 0x806737E4
    r3 = r3 + 0x34; // 0x806737E8
    FUN_8067FA04(r3); // bl 0x8067FA04
    r12 = *(0 + r30); // lwz @ 0x806737F0
    r3 = r30;
    /* li r4, 0x63 */ // 0x806737F8
    /* li r5, 0 */ // 0x806737FC
    r12 = *(0x24 + r12); // lwz @ 0x80673800
    /* mtctr r12 */ // 0x80673804
    /* bctrl  */ // 0x80673808
    r3 = r30 + 0xa78; // 0x8067380C
    /* li r4, 0 */ // 0x80673810
    /* li r5, 0 */ // 0x80673814
    FUN_808D5A00(r3, r4, r5); // bl 0x808D5A00
    r0 = *(0x14 + r1); // lwz @ 0x8067381C
    r31 = *(0xc + r1); // lwz @ 0x80673820
    r30 = *(8 + r1); // lwz @ 0x80673824
    return;
}