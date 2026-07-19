/* Function at 0x8065C630, size=364 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 16 function(s) */

int FUN_8065C630(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r0 = r4 + -0x15; // 0x8065C63C
    *(0xc + r1) = r31; // stw @ 0x8065C644
    *(8 + r1) = r30; // stw @ 0x8065C648
    r30 = r3;
    if (<=) goto 0x0x8065c664;
    if (!=) goto 0x0x8065c66c;
    /* li r31, 3 */ // 0x8065C65C
    /* b 0x8065c670 */ // 0x8065C660
    /* li r31, 2 */ // 0x8065C664
    /* b 0x8065c670 */ // 0x8065C668
    /* li r31, 0 */ // 0x8065C66C
    /* li r4, 4 */ // 0x8065C670
    r3 = r3 + 0x98; // 0x8065C674
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x8065C67C
    if (==) goto 0x0x8065c784;
    if (==) goto 0x0x8065c6a4;
    if (==) goto 0x0x8065c6f0;
    if (==) goto 0x0x8065c73c;
    /* b 0x8065c784 */ // 0x8065C6A0
    r3 = r30 + 0x98; // 0x8065C6A4
    /* li r4, 4 */ // 0x8065C6A8
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x8065C6B0
    /* li r4, 0 */ // 0x8065C6B4
    /* lfs f1, 0(r31) */ // 0x8065C6B8
    FUN_8069F59C(r4, r4); // bl 0x8069F59C
    r3 = r30 + 0x98; // 0x8065C6C0
    /* li r4, 5 */ // 0x8065C6C4
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x8065C6CC
    /* li r4, 0 */ // 0x8065C6D0
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    /* li r0, 1 */ // 0x8065C6D8
    *(0x80 + r30) = r0; // stb @ 0x8065C6DC
    r3 = r30;
    /* li r4, 0 */ // 0x8065C6E4
    FUN_80649FD0(r3, r4); // bl 0x80649FD0
    /* b 0x8065c784 */ // 0x8065C6EC
    r3 = r30 + 0x98; // 0x8065C6F0
    /* li r4, 4 */ // 0x8065C6F4
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x8065C6FC
    /* li r4, 2 */ // 0x8065C700
    /* lfs f1, 0(r31) */ // 0x8065C704
    FUN_8069F59C(r4, r4); // bl 0x8069F59C
    r3 = r30 + 0x98; // 0x8065C70C
    /* li r4, 5 */ // 0x8065C710
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x8065C718
    /* li r4, 2 */ // 0x8065C71C
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    /* li r0, 0 */ // 0x8065C724
    *(0x80 + r30) = r0; // stb @ 0x8065C728
    r3 = r30;
    /* li r4, 1 */ // 0x8065C730
    FUN_80649FD0(r3, r4); // bl 0x80649FD0
    /* b 0x8065c784 */ // 0x8065C738
    r3 = r30 + 0x98; // 0x8065C73C
    /* li r4, 4 */ // 0x8065C740
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x8065C748
    /* li r4, 3 */ // 0x8065C74C
    /* lfs f1, 0(r31) */ // 0x8065C750
    FUN_8069F59C(r4, r4); // bl 0x8069F59C
    r3 = r30 + 0x98; // 0x8065C758
    /* li r4, 5 */ // 0x8065C75C
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x8065C764
    /* li r4, 3 */ // 0x8065C768
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    /* li r0, 0 */ // 0x8065C770
    *(0x80 + r30) = r0; // stb @ 0x8065C774
    r3 = r30;
    /* li r4, 1 */ // 0x8065C77C
    FUN_80649FD0(r3, r4); // bl 0x80649FD0
    r0 = *(0x14 + r1); // lwz @ 0x8065C784
    r31 = *(0xc + r1); // lwz @ 0x8065C788
    r30 = *(8 + r1); // lwz @ 0x8065C78C
    return;
}