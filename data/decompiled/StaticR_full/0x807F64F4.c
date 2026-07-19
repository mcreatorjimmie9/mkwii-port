/* Function at 0x807F64F4, size=440 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_807F64F4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x58 + r1) = r30; // stw @ 0x807F6508
    *(0x54 + r1) = r29; // stw @ 0x807F650C
    FUN_807F66AC(); // bl 0x807F66AC
    r12 = *(0 + r31); // lwz @ 0x807F6514
    r3 = r31;
    r12 = *(0x100 + r12); // lwz @ 0x807F651C
    /* mtctr r12 */ // 0x807F6520
    /* bctrl  */ // 0x807F6524
    r12 = *(0 + r31); // lwz @ 0x807F6528
    r3 = r31;
    r12 = *(0xf8 + r12); // lwz @ 0x807F6530
    /* mtctr r12 */ // 0x807F6534
    /* bctrl  */ // 0x807F6538
    r0 = *(0xc0 + r31); // lwz @ 0x807F653C
    /* addic. r0, r0, -1 */ // 0x807F6540
    *(0xc0 + r31) = r0; // stw @ 0x807F6544
    if (!=) goto 0x0x807f6690;
    r3 = *(0xd8 + r31); // lwz @ 0x807F654C
    if (<=) goto 0x0x807f656c;
    r0 = r3 + -2; // 0x807F6558
    if (<=) goto 0x0x807f6584;
    if (!=) goto 0x0x807f6600;
    r12 = *(0 + r31); // lwz @ 0x807F656C
    r3 = r31;
    r12 = *(0x104 + r12); // lwz @ 0x807F6574
    /* mtctr r12 */ // 0x807F6578
    /* bctrl  */ // 0x807F657C
    /* b 0x807f6600 */ // 0x807F6580
    r3 = *(8 + r31); // lwz @ 0x807F6584
    /* lis r29, 0 */ // 0x807F6588
    /* lis r30, 0 */ // 0x807F658C
    /* lfs f1, 0(r29) */ // 0x807F6590
    r3 = *(0x28 + r3); // lwz @ 0x807F6594
    /* li r4, 3 */ // 0x807F6598
    /* lfs f2, 0(r30) */ // 0x807F659C
    /* li r5, 1 */ // 0x807F65A0
    FUN_805E73A4(r4, r5); // bl 0x805E73A4
    r3 = *(0xe8 + r31); // lwz @ 0x807F65A8
    /* li r4, 3 */ // 0x807F65AC
    /* lfs f1, 0(r29) */ // 0x807F65B0
    /* li r5, 1 */ // 0x807F65B4
    r3 = *(8 + r3); // lwz @ 0x807F65B8
    /* lfs f2, 0(r30) */ // 0x807F65BC
    r3 = *(0x28 + r3); // lwz @ 0x807F65C0
    FUN_805E73A4(r5); // bl 0x805E73A4
    r3 = *(8 + r31); // lwz @ 0x807F65C8
    /* li r4, 0 */ // 0x807F65CC
    r3 = *(0x28 + r3); // lwz @ 0x807F65D0
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x807F65D8
    r12 = *(8 + r12); // lwz @ 0x807F65DC
    /* mtctr r12 */ // 0x807F65E0
    /* bctrl  */ // 0x807F65E4
    /* fctiwz f0, f1 */ // 0x807F65E8
    /* li r0, 4 */ // 0x807F65EC
    *(0xb0 + r31) = r0; // stw @ 0x807F65F0
    /* stfd f0, 0x48(r1) */ // 0x807F65F4
    r0 = *(0x4c + r1); // lwz @ 0x807F65F8
    *(0xdc + r31) = r0; // stw @ 0x807F65FC
    r3 = r31;
    FUN_808A1BCC(r3); // bl 0x808A1BCC
    r6 = *(0x58 + r31); // lwz @ 0x807F6608
    r0 = *(0x5c + r31); // lwz @ 0x807F6610
    *(0x1c + r1) = r0; // stw @ 0x807F6618
    /* li r5, 2 */ // 0x807F661C
    *(0x18 + r1) = r6; // stw @ 0x807F6620
    r6 = *(0x60 + r31); // lwz @ 0x807F6624
    r0 = *(0x64 + r31); // lwz @ 0x807F6628
    *(0x24 + r1) = r0; // stw @ 0x807F662C
    *(0x20 + r1) = r6; // stw @ 0x807F6630
    r6 = *(0x68 + r31); // lwz @ 0x807F6634
    r0 = *(0x6c + r31); // lwz @ 0x807F6638
    *(0x2c + r1) = r0; // stw @ 0x807F663C
    *(0x28 + r1) = r6; // stw @ 0x807F6640
    r6 = *(0x70 + r31); // lwz @ 0x807F6644
    r0 = *(0x74 + r31); // lwz @ 0x807F6648
    *(0x34 + r1) = r0; // stw @ 0x807F664C
    *(0x30 + r1) = r6; // stw @ 0x807F6650
    r6 = *(0x78 + r31); // lwz @ 0x807F6654
    r0 = *(0x7c + r31); // lwz @ 0x807F6658
    *(0x3c + r1) = r0; // stw @ 0x807F665C
    *(0x38 + r1) = r6; // stw @ 0x807F6660
    r6 = *(0x80 + r31); // lwz @ 0x807F6664
    r0 = *(0x84 + r31); // lwz @ 0x807F6668
    *(0x44 + r1) = r0; // stw @ 0x807F666C
    *(0x40 + r1) = r6; // stw @ 0x807F6670
    FUN_805C70D8(); // bl 0x805C70D8
    /* lfs f0, 8(r1) */ // 0x807F6678
    /* stfs f0, 0xb4(r31) */ // 0x807F667C
    /* lfs f0, 0xc(r1) */ // 0x807F6680
    /* stfs f0, 0xb8(r31) */ // 0x807F6684
    /* lfs f0, 0x10(r1) */ // 0x807F6688
    /* stfs f0, 0xbc(r31) */ // 0x807F668C
    r0 = *(0x64 + r1); // lwz @ 0x807F6690
    r31 = *(0x5c + r1); // lwz @ 0x807F6694
    r30 = *(0x58 + r1); // lwz @ 0x807F6698
    r29 = *(0x54 + r1); // lwz @ 0x807F669C
    return;
}