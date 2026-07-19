/* Function at 0x806420B8, size=56 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */

int FUN_806420B8(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* lis r4, 0 */ // 0x806420C0
    *(0x24 + r1) = r0; // stw @ 0x806420C4
    /* stmw r27, 0xc(r1) */ // 0x806420C8
    r31 = r3;
    /* li r29, 0 */ // 0x806420D0
    /* li r30, 1 */ // 0x806420D4
    r3 = *(0 + r4); // lwz @ 0x806420D8
    r28 = *(0x10 + r3); // lwz @ 0x806420DC
    /* b 0x8064215c */ // 0x806420E0
    r0 = *(4 + r3); // lwz @ 0x806420E4
    /* li r27, 1 */ // 0x806420E8
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x806420EC
}