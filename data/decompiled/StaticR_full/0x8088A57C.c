/* Function at 0x8088A57C, size=180 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_8088A57C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x24 + r1) = r29; // stw @ 0x8088A590
    r29 = r3;
    FUN_808A0CB8(); // bl 0x808A0CB8
    r0 = *(0x178 + r29); // lwz @ 0x8088A59C
    if (==) goto 0x0x8088a614;
    r0 = *(0x14 + r29); // lwz @ 0x8088A5A8
    /* lis r31, 0 */ // 0x8088A5AC
    *(0x14 + r1) = r0; // stw @ 0x8088A5B0
    /* li r30, 0 */ // 0x8088A5B4
    r31 = r31 + 0; // 0x8088A5B8
    *(8 + r1) = r30; // stw @ 0x8088A5C0
    r6 = r31 + 0xe; // 0x8088A5C4
    /* li r4, 0 */ // 0x8088A5C8
    /* li r7, 2 */ // 0x8088A5CC
    r3 = *(0x178 + r29); // lwz @ 0x8088A5D0
    /* li r8, 0 */ // 0x8088A5D4
    /* li r9, 0 */ // 0x8088A5D8
    /* li r10, 9 */ // 0x8088A5DC
    FUN_805EDB0C(r7, r8, r9, r10); // bl 0x805EDB0C
    r0 = *(0x14 + r29); // lwz @ 0x8088A5E4
    *(0x10 + r1) = r0; // stw @ 0x8088A5EC
    r6 = r31 + 0x17; // 0x8088A5F0
    /* li r4, 1 */ // 0x8088A5F4
    /* li r7, 1 */ // 0x8088A5F8
    *(8 + r1) = r30; // stw @ 0x8088A5FC
    /* li r8, 0 */ // 0x8088A600
    /* li r9, 0 */ // 0x8088A604
    /* li r10, 9 */ // 0x8088A608
    r3 = *(0x178 + r29); // lwz @ 0x8088A60C
    FUN_805EDB0C(r8, r9, r10); // bl 0x805EDB0C
    r0 = *(0x34 + r1); // lwz @ 0x8088A614
    r31 = *(0x2c + r1); // lwz @ 0x8088A618
    r30 = *(0x28 + r1); // lwz @ 0x8088A61C
    r29 = *(0x24 + r1); // lwz @ 0x8088A620
    return;
}