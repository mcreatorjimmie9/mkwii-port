/* Function at 0x807C5834, size=420 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 5 function(s) */

int FUN_807C5834(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    /* lis r30, 0 */ // 0x807C584C
    r30 = r30 + 0; // 0x807C5850
    *(0x14 + r1) = r29; // stw @ 0x807C5854
    *(0x10 + r1) = r28; // stw @ 0x807C5858
    r0 = *(0x178 + r3); // lwz @ 0x807C585C
    if (<=) goto 0x0x807c59b8;
    r28 = r31;
    /* li r29, 0 */ // 0x807C586C
    /* b 0x807c5890 */ // 0x807C5870
    r3 = *(0xe8 + r28); // lwz @ 0x807C5874
    r12 = *(0 + r3); // lwz @ 0x807C5878
    r12 = *(0x10 + r12); // lwz @ 0x807C587C
    /* mtctr r12 */ // 0x807C5880
    /* bctrl  */ // 0x807C5884
    r28 = r28 + 8; // 0x807C5888
    r29 = r29 + 1; // 0x807C588C
    r0 = *(0x178 + r31); // lwz @ 0x807C5890
    if (<) goto 0x0x807c5874;
    r28 = r31;
    /* li r29, 0 */ // 0x807C58A0
    /* b 0x807c58c4 */ // 0x807C58A4
    r3 = *(0x148 + r28); // lwz @ 0x807C58A8
    r12 = *(0 + r3); // lwz @ 0x807C58AC
    r12 = *(0x10 + r12); // lwz @ 0x807C58B0
    /* mtctr r12 */ // 0x807C58B4
    /* bctrl  */ // 0x807C58B8
    r28 = r28 + 8; // 0x807C58BC
    r29 = r29 + 1; // 0x807C58C0
    r0 = *(0x17c + r31); // lwz @ 0x807C58C4
    if (<) goto 0x0x807c58a8;
    r3 = r31;
    FUN_807C6758(r3); // bl 0x807C6758
    r3 = r31;
    FUN_807C68B8(r3, r3); // bl 0x807C68B8
    r3 = r31;
    FUN_807C6B18(r3, r3, r3); // bl 0x807C6B18
    r4 = *(0xec + r31); // lwz @ 0x807C58E8
    if (==) goto 0x0x807c593c;
    /* lfs f2, 0x20(r4) */ // 0x807C58F4
    r5 = r31 + 8; // 0x807C58F8
    /* lfs f0, 4(r30) */ // 0x807C58FC
    /* li r3, 1 */ // 0x807C5900
    /* stfs f0, 0x24(r4) */ // 0x807C5904
    /* b 0x807c5930 */ // 0x807C5908
    r4 = *(0xec + r5); // lwz @ 0x807C590C
    /* lfs f1, 0x20(r4) */ // 0x807C5910
    /* fsubs f1, f2, f1 */ // 0x807C5914
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807C5918
    if (>=) goto 0x0x807c5924;
    /* fmr f1, f0 */ // 0x807C5920
    /* stfs f1, 0x24(r4) */ // 0x807C5924
    r5 = r5 + 8; // 0x807C5928
    r3 = r3 + 1; // 0x807C592C
    r0 = *(0x178 + r31); // lwz @ 0x807C5930
    if (<) goto 0x0x807c590c;
    r12 = *(0x34 + r31); // lwz @ 0x807C593C
    r3 = r31;
    r12 = *(0xc + r12); // lwz @ 0x807C5944
    /* mtctr r12 */ // 0x807C5948
    /* bctrl  */ // 0x807C594C
    r3 = *(0x190 + r31); // lwz @ 0x807C5950
    r0 = *(0 + r3); // lwz @ 0x807C5954
    if (==) goto 0x0x807c596c;
    if (==) goto 0x0x807c597c;
    /* b 0x807c59ac */ // 0x807C5968
    /* lfs f1, 0(r30) */ // 0x807C596C
    /* stfs f1, 4(r3) */ // 0x807C5970
    FUN_807C76A4(); // bl 0x807C76A4
    /* b 0x807c59ac */ // 0x807C5978
    /* lfs f2, 4(r3) */ // 0x807C597C
    /* lfs f1, 8(r30) */ // 0x807C5980
    /* lfs f0, 4(r30) */ // 0x807C5984
    /* fsubs f1, f2, f1 */ // 0x807C5988
    /* stfs f1, 4(r3) */ // 0x807C598C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807C5990
    if (>=) goto 0x0x807c59a4;
    /* stfs f0, 4(r3) */ // 0x807C5998
    /* li r0, 0 */ // 0x807C599C
    *(0 + r3) = r0; // stw @ 0x807C59A0
    /* lfs f1, 4(r3) */ // 0x807C59A4
    FUN_807C76A4(); // bl 0x807C76A4
    r3 = *(0x180 + r31); // lwz @ 0x807C59AC
    r0 = r3 + 1; // 0x807C59B0
    *(0x180 + r31) = r0; // stw @ 0x807C59B4
    r0 = *(0x24 + r1); // lwz @ 0x807C59B8
    r31 = *(0x1c + r1); // lwz @ 0x807C59BC
    r30 = *(0x18 + r1); // lwz @ 0x807C59C0
    r29 = *(0x14 + r1); // lwz @ 0x807C59C4
    r28 = *(0x10 + r1); // lwz @ 0x807C59C8
    return;
}