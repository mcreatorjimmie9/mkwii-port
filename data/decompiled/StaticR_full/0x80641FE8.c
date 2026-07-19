/* Function at 0x80641FE8, size=56 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */

int FUN_80641FE8(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* lis r4, 0 */ // 0x80641FF0
    *(0x24 + r1) = r0; // stw @ 0x80641FF4
    /* stmw r27, 0xc(r1) */ // 0x80641FF8
    r31 = r3;
    /* li r29, 0 */ // 0x80642000
    /* li r30, 1 */ // 0x80642004
    r3 = *(0 + r4); // lwz @ 0x80642008
    r28 = *(0x10 + r3); // lwz @ 0x8064200C
    /* b 0x8064208c */ // 0x80642010
    r0 = *(4 + r3); // lwz @ 0x80642014
    /* li r27, 1 */ // 0x80642018
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x8064201C
}