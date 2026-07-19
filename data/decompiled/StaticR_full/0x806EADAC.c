/* Function at 0x806EADAC, size=204 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_806EADAC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r31, 1 */ // 0x806EADBC
    /* lis r30, 0 */ // 0x806EADC4
    *(0x14 + r1) = r29; // stw @ 0x806EADC8
    r29 = r3 + 0x38; // 0x806EADCC
    *(0x10 + r1) = r28; // stw @ 0x806EADD0
    /* li r28, 0 */ // 0x806EADD4
    r5 = *(0 + r30); // lwz @ 0x806EADD8
    /* clrlwi r0, r28, 0x18 */ // 0x806EADDC
    r3 = r31 << r0; // slw
    r0 = *(0x291c + r5); // lwz @ 0x806EADE4
    /* mulli r0, r0, 0x58 */ // 0x806EADE8
    r4 = r5 + r0; // 0x806EADEC
    r0 = *(0x48 + r4); // lwz @ 0x806EADF0
    /* and. r0, r3, r0 */ // 0x806EADF4
    if (==) goto 0x0x806eae48;
    r0 = *(0x59 + r4); // lbz @ 0x806EADFC
    if (==) goto 0x0x806eae48;
    r0 = r28 rlwinm 5; // rlwinm
    r3 = r28 rlwinm 2; // rlwinm
    r4 = r5 + r0; // 0x806EAE10
    r0 = *(0x27a8 + r4); // lwz @ 0x806EAE14
    /* mulli r0, r0, 0x30 */ // 0x806EAE18
    r0 = r5 + r0; // 0x806EAE1C
    r3 = r3 + r0; // 0x806EAE20
    r3 = *(0x150 + r3); // lwz @ 0x806EAE24
    r3 = *(0xc + r3); // lwz @ 0x806EAE28
    r0 = *(8 + r3); // lwz @ 0x806EAE2C
    if (!=) goto 0x0x806eae48;
    r4 = *(0 + r3); // lwz @ 0x806EAE38
    r3 = r29;
    /* li r5, 4 */ // 0x806EAE40
    FUN_805E3430(r3, r5); // bl 0x805E3430
    r28 = r28 + 1; // 0x806EAE48
    r29 = r29 + 4; // 0x806EAE4C
    if (<) goto 0x0x806eadd8;
    r0 = *(0x24 + r1); // lwz @ 0x806EAE58
    r31 = *(0x1c + r1); // lwz @ 0x806EAE5C
    r30 = *(0x18 + r1); // lwz @ 0x806EAE60
    r29 = *(0x14 + r1); // lwz @ 0x806EAE64
    r28 = *(0x10 + r1); // lwz @ 0x806EAE68
    return;
}