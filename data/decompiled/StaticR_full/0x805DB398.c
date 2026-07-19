/* Function at 0x805DB398, size=112 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_805DB398(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x805DB3A8
    *(0x18 + r1) = r30; // stw @ 0x805DB3AC
    /* li r30, 0 */ // 0x805DB3B0
    *(0x14 + r1) = r29; // stw @ 0x805DB3B4
    r29 = r3;
    /* b 0x805db3f8 */ // 0x805DB3BC
    r3 = *(0x1c + r29); // lwz @ 0x805DB3C0
    /* lwzx r3, r3, r31 */ // 0x805DB3C4
    r5 = *(0x98 + r3); // lwz @ 0x805DB3C8
    r0 = *(0xc + r5); // lbz @ 0x805DB3CC
    if (==) goto 0x0x805db3f0;
    r3 = *(0 + r5); // lwz @ 0x805DB3D8
    /* li r6, 0 */ // 0x805DB3DC
    r4 = *(8 + r5); // lhz @ 0x805DB3E0
    /* li r7, -1 */ // 0x805DB3E4
    r5 = *(0xa + r5); // lhz @ 0x805DB3E8
    FUN_805E3430(r6, r7); // bl 0x805E3430
    r31 = r31 + 4; // 0x805DB3F0
    r30 = r30 + 1; // 0x805DB3F4
    r0 = *(0x20 + r29); // lwz @ 0x805DB3F8
    if (<) goto 0x0x805db3c0;
    FUN_805E3430(); // bl 0x805E3430
}