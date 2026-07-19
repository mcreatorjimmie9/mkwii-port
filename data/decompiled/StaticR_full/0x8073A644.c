/* Function at 0x8073A644, size=272 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8073A644(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -112(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x8073A64C
    /* lfs f0, 0(r4) */ // 0x8073A658
    *(0x6c + r1) = r31; // stw @ 0x8073A660
    r31 = r3;
    *(0x68 + r1) = r30; // stw @ 0x8073A668
    /* lfs f1, 0x74(r3) */ // 0x8073A66C
    r3 = r3 + 0x6f4; // 0x8073A670
    /* fneg f1, f1 */ // 0x8073A674
    /* stfs f0, 0x20(r1) */ // 0x8073A678
    /* stfs f1, 0x24(r1) */ // 0x8073A67C
    /* stfs f0, 0x28(r1) */ // 0x8073A680
    FUN_80743D20(r3); // bl 0x80743D20
    r6 = *(0x6f4 + r31); // lwz @ 0x8073A688
    r0 = *(0x6f8 + r31); // lwz @ 0x8073A690
    r4 = r31 + 0x6d0; // 0x8073A694
    *(0x34 + r1) = r0; // stw @ 0x8073A698
    *(0x30 + r1) = r6; // stw @ 0x8073A6A0
    r6 = *(0x6fc + r31); // lwz @ 0x8073A6A4
    r0 = *(0x700 + r31); // lwz @ 0x8073A6A8
    *(0x3c + r1) = r0; // stw @ 0x8073A6AC
    *(0x38 + r1) = r6; // stw @ 0x8073A6B0
    r6 = *(0x704 + r31); // lwz @ 0x8073A6B4
    r0 = *(0x708 + r31); // lwz @ 0x8073A6B8
    *(0x44 + r1) = r0; // stw @ 0x8073A6BC
    *(0x40 + r1) = r6; // stw @ 0x8073A6C0
    r6 = *(0x70c + r31); // lwz @ 0x8073A6C4
    r0 = *(0x710 + r31); // lwz @ 0x8073A6C8
    *(0x4c + r1) = r0; // stw @ 0x8073A6CC
    *(0x48 + r1) = r6; // stw @ 0x8073A6D0
    r6 = *(0x714 + r31); // lwz @ 0x8073A6D4
    r0 = *(0x718 + r31); // lwz @ 0x8073A6D8
    *(0x54 + r1) = r0; // stw @ 0x8073A6DC
    *(0x50 + r1) = r6; // stw @ 0x8073A6E0
    r6 = *(0x71c + r31); // lwz @ 0x8073A6E4
    r0 = *(0x720 + r31); // lwz @ 0x8073A6E8
    *(0x5c + r1) = r0; // stw @ 0x8073A6EC
    *(0x58 + r1) = r6; // stw @ 0x8073A6F0
    FUN_805A4464(); // bl 0x805A4464
    /* lfs f2, 8(r1) */ // 0x8073A6F8
    /* lfs f1, 0xc(r1) */ // 0x8073A6FC
    /* lfs f0, 0x10(r1) */ // 0x8073A700
    /* stfs f2, 0x3c(r1) */ // 0x8073A704
    /* stfs f1, 0x4c(r1) */ // 0x8073A708
    /* stfs f0, 0x5c(r1) */ // 0x8073A70C
    r30 = *(0x23c + r31); // lwz @ 0x8073A710
    if (!=) goto 0x0x8073a724;
    /* li r0, 0 */ // 0x8073A71C
    /* b 0x8073a798 */ // 0x8073A720
    r3 = r30 + 0x74; // 0x8073A724
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8073a73c;
    /* li r3, 0 */ // 0x8073A734
    /* b 0x8073a740 */ // 0x8073A738
    r3 = *(0xc + r3); // lwz @ 0x8073A73C
    /* li r0, 0 */ // 0x8073A744
    if (==) goto 0x0x8073a754;
    if (!=) goto 0x0x8073a758;
}