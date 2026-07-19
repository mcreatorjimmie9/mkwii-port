/* Function at 0x80647AC4, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80647AC4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80647AD0
    r31 = r3;
    r0 = *(0x98 + r3); // lbz @ 0x80647AD8
    if (==) goto 0x0x80647b18;
    r4 = *(0x10 + r31); // lwz @ 0x80647AE4
    /* li r3, 0x28 */ // 0x80647AE8
    /* li r5, 4 */ // 0x80647AEC
    FUN_805E3430(r3, r5); // bl 0x805E3430
    if (==) goto 0x0x80647b04;
    r4 = r31;
    FUN_805F19BC(r5, r4); // bl 0x805F19BC
    *(0x34 + r31) = r3; // stw @ 0x80647B04
}