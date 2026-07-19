/* Function at 0x808CA2D0, size=76 bytes */
/* Stack frame: 160 bytes */
/* Saved registers: r14 */
/* Calls: 1 function(s) */

int FUN_808CA2D0(int r3, int r4, int r5)
{
    /* Stack frame: -160(r1) */
    /* saved r14 */
    /* lis r5, 0 */ // 0x808CA2D8
    *(0xa4 + r1) = r0; // stw @ 0x808CA2DC
    /* li r0, 1 */ // 0x808CA2E0
    /* stmw r14, 0x58(r1) */ // 0x808CA2E4
    r15 = r3;
    r16 = r4;
    r3 = *(0 + r5); // lwz @ 0x808CA2F0
    r3 = *(0x26 + r3); // lbz @ 0x808CA2F4
    if (<) goto 0x0x808ca304;
    r0 = r3;
    r14 = r0 rlwinm 1; // rlwinm
    /* clrlwi r19, r0, 0x18 */ // 0x808CA308
    /* mulli r3, r14, 0x198 */ // 0x808CA30C
    /* li r18, 0 */ // 0x808CA310
    r3 = r3 + 0x10; // 0x808CA314
    FUN_805E3430(r3); // bl 0x805E3430
}