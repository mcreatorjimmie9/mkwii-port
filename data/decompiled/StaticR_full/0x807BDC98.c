/* Function at 0x807BDC98, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807BDC98(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807BDCA4
    r31 = r4;
    r3 = *(0x198 + r3); // lwz @ 0x807BDCAC
    r3 = *(0 + r3); // lwz @ 0x807BDCB0
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x807BDCB8
    /* clrlwi r0, r3, 0x18 */ // 0x807BDCBC
    r3 = *(0 + r4); // lwz @ 0x807BDCC0
    /* mulli r0, r0, 0x248 */ // 0x807BDCC4
    r3 = *(0x14 + r3); // lwz @ 0x807BDCC8
    r3 = r3 + r0; // 0x807BDCCC
    r0 = *(0x8c + r3); // lwz @ 0x807BDCD0
    if (==) goto 0x0x807bdce8;
    *(0 + r31) = r0; // stw @ 0x807BDCDC
    /* li r3, 1 */ // 0x807BDCE0
    /* b 0x807bdcec */ // 0x807BDCE4
    /* li r3, 0 */ // 0x807BDCE8
    r0 = *(0x14 + r1); // lwz @ 0x807BDCEC
    r31 = *(0xc + r1); // lwz @ 0x807BDCF0
    return;
}