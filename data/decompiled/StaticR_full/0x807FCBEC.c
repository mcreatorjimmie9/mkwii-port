/* Function at 0x807FCBEC, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807FCBEC(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807FCBF8
    r31 = r3;
    FUN_8080F1E0(); // bl 0x8080F1E0
    /* lis r3, 0 */ // 0x807FCC04
    /* lfs f1, 0x34(r31) */ // 0x807FCC08
    /* lfs f0, 0(r3) */ // 0x807FCC0C
    /* stfs f1, 0xc0(r31) */ // 0x807FCC10
    /* stfs f0, 0xc4(r31) */ // 0x807FCC14
    r31 = *(0xc + r1); // lwz @ 0x807FCC18
    r0 = *(0x14 + r1); // lwz @ 0x807FCC1C
    return;
}