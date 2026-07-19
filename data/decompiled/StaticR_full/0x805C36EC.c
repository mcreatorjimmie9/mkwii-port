/* Function at 0x805C36EC, size=252 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_805C36EC(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x805C36F4
    *(0x1c + r1) = r31; // stw @ 0x805C36FC
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x805C3704
    /* li r30, 0 */ // 0x805C3708
    *(0x22 + r3) = r30; // sth @ 0x805C370C
    r3 = *(0 + r4); // lwz @ 0x805C3710
    /* li r4, 0xa */ // 0x805C3714
    r3 = *(8 + r3); // lwz @ 0x805C3718
    FUN_805E364C(r4); // bl 0x805E364C
    r3 = r3 + 1; // 0x805C3720
    /* li r0, 1 */ // 0x805C3724
    r0 = r0 << r3; // slw
    *(0x4c + r31) = r0; // stw @ 0x805C372C
    /* lis r3, 0 */ // 0x805C3730
    *(4 + r31) = r0; // stw @ 0x805C3734
    r4 = *(0 + r3); // lwz @ 0x805C3738
    r3 = *(0x20 + r4); // lwz @ 0x805C373C
    if (==) goto 0x0x805c374c;
    r30 = *(4 + r3); // lhz @ 0x805C3748
    /* neg r0, r30 */ // 0x805C374C
    r0 = r0 | r30; // 0x805C3750
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x805C3754
    if (==) goto 0x0x805c3780;
    r3 = *(0x1c + r4); // lwz @ 0x805C375C
    if (==) goto 0x0x805c3770;
    r3 = *(4 + r3); // lhz @ 0x805C3768
    /* b 0x805c3774 */ // 0x805C376C
    /* li r3, 0 */ // 0x805C3770
    /* neg r0, r3 */ // 0x805C3774
    r0 = r0 | r3; // 0x805C3778
    /* srwi r0, r0, 0x1f */ // 0x805C377C
    if (==) goto 0x0x805c37f4;
    /* lis r3, 0 */ // 0x805C3788
    r4 = *(8 + r31); // lbz @ 0x805C378C
    r3 = *(0 + r3); // lwz @ 0x805C3790
    FUN_8061D97C(r3); // bl 0x8061D97C
    FUN_8061DA88(r3); // bl 0x8061DA88
    /* lis r4, 0 */ // 0x805C379C
    r5 = r3;
    r3 = *(0 + r4); // lwz @ 0x805C37A4
    r4 = *(8 + r31); // lbz @ 0x805C37AC
    /* li r6, 0 */ // 0x805C37B0
    /* li r8, 1 */ // 0x805C37B4
    FUN_805A112C(r7, r6, r8); // bl 0x805A112C
    /* extsh. r0, r3 */ // 0x805C37BC
    if (<) goto 0x0x805c37cc;
    *(0xa + r31) = r3; // sth @ 0x805C37C4
    /* b 0x805c37d4 */ // 0x805C37C8
    /* li r0, 0 */ // 0x805C37CC
    *(0xa + r31) = r0; // sth @ 0x805C37D0
    /* lis r3, 0 */ // 0x805C37D4
    r4 = *(0xa + r31); // lhz @ 0x805C37D8
    r3 = *(0 + r3); // lwz @ 0x805C37DC
    FUN_805A5850(r3); // bl 0x805A5850
    r3 = *(0 + r3); // lwz @ 0x805C37E4
}