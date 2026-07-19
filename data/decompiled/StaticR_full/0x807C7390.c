/* Function at 0x807C7390, size=392 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_807C7390(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x807C73A4
    *(0x14 + r1) = r29; // stw @ 0x807C73A8
    r3 = *(0x168 + r3); // lwz @ 0x807C73AC
    r12 = *(0 + r3); // lwz @ 0x807C73B0
    r12 = *(0x28 + r12); // lwz @ 0x807C73B4
    /* mtctr r12 */ // 0x807C73B8
    /* bctrl  */ // 0x807C73BC
    r3 = *(0x16c + r31); // lwz @ 0x807C73C0
    r12 = *(0 + r3); // lwz @ 0x807C73C4
    r12 = *(0x28 + r12); // lwz @ 0x807C73C8
    /* mtctr r12 */ // 0x807C73CC
    /* bctrl  */ // 0x807C73D0
    r3 = *(0x170 + r31); // lwz @ 0x807C73D4
    r12 = *(0 + r3); // lwz @ 0x807C73D8
    r12 = *(0x28 + r12); // lwz @ 0x807C73DC
    /* mtctr r12 */ // 0x807C73E0
    /* bctrl  */ // 0x807C73E4
    r0 = *(0x174 + r31); // lwz @ 0x807C73E8
    if (==) goto 0x0x807c7400;
    if (==) goto 0x0x807c748c;
    /* b 0x807c74fc */ // 0x807C73FC
    r3 = *(0x180 + r31); // lwz @ 0x807C7400
    r0 = *(0x184 + r31); // lwz @ 0x807C7404
    if (<=) goto 0x0x807c7434;
    r3 = *(0x190 + r31); // lwz @ 0x807C7410
    r0 = *(0 + r3); // lwz @ 0x807C7414
    if (!=) goto 0x0x807c7428;
    /* li r0, 2 */ // 0x807C7420
    *(0 + r3) = r0; // stw @ 0x807C7424
    r3 = *(0x174 + r31); // lwz @ 0x807C7428
    r0 = r3 + 1; // 0x807C742C
    *(0x174 + r31) = r0; // stw @ 0x807C7430
    r4 = *(0x188 + r31); // lwz @ 0x807C7434
    if (<=) goto 0x0x807c74fc;
    r3 = *(0x180 + r31); // lwz @ 0x807C7440
    r0 = r3 / r4; // 0x807C7444
    r0 = r0 * r4; // 0x807C7448
    /* subf. r0, r0, r3 */ // 0x807C744C
    if (!=) goto 0x0x807c74fc;
    r30 = r31;
    /* li r29, 0 */ // 0x807C7458
    /* b 0x807c747c */ // 0x807C745C
    r3 = *(0x148 + r30); // lwz @ 0x807C7460
    /* li r4, 1 */ // 0x807C7464
    r3 = *(4 + r3); // lwz @ 0x807C7468
    r3 = *(0 + r3); // lwz @ 0x807C746C
    FUN_8061F114(r4); // bl 0x8061F114
    r30 = r30 + 8; // 0x807C7474
    r29 = r29 + 1; // 0x807C7478
    r0 = *(0x17c + r31); // lwz @ 0x807C747C
    if (<) goto 0x0x807c7460;
    /* b 0x807c74fc */ // 0x807C7488
    /* lis r4, 0 */ // 0x807C748C
    /* lis r3, 0 */ // 0x807C7490
    /* lfs f1, 0(r4) */ // 0x807C7494
    r4 = r31;
    /* lfs f0, 0(r3) */ // 0x807C749C
    /* li r5, 0 */ // 0x807C74A0
    /* b 0x807c74d0 */ // 0x807C74A4
    r3 = *(0xe8 + r4); // lwz @ 0x807C74A8
    r3 = *(0xc + r3); // lwz @ 0x807C74AC
    /* lfs f2, 0x10(r3) */ // 0x807C74B0
    /* fsubs f2, f2, f1 */ // 0x807C74B4
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x807C74B8
    if (>=) goto 0x0x807c74c4;
    /* fmr f2, f0 */ // 0x807C74C0
    /* stfs f2, 0x10(r3) */ // 0x807C74C4
    r4 = r4 + 8; // 0x807C74C8
    r5 = r5 + 1; // 0x807C74CC
    r0 = *(0x178 + r31); // lwz @ 0x807C74D0
    if (<) goto 0x0x807c74a8;
    r3 = *(0x184 + r31); // lwz @ 0x807C74DC
    r4 = *(0x180 + r31); // lwz @ 0x807C74E0
    r0 = r3 + 0x4b0; // 0x807C74E4
    if (<=) goto 0x0x807c74fc;
    r3 = r31;
    r4 = r31 + 0x90; // 0x807C74F4
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    r0 = *(0x24 + r1); // lwz @ 0x807C74FC
    r31 = *(0x1c + r1); // lwz @ 0x807C7500
    r30 = *(0x18 + r1); // lwz @ 0x807C7504
    r29 = *(0x14 + r1); // lwz @ 0x807C7508
    return;
}