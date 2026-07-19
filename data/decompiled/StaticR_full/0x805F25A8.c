/* Function at 0x805F25A8, size=48 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_805F25A8(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x805F25B4
    r30 = r3;
    /* li r31, 1 */ // 0x805F25BC
    r0 = *(0x40 + r3); // lhz @ 0x805F25C0
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x805F25C4
    if (!=) goto 0x0x805f2600;
    /* li r28, 1 */ // 0x805F25CC
    FUN_805E3430(); // bl 0x805E3430
    r0 = *(0x69 + r3); // lbz @ 0x805F25D4
}