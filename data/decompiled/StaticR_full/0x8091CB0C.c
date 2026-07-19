/* Function at 0x8091CB0C, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8091CB0C(int r3, int r4, int r5, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r7, 0 */ // 0x8091CB14
    /* frsp f0, f1 */ // 0x8091CB18
    /* lfs f3, 0(r7) */ // 0x8091CB1C
    /* lis r7, 0 */ // 0x8091CB20
    *(0x14 + r1) = r0; // stw @ 0x8091CB24
    /* lis r8, 0 */ // 0x8091CB28
    /* fdivs f0, f3, f0 */ // 0x8091CB2C
    *(0xc + r1) = r31; // stw @ 0x8091CB30
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x8091CB38
    r30 = r5;
    r0 = *(0 + r7); // lbz @ 0x8091CB40
    *(0 + r3) = r0; // stb @ 0x8091CB44
    /* mulli r7, r5, 0x18 */ // 0x8091CB48
    *(4 + r3) = r4; // stw @ 0x8091CB4C
    *(0x18 + r3) = r5; // stw @ 0x8091CB50
    /* stfs f1, 0x20(r3) */ // 0x8091CB54
    *(0x38 + r3) = r6; // stw @ 0x8091CB58
    /* stfs f2, 0x40(r3) */ // 0x8091CB5C
    /* stfs f0, 0x24(r3) */ // 0x8091CB60
    r4 = *(0 + r8); // lwz @ 0x8091CB64
    r0 = *(0 + r4); // lhz @ 0x8091CB68
    *(8 + r3) = r0; // sth @ 0x8091CB6C
    r0 = *(4 + r4); // lwz @ 0x8091CB70
    *(0xc + r3) = r0; // stw @ 0x8091CB74
    r0 = *(8 + r4); // lhz @ 0x8091CB78
    *(0x10 + r3) = r0; // sth @ 0x8091CB7C
    r0 = *(0xc + r4); // lwz @ 0x8091CB80
    *(0x14 + r3) = r0; // stw @ 0x8091CB84
    r3 = r7 + 0x10; // 0x8091CB88
    FUN_805E3430(r3); // bl 0x805E3430
}