/* Function at 0x8078C174, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8078C174(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x8078C17C
    *(0xc + r1) = r31; // stw @ 0x8078C184
    *(8 + r1) = r30; // stw @ 0x8078C188
    r4 = *(0 + r4); // lwz @ 0x8078C18C
    if (==) goto 0x0x8078c1a0;
    r0 = *(0x70 + r4); // lbz @ 0x8078C198
    /* b 0x8078c1a4 */ // 0x8078C19C
    /* li r0, 0 */ // 0x8078C1A0
    if (!=) goto 0x0x8078c1cc;
    r31 = r3 + 0x1c; // 0x8078C1AC
    /* li r30, 0 */ // 0x8078C1B0
    r3 = r31;
    FUN_8078C950(r3); // bl 0x8078C950
    r30 = r30 + 1; // 0x8078C1BC
    r31 = r31 + 0x74; // 0x8078C1C0
    if (<) goto 0x0x8078c1b4;
    r0 = *(0x14 + r1); // lwz @ 0x8078C1CC
    r31 = *(0xc + r1); // lwz @ 0x8078C1D0
    r30 = *(8 + r1); // lwz @ 0x8078C1D4
    return;
}