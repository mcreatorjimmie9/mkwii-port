/* Function at 0x808E792C, size=236 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_808E792C(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r4 = r3 + 0x844; // 0x808E7934
    *(0xc + r1) = r31; // stw @ 0x808E793C
    *(8 + r1) = r30; // stw @ 0x808E7940
    r30 = r3;
    r12 = *(0 + r3); // lwz @ 0x808E7948
    r12 = *(0x78 + r12); // lwz @ 0x808E794C
    /* mtctr r12 */ // 0x808E7950
    /* bctrl  */ // 0x808E7954
    r4 = *(0x840 + r30); // lwz @ 0x808E7958
    r3 = r30 + 0x6c8; // 0x808E795C
    r7 = *(0x83c + r30); // lwz @ 0x808E7960
    r5 = r30 + 0x314; // 0x808E7964
    /* slwi r0, r4, 2 */ // 0x808E7968
    r8 = *(0x6c4 + r30); // lwz @ 0x808E796C
    /* mulli r6, r7, 0xa */ // 0x808E7970
    r4 = r4 + 1; // 0x808E7974
    /* lwzx r8, r8, r0 */ // 0x808E7978
    r0 = r7 + 1; // 0x808E797C
    *(0x314 + r30) = r4; // stw @ 0x808E7980
    r31 = r8 + r6; // 0x808E7984
    *(0x318 + r30) = r0; // stw @ 0x808E7988
    r0 = *(2 + r31); // lha @ 0x808E798C
    *(0x3e4 + r30) = r0; // stw @ 0x808E7990
    r4 = *(4 + r31); // lha @ 0x808E7994
    FUN_806A0A34(); // bl 0x806A0A34
    r0 = *(6 + r31); // lha @ 0x808E799C
    if (!=) goto 0x0x808e79c0;
    r3 = r30 + 0xa98; // 0x808E79A8
    /* li r4, 0 */ // 0x808E79AC
    FUN_80649FD0(r3, r4); // bl 0x80649FD0
    /* li r0, 1 */ // 0x808E79B4
    *(0xb18 + r30) = r0; // stb @ 0x808E79B8
    /* b 0x808e79f8 */ // 0x808E79BC
    r12 = *(0 + r30); // lwz @ 0x808E79C0
    r3 = r30;
    r12 = *(0x68 + r12); // lwz @ 0x808E79C8
    /* mtctr r12 */ // 0x808E79CC
    /* bctrl  */ // 0x808E79D0
    r4 = r3;
    r3 = r30 + 0xa98; // 0x808E79D8
    FUN_80649FD0(r4, r3); // bl 0x80649FD0
    /* li r0, 0 */ // 0x808E79E0
    *(0xb18 + r30) = r0; // stb @ 0x808E79E4
    r3 = r30 + 0xa98; // 0x808E79E8
    r5 = r30 + 0x314; // 0x808E79EC
    r4 = *(6 + r31); // lha @ 0x808E79F0
    FUN_806A0A34(r3, r5); // bl 0x806A0A34
    r3 = r30;
    FUN_808B3318(r3, r5, r3); // bl 0x808B3318
    r0 = *(0x14 + r1); // lwz @ 0x808E7A00
    r31 = *(0xc + r1); // lwz @ 0x808E7A04
    r30 = *(8 + r1); // lwz @ 0x808E7A08
    return;
}