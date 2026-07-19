/* Function at 0x806A6468, size=1620 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 18 function(s) */

int FUN_806A6468(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r4, 0 */ // 0x806A6470
    /* lis r31, 0 */ // 0x806A647C
    r31 = r31 + 0; // 0x806A6480
    *(0x18 + r1) = r30; // stw @ 0x806A6484
    *(0x14 + r1) = r29; // stw @ 0x806A6488
    *(0x10 + r1) = r28; // stw @ 0x806A648C
    r28 = r3;
    r4 = *(0 + r4); // lwz @ 0x806A6494
    r3 = *(0 + r4); // lwz @ 0x806A6498
    r30 = *(0x248 + r3); // lwz @ 0x806A649C
    if (!=) goto 0x0x806a64b0;
    /* li r30, 0 */ // 0x806A64A8
    /* b 0x806a6504 */ // 0x806A64AC
    /* lis r29, 0 */ // 0x806A64B0
    r29 = r29 + 0; // 0x806A64B4
    if (==) goto 0x0x806a6500;
    r12 = *(0 + r30); // lwz @ 0x806A64BC
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806A64C4
    /* mtctr r12 */ // 0x806A64C8
    /* bctrl  */ // 0x806A64CC
    /* b 0x806a64e8 */ // 0x806A64D0
    if (!=) goto 0x0x806a64e4;
    /* li r0, 1 */ // 0x806A64DC
    /* b 0x806a64f4 */ // 0x806A64E0
    r3 = *(0 + r3); // lwz @ 0x806A64E4
    if (!=) goto 0x0x806a64d4;
    /* li r0, 0 */ // 0x806A64F0
    if (==) goto 0x0x806a6500;
    /* b 0x806a6504 */ // 0x806A64FC
    /* li r30, 0 */ // 0x806A6500
    r0 = *(8 + r28); // lwz @ 0x806A6504
    if (!=) goto 0x0x806a6af8;
    r0 = *(0x16a0 + r28); // lwz @ 0x806A6510
    if (==) goto 0x0x806a6760;
    /* lis r3, 0 */ // 0x806A651C
    /* li r0, 0 */ // 0x806A6520
    r3 = *(0 + r3); // lwz @ 0x806A6524
    r3 = *(0 + r3); // lwz @ 0x806A6528
    r6 = *(0 + r3); // lwz @ 0x806A652C
    if (<) goto 0x0x806a6540;
    if (<=) goto 0x0x806a6594;
    if (<) goto 0x0x806a6550;
    if (<=) goto 0x0x806a6560;
    if (<) goto 0x0x806a65e8;
    if (>) goto 0x0x806a65e8;
    /* lis r4, 0 */ // 0x806A6560
    /* li r3, 1 */ // 0x806A6564
    r4 = *(0 + r4); // lwz @ 0x806A6568
    r0 = *(0x291c + r4); // lwz @ 0x806A656C
    /* mulli r0, r0, 0x58 */ // 0x806A6570
    r4 = r4 + r0; // 0x806A6574
    r4 = *(0x40 + r4); // lwz @ 0x806A6578
    /* subfic r0, r4, 1 */ // 0x806A657C
    /* orc r3, r3, r4 */ // 0x806A6580
    /* srwi r0, r0, 1 */ // 0x806A6584
    /* subf r0, r0, r3 */ // 0x806A6588
    /* srwi r0, r0, 0x1f */ // 0x806A658C
    /* b 0x806a65e8 */ // 0x806A6590
    /* lis r3, 0 */ // 0x806A6594
    /* li r0, 1 */ // 0x806A6598
    r8 = *(0 + r3); // lwz @ 0x806A659C
    /* li r5, 1 */ // 0x806A65A0
    r3 = *(0x291c + r8); // lwz @ 0x806A65A4
    /* mulli r7, r3, 0x58 */ // 0x806A65A8
    r4 = r8 + r7; // 0x806A65AC
    r3 = *(0x40 + r4); // lwz @ 0x806A65B0
    if (<=) goto 0x0x806a65cc;
    r3 = *(0x48 + r4); // lwz @ 0x806A65BC
    /* clrlwi. r3, r3, 0x1f */ // 0x806A65C0
    if (==) goto 0x0x806a65cc;
    /* li r5, 0 */ // 0x806A65C8
    if (!=) goto 0x0x806a65e8;
    r3 = r8 + r7; // 0x806A65D4
    r3 = *(0x5a + r3); // lbz @ 0x806A65D8
    if (!=) goto 0x0x806a65e8;
    /* li r0, 0 */ // 0x806A65E4
    /* li r7, 0 */ // 0x806A65EC
    if (<) goto 0x0x806a65fc;
    if (<=) goto 0x0x806a660c;
    if (<) goto 0x0x806a671c;
    if (>) goto 0x0x806a671c;
    /* lis r4, 0 */ // 0x806A660C
    /* li r3, 6 */ // 0x806A6610
    r6 = r30;
    r7 = *(0 + r4); // lwz @ 0x806A6618
    /* li r8, 0 */ // 0x806A661C
    /* li r9, 0 */ // 0x806A6620
    /* li r10, 0 */ // 0x806A6624
    /* li r5, 1 */ // 0x806A6628
    /* mtctr r3 */ // 0x806A662C
    /* li r4, 0 */ // 0x806A6634
    if (<) goto 0x0x806a664c;
    r3 = *(0x284 + r30); // lwz @ 0x806A663C
    if (>=) goto 0x0x806a664c;
    /* li r4, 1 */ // 0x806A6648
    if (==) goto 0x0x806a6694;
    r3 = *(0x291c + r7); // lwz @ 0x806A6654
    r4 = *(0x1f4 + r6); // lbz @ 0x806A6658
    /* mulli r3, r3, 0x58 */ // 0x806A665C
    r4 = r5 << r4; // slw
    r3 = r7 + r3; // 0x806A6664
    r3 = *(0x48 + r3); // lwz @ 0x806A6668
    /* and. r3, r4, r3 */ // 0x806A666C
    if (==) goto 0x0x806a6694;
    r3 = *(0x1f8 + r6); // lwz @ 0x806A6674
    if (!=) goto 0x0x806a6688;
    /* li r8, 1 */ // 0x806A6680
    /* b 0x806a6694 */ // 0x806A6684
    if (!=) goto 0x0x806a6694;
    /* li r9, 1 */ // 0x806A6690
    /* addic. r10, r10, 1 */ // 0x806A6694
    /* li r4, 0 */ // 0x806A6698
    if (<) goto 0x0x806a66b0;
    r3 = *(0x284 + r30); // lwz @ 0x806A66A0
    if (>=) goto 0x0x806a66b0;
    /* li r4, 1 */ // 0x806A66AC
    if (==) goto 0x0x806a66f8;
    r3 = *(0x291c + r7); // lwz @ 0x806A66B8
    r4 = *(0x200 + r6); // lbz @ 0x806A66BC
    /* mulli r3, r3, 0x58 */ // 0x806A66C0
    r4 = r5 << r4; // slw
    r3 = r7 + r3; // 0x806A66C8
    r3 = *(0x48 + r3); // lwz @ 0x806A66CC
    /* and. r3, r4, r3 */ // 0x806A66D0
    if (==) goto 0x0x806a66f8;
    r3 = *(0x204 + r6); // lwz @ 0x806A66D8
    if (!=) goto 0x0x806a66ec;
    /* li r8, 1 */ // 0x806A66E4
    /* b 0x806a66f8 */ // 0x806A66E8
    if (!=) goto 0x0x806a66f8;
    /* li r9, 1 */ // 0x806A66F4
    r6 = r6 + 0x18; // 0x806A66F8
    if (counter-- != 0) goto 0x0x806a6630;
    /* li r7, 0 */ // 0x806A6708
    if (==) goto 0x0x806a6718;
    if (!=) goto 0x0x806a671c;
    /* li r7, 1 */ // 0x806A6718
    r5 = *(0x20 + r28); // lwz @ 0x806A671C
    /* li r0, 0x2a30 */ // 0x806A6724
    /* li r3, 0 */ // 0x806A6728
    r4 = r5 >> 0x1f; // srawi
    /* subfc r0, r0, r5 */ // 0x806A6730
    /* adde r0, r4, r3 */ // 0x806A6734
    if (!=) goto 0x0x806a674c;
    if (!=) goto 0x0x806a674c;
    if (==) goto 0x0x806a6760;
    /* lis r3, 0 */ // 0x806A674C
    r3 = *(0 + r3); // lwz @ 0x806A6750
    FUN_806E64B0(r3); // bl 0x806E64B0
    /* li r0, 3 */ // 0x806A6758
    *(0x16a0 + r28) = r0; // stw @ 0x806A675C
    r0 = *(0x16a0 + r28); // lwz @ 0x806A6760
    if (==) goto 0x0x806a6788;
    if (==) goto 0x0x806a67e8;
    if (==) goto 0x0x806a6954;
    if (==) goto 0x0x806a6a28;
    /* b 0x806a6af8 */ // 0x806A6784
    /* lis r3, 0x6666 */ // 0x806A6788
    r4 = *(0x1c + r28); // lwz @ 0x806A678C
    r0 = r3 + 0x6667; // 0x806A6790
    /* mulhw r0, r0, r4 */ // 0x806A6794
    r0 = r0 >> 1; // srawi
    /* srwi r3, r0, 0x1f */ // 0x806A679C
    r0 = r0 + r3; // 0x806A67A0
    /* mulli r0, r0, 5 */ // 0x806A67A4
    /* subf. r0, r0, r4 */ // 0x806A67A8
    if (!=) goto 0x0x806a67d4;
    /* li r29, 0 */ // 0x806A67B0
    r3 = r28;
    r4 = r29;
    FUN_806A6C0C(r3, r4); // bl 0x806A6C0C
    if (!=) goto 0x0x806a67d4;
    r29 = r29 + 1; // 0x806A67C8
    if (<) goto 0x0x806a67b4;
    r3 = r28;
    FUN_806A6E68(r3); // bl 0x806A6E68
    r3 = r28;
    FUN_806A70B0(r3, r3); // bl 0x806A70B0
    /* b 0x806a6af8 */ // 0x806A67E4
    /* lfs f2, 0x16b8(r28) */ // 0x806A67E8
    /* lfs f1, 0x16b4(r28) */ // 0x806A67EC
    /* lfs f0, 0x10c(r31) */ // 0x806A67F0
    /* fadds f2, f2, f1 */ // 0x806A67F4
    r3 = *(0x1698 + r28); // lwz @ 0x806A67F8
    /* fsubs f3, f1, f0 */ // 0x806A67FC
    /* lfs f0, 0x110(r31) */ // 0x806A6800
    r5 = *(0x16a8 + r28); // lwz @ 0x806A6804
    /* fctiwz f1, f2 */ // 0x806A6808
    /* .byte 0xfc, 0x03, 0x00, 0x40 */ // 0x806A680C
    /* stfs f2, 0x16b8(r28) */ // 0x806A6810
    /* stfd f1, 8(r1) */ // 0x806A6814
    r4 = *(0xc + r1); // lwz @ 0x806A6818
    r0 = r4 / r3; // 0x806A681C
    r0 = r0 * r3; // 0x806A6820
    /* subf r0, r0, r4 */ // 0x806A6824
    *(0x16a8 + r28) = r0; // stw @ 0x806A6828
    if (<=) goto 0x0x806a6834;
    /* b 0x806a6838 */ // 0x806A6830
    /* fmr f3, f0 */ // 0x806A6834
    r0 = *(0x16a8 + r28); // lwz @ 0x806A6838
    /* stfs f3, 0x16b4(r28) */ // 0x806A683C
    if (==) goto 0x0x806a6af8;
    /* mulli r0, r5, 0x178 */ // 0x806A6848
    /* li r4, 4 */ // 0x806A684C
    r3 = r28 + r0; // 0x806A6850
    r3 = r3 + 0x560; // 0x806A6854
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lfs f1, 0x100(r31) */ // 0x806A685C
    /* li r4, 0 */ // 0x806A6860
    FUN_8069F59C(r3, r4); // bl 0x8069F59C
    r0 = *(0x16a8 + r28); // lwz @ 0x806A6868
    /* li r4, 4 */ // 0x806A686C
    /* mulli r0, r0, 0x178 */ // 0x806A6870
    r3 = r28 + r0; // 0x806A6874
    r29 = r3 + 0x4c8; // 0x806A6878
    r3 = r29 + 0x98; // 0x806A687C
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lfs f1, 0x100(r31) */ // 0x806A6884
    /* li r4, 1 */ // 0x806A6888
    FUN_8069F59C(r3, r4); // bl 0x8069F59C
    r3 = r29;
    /* li r4, 0x45 */ // 0x806A6894
    /* li r5, -1 */ // 0x806A6898
    FUN_806A03CC(r4, r3, r4, r5); // bl 0x806A03CC
    /* lfs f1, 0x16b4(r28) */ // 0x806A68A0
    /* lfs f0, 0x114(r31) */ // 0x806A68A4
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x806A68A8
    if (>=) goto 0x0x806a6af8;
    r3 = *(0x16a8 + r28); // lwz @ 0x806A68B0
    r0 = *(0x16ac + r28); // lwz @ 0x806A68B4
    if (!=) goto 0x0x806a6af8;
    /* mulli r0, r3, 0x178 */ // 0x806A68C0
    r4 = *(0x16b0 + r28); // lwz @ 0x806A68C4
    /* li r5, 0 */ // 0x806A68C8
    r3 = r28 + r0; // 0x806A68CC
    r29 = r3 + 0x4c8; // 0x806A68D0
    r3 = r29;
    FUN_806A0A34(r5, r3); // bl 0x806A0A34
    r3 = r29 + 0x98; // 0x806A68DC
    /* li r4, 4 */ // 0x806A68E0
    FUN_8069F4A0(r3, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0x100(r31) */ // 0x806A68E8
    /* li r4, 2 */ // 0x806A68EC
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r3 = r29;
    /* li r4, 0x46 */ // 0x806A68F8
    /* li r5, -1 */ // 0x806A68FC
    FUN_806A03CC(r4, r3, r4, r5); // bl 0x806A03CC
    r4 = *(0x169c + r28); // lwz @ 0x806A6904
    /* li r3, 0xb4 */ // 0x806A6908
    /* li r0, 2 */ // 0x806A690C
    *(0x16bc + r28) = r3; // stw @ 0x806A6910
    *(0x16a0 + r28) = r0; // stw @ 0x806A6918
    if (==) goto 0x0x806a692c;
    if (==) goto 0x0x806a6940;
    /* b 0x806a6af8 */ // 0x806A6928
    r3 = r28 + 0x1e0; // 0x806A692C
    /* li r4, 0x110a */ // 0x806A6930
    /* li r5, 0 */ // 0x806A6934
    FUN_808D5A00(r3, r4, r5); // bl 0x808D5A00
    /* b 0x806a6af8 */ // 0x806A693C
    r3 = r28 + 0x1e0; // 0x806A6940
    /* li r4, 0x110b */ // 0x806A6944
    /* li r5, 0 */ // 0x806A6948
    FUN_808D5A00(r3, r4, r5); // bl 0x808D5A00
    /* b 0x806a6af8 */ // 0x806A6950
    r3 = *(0x16bc + r28); // lwz @ 0x806A6954
    /* addic. r0, r3, -1 */ // 0x806A6958
    *(0x16bc + r28) = r0; // stw @ 0x806A695C
    if (>=) goto 0x0x806a6af8;
    r3 = r30;
    FUN_806B1BB0(r3); // bl 0x806B1BB0
    r3 = r30;
    FUN_806B2358(r3, r3); // bl 0x806B2358
    /* lis r3, 0 */ // 0x806A6974
    r3 = *(0 + r3); // lwz @ 0x806A6978
    r3 = *(0 + r3); // lwz @ 0x806A697C
    r3 = *(0 + r3); // lwz @ 0x806A6980
    r0 = r3 + -0x58; // 0x806A6984
    if (>) goto 0x0x806a6a04;
    /* lis r3, 0 */ // 0x806A6990
    /* slwi r0, r0, 2 */ // 0x806A6994
    r3 = r3 + 0; // 0x806A6998
    /* lwzx r3, r3, r0 */ // 0x806A699C
    /* mtctr r3 */ // 0x806A69A0
    /* bctr  */ // 0x806A69A4
    /* li r29, 0x68 */ // 0x806A69A8
    /* b 0x806a6a04 */ // 0x806A69AC
    /* li r29, 0x6c */ // 0x806A69B0
    /* b 0x806a6a04 */ // 0x806A69B4
    /* li r29, 0x69 */ // 0x806A69B8
    /* b 0x806a6a04 */ // 0x806A69BC
    /* li r29, 0x6d */ // 0x806A69C0
    /* b 0x806a6a04 */ // 0x806A69C4
    /* li r29, 0x70 */ // 0x806A69C8
    /* b 0x806a6a04 */ // 0x806A69CC
    /* li r29, 0x71 */ // 0x806A69D0
    /* b 0x806a6a04 */ // 0x806A69D4
    /* li r29, 0x72 */ // 0x806A69D8
    /* b 0x806a6a04 */ // 0x806A69DC
    /* li r29, 0x73 */ // 0x806A69E0
    /* b 0x806a6a04 */ // 0x806A69E4
    /* li r29, 0x74 */ // 0x806A69E8
    /* b 0x806a6a04 */ // 0x806A69EC
    /* li r29, 0x75 */ // 0x806A69F0
    /* b 0x806a6a04 */ // 0x806A69F4
    /* li r29, 0x76 */ // 0x806A69F8
    /* b 0x806a6a04 */ // 0x806A69FC
    /* li r29, 0x77 */ // 0x806A6A00
    r12 = *(0 + r28); // lwz @ 0x806A6A04
    r3 = r28;
    r4 = r29;
    /* li r5, 0 */ // 0x806A6A10
    r12 = *(0x1c + r12); // lwz @ 0x806A6A14
    /* lfs f1, 0x100(r31) */ // 0x806A6A18
    /* mtctr r12 */ // 0x806A6A1C
    /* bctrl  */ // 0x806A6A20
    /* b 0x806a6af8 */ // 0x806A6A24
    /* lis r3, 0 */ // 0x806A6A28
    r3 = *(0 + r3); // lwz @ 0x806A6A2C
    FUN_806E6A88(r3); // bl 0x806E6A88
    if (!=) goto 0x0x806a6af8;
    /* lis r3, 0 */ // 0x806A6A3C
    r3 = *(0 + r3); // lwz @ 0x806A6A40
    r3 = *(0 + r3); // lwz @ 0x806A6A44
    r30 = *(0x14c + r3); // lwz @ 0x806A6A48
    if (!=) goto 0x0x806a6a5c;
    /* li r30, 0 */ // 0x806A6A54
    /* b 0x806a6ab0 */ // 0x806A6A58
    /* lis r29, 0 */ // 0x806A6A5C
    r29 = r29 + 0; // 0x806A6A60
    if (==) goto 0x0x806a6aac;
    r12 = *(0 + r30); // lwz @ 0x806A6A68
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806A6A70
    /* mtctr r12 */ // 0x806A6A74
    /* bctrl  */ // 0x806A6A78
    /* b 0x806a6a94 */ // 0x806A6A7C
    if (!=) goto 0x0x806a6a90;
    /* li r0, 1 */ // 0x806A6A88
    /* b 0x806a6aa0 */ // 0x806A6A8C
    r3 = *(0 + r3); // lwz @ 0x806A6A90
    if (!=) goto 0x0x806a6a80;
    /* li r0, 0 */ // 0x806A6A9C
    if (==) goto 0x0x806a6aac;
    /* b 0x806a6ab0 */ // 0x806A6AA8
    /* li r30, 0 */ // 0x806A6AAC
    r12 = *(0 + r30); // lwz @ 0x806A6AB0
    r3 = r30;
    r12 = *(0x64 + r12); // lwz @ 0x806A6AB8
}