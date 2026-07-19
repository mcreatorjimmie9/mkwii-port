/* Function at 0x806286B8, size=144 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806286B8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x806286C8
    r31 = r31 + 0; // 0x806286CC
    *(8 + r1) = r30; // stw @ 0x806286D0
    r30 = r3;
    FUN_8061DF18(); // bl 0x8061DF18
    r4 = *(0x98 + r30); // lwz @ 0x806286DC
    /* lfs f2, 0(r31) */ // 0x806286E0
    /* lfs f1, 0x6c(r4) */ // 0x806286E4
    /* lfs f0, 0x22c(r3) */ // 0x806286E8
    /* .byte 0xfc, 0x01, 0x10, 0x40 */ // 0x806286EC
    if (<=) goto 0x0x806286f8;
    /* fdivs f2, f0, f1 */ // 0x806286F4
    /* lfs f0, 0x9c(r30) */ // 0x806286F8
    /* lfs f1, 4(r31) */ // 0x806286FC
    /* fadds f2, f0, f2 */ // 0x80628700
    /* stfs f2, 0x9c(r30) */ // 0x80628704
    /* .byte 0xfc, 0x02, 0x08, 0x40 */ // 0x80628708
    if (<=) goto 0x0x8062871c;
    /* fsubs f0, f2, f1 */ // 0x80628710
    /* stfs f0, 0x9c(r30) */ // 0x80628714
    /* b 0x80628730 */ // 0x80628718
    /* lfs f0, 8(r31) */ // 0x8062871C
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x80628720
    if (>=) goto 0x0x80628730;
    /* fadds f0, f2, f1 */ // 0x80628728
    /* stfs f0, 0x9c(r30) */ // 0x8062872C
    r0 = *(0x14 + r1); // lwz @ 0x80628730
    r31 = *(0xc + r1); // lwz @ 0x80628734
    r30 = *(8 + r1); // lwz @ 0x80628738
    return;
}