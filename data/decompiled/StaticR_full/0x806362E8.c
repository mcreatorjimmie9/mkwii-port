/* Function at 0x806362E8, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806362E8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x806362F8
    *(8 + r1) = r30; // stw @ 0x806362FC
    r30 = r3;
    r0 = r31 rlwinm 1; // rlwinm
    r4 = r30 + r0; // 0x80636308
    r3 = *(0x1b8 + r4); // lha @ 0x8063630C
    if (<=) goto 0x0x8063633c;
    r0 = r3 + -1; // 0x80636318
    *(0x1b8 + r4) = r0; // sth @ 0x8063631C
    /* extsh. r0, r0 */ // 0x80636320
    if (>) goto 0x0x8063633c;
    r0 = r31 rlwinm 2; // rlwinm
    r3 = *(4 + r30); // lwz @ 0x8063632C
    r4 = r30 + r0; // 0x80636330
    /* lfs f1, 0x1d0(r4) */ // 0x80636334
    FUN_8062FC00(); // bl 0x8062FC00
    r31 = r31 + 1; // 0x8063633C
    if (<) goto 0x0x80636304;
    r0 = *(0x14 + r1); // lwz @ 0x80636348
    r31 = *(0xc + r1); // lwz @ 0x8063634C
    r30 = *(8 + r1); // lwz @ 0x80636350
    return;
}