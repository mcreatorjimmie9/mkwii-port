/* Function at 0x808F5708, size=316 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_808F5708(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x808F5718
    r31 = r31 + 0; // 0x808F571C
    *(8 + r1) = r30; // stw @ 0x808F5720
    r30 = r3;
    r0 = *(0x6cc + r3); // lwz @ 0x808F5728
    /* lfs f1, 0x6e4(r3) */ // 0x808F572C
    if (==) goto 0x0x808f574c;
    if (==) goto 0x0x808f5758;
    if (==) goto 0x0x808f5764;
    /* b 0x808f576c */ // 0x808F5748
    /* lfs f0, 0x40c(r31) */ // 0x808F574C
    /* fmuls f1, f1, f0 */ // 0x808F5750
    /* b 0x808f576c */ // 0x808F5754
    /* lfs f0, 0x41c(r31) */ // 0x808F5758
    /* fmuls f1, f1, f0 */ // 0x808F575C
    /* b 0x808f576c */ // 0x808F5760
    /* lfs f0, 0x414(r31) */ // 0x808F5764
    /* fmuls f1, f1, f0 */ // 0x808F5768
    /* lfs f0, 0x448(r31) */ // 0x808F576C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x808F5770
    if (>=) goto 0x0x808f5780;
    /* fmr f1, f0 */ // 0x808F5778
    /* b 0x808f5790 */ // 0x808F577C
    /* lfs f0, 0x458(r31) */ // 0x808F5780
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x808F5784
    if (<=) goto 0x0x808f5790;
    /* fmr f1, f0 */ // 0x808F578C
    r3 = *(0 + r4); // lwz @ 0x808F5790
    if (==) goto 0x0x808f57a0;
    FUN_805E3430(); // bl 0x805E3430
    r0 = *(0x6cc + r30); // lwz @ 0x808F57A0
    if (==) goto 0x0x808f57b8;
    if (==) goto 0x0x808f57f4;
    /* b 0x808f582c */ // 0x808F57B4
    r3 = *(0x138 + r30); // lwz @ 0x808F57B8
    /* li r4, 0 */ // 0x808F57BC
    /* lfs f1, 0x40c(r31) */ // 0x808F57C0
    /* lfs f0, 0x6e4(r30) */ // 0x808F57C4
    r12 = *(8 + r3); // lwz @ 0x808F57C8
    /* fmuls f1, f1, f0 */ // 0x808F57CC
    /* lfs f0, 0x410(r31) */ // 0x808F57D0
    r12 = *(0x14 + r12); // lwz @ 0x808F57D4
    /* fadds f1, f0, f1 */ // 0x808F57D8
    /* mtctr r12 */ // 0x808F57DC
    /* bctrl  */ // 0x808F57E0
    /* li r0, 0 */ // 0x808F57E4
    *(0x6f0 + r30) = r0; // stw @ 0x808F57E8
    *(0x6f4 + r30) = r0; // stw @ 0x808F57EC
    /* b 0x808f582c */ // 0x808F57F0
    r3 = *(0x138 + r30); // lwz @ 0x808F57F4
    /* li r4, 0 */ // 0x808F57F8
    /* lfs f1, 0x414(r31) */ // 0x808F57FC
    /* lfs f0, 0x6e4(r30) */ // 0x808F5800
    r12 = *(8 + r3); // lwz @ 0x808F5804
    /* fmuls f1, f1, f0 */ // 0x808F5808
    /* lfs f0, 0x418(r31) */ // 0x808F580C
    r12 = *(0x14 + r12); // lwz @ 0x808F5810
    /* fadds f1, f0, f1 */ // 0x808F5814
    /* mtctr r12 */ // 0x808F5818
    /* bctrl  */ // 0x808F581C
    /* li r0, 0 */ // 0x808F5820
    *(0x6f0 + r30) = r0; // stw @ 0x808F5824
    *(0x6f4 + r30) = r0; // stw @ 0x808F5828
    r0 = *(0x14 + r1); // lwz @ 0x808F582C
    r31 = *(0xc + r1); // lwz @ 0x808F5830
    r30 = *(8 + r1); // lwz @ 0x808F5834
    return;
}