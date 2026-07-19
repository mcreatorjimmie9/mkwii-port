/* Function at 0x805DC9EC, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805DC9EC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x805DCA00
    r0 = *(8 + r3); // lwz @ 0x805DCA04
    if (<) goto 0x0x805dca60;
    /* li r5, -1 */ // 0x805DCA10
    /* li r6, 0 */ // 0x805DCA14
    *(4 + r3) = r0; // sth @ 0x805DCA18
    r0 = r0 rlwinm 1; // rlwinm
    r4 = *(0x14 + r3); // lwz @ 0x805DCA20
    *(8 + r3) = r5; // stw @ 0x805DCA24
    r5 = *(0x18 + r3); // lwz @ 0x805DCA28
    *(0xc + r3) = r6; // stw @ 0x805DCA2C
    /* lhzx r0, r4, r0 */ // 0x805DCA30
    /* mulli r0, r0, 0x1c */ // 0x805DCA34
    r30 = r5 + r0; // 0x805DCA38
    r3 = r30 + 4; // 0x805DCA3C
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x805dca88;
    r3 = *(0x1c + r31); // lwz @ 0x805DCA4C
    FUN_805E3430(); // bl 0x805E3430
    /* b 0x805dca88 */ // 0x805DCA5C
    r4 = *(0xc + r3); // lwz @ 0x805DCA60
    r0 = *(4 + r3); // lhz @ 0x805DCA64
    r4 = r4 + 1; // 0x805DCA68
    *(0xc + r3) = r4; // stw @ 0x805DCA6C
    r4 = *(0x14 + r3); // lwz @ 0x805DCA70
}