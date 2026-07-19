/* Function at 0x80834784, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80834784(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x8083478C
    *(0x14 + r1) = r0; // stw @ 0x80834790
    *(0xc + r1) = r31; // stw @ 0x80834794
    r31 = r3;
    r0 = *(0 + r4); // lbz @ 0x8083479C
    if (==) goto 0x0x808347d0;
    /* lis r4, 0 */ // 0x808347A8
    /* li r6, 0 */ // 0x808347AC
    r4 = r4 + 0; // 0x808347B0
    /* li r7, 0 */ // 0x808347B4
    r5 = r4 + 0xa; // 0x808347B8
    /* li r8, 0 */ // 0x808347BC
    FUN_8082AFF0(r6, r4, r7, r5, r8); // bl 0x8082AFF0
    r3 = r31;
    FUN_8082B414(r7, r5, r8, r3); // bl 0x8082B414
    /* b 0x808347f0 */ // 0x808347CC
    /* lis r5, 0 */ // 0x808347D0
    /* li r6, 0 */ // 0x808347D4
    r5 = r5 + 0; // 0x808347D8
    /* li r7, 0 */ // 0x808347DC
    r4 = r5 + 0x12; // 0x808347E0
    /* li r8, 0 */ // 0x808347E4
    r5 = r5 + 0x1c; // 0x808347E8
    FUN_8082AFF0(r5, r7, r4, r8, r5); // bl 0x8082AFF0
    r0 = *(0x14 + r1); // lwz @ 0x808347F0
    r31 = *(0xc + r1); // lwz @ 0x808347F4
    return;
}