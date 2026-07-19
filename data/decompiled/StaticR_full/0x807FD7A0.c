/* Function at 0x807FD7A0, size=72 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807FD7A0(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x807FD7B0
    r31 = r31 + 0; // 0x807FD7B4
    *(0x18 + r1) = r30; // stw @ 0x807FD7B8
    /* lis r30, 0 */ // 0x807FD7BC
    r30 = r30 + 0; // 0x807FD7C0
    *(0x14 + r1) = r29; // stw @ 0x807FD7C4
    r29 = r3;
    /* lfs f0, 8(r30) */ // 0x807FD7CC
    *(0x10 + r1) = r28; // stw @ 0x807FD7D0
    /* stfs f0, 0x13c(r3) */ // 0x807FD7D4
    /* stfs f0, 0x140(r3) */ // 0x807FD7D8
    /* stfs f0, 0x144(r3) */ // 0x807FD7DC
    r3 = *(0x10 + r3); // lwz @ 0x807FD7E0
    FUN_805E3430(); // bl 0x805E3430
}