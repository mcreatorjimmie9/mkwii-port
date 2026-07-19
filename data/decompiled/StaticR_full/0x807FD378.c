/* Function at 0x807FD378, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807FD378(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807FD388
    r31 = r5;
    *(8 + r1) = r30; // stw @ 0x807FD390
    r30 = r3;
    *(4 + r3) = r4; // stw @ 0x807FD398
    if (!=) goto 0x0x807fd3a8;
    /* lis r4, 0 */ // 0x807FD3A0
    r31 = *(0 + r4); // lwz @ 0x807FD3A4
    r0 = *(4 + r3); // lwz @ 0x807FD3A8
    r4 = r31;
    /* li r5, 4 */ // 0x807FD3B0
    /* slwi r3, r0, 2 */ // 0x807FD3B4
    FUN_805E3430(r4, r5); // bl 0x805E3430
}