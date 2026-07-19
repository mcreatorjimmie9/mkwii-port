/* Function at 0x805B41AC, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805B41AC(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3 + 4; // 0x805B41BC
    *(8 + r1) = r30; // stw @ 0x805B41C0
    /* li r30, 0 */ // 0x805B41C4
    r3 = r31;
    FUN_805B1200(r3); // bl 0x805B1200
    r30 = r30 + 1; // 0x805B41D0
    r31 = r31 + 0xec; // 0x805B41D4
    if (<) goto 0x0x805b41c8;
    r0 = *(0x14 + r1); // lwz @ 0x805B41E0
    r31 = *(0xc + r1); // lwz @ 0x805B41E4
    r30 = *(8 + r1); // lwz @ 0x805B41E8
    return;
}