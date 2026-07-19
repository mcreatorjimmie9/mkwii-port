/* Function at 0x8065FAE4, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8065FAE4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = *(0x64 + r3); // lwz @ 0x8065FAF4
    *(8 + r1) = r30; // stw @ 0x8065FAF8
    /* li r30, 0 */ // 0x8065FAFC
    /* b 0x8065fb30 */ // 0x8065FB00
    r3 = r31;
    /* clrlwi r4, r30, 0x10 */ // 0x8065FB08
    FUN_805ACCB0(r3); // bl 0x805ACCB0
    if (==) goto 0x0x8065fb24;
    r0 = *(0 + r3); // lbz @ 0x8065FB18
    if (!=) goto 0x0x8065fb2c;
    /* li r3, 0 */ // 0x8065FB24
    /* b 0x8065fb40 */ // 0x8065FB28
    r30 = r30 + 1; // 0x8065FB2C
    r0 = *(4 + r31); // lhz @ 0x8065FB30
    if (<) goto 0x0x8065fb04;
    /* li r3, 1 */ // 0x8065FB3C
    r0 = *(0x14 + r1); // lwz @ 0x8065FB40
    r31 = *(0xc + r1); // lwz @ 0x8065FB44
    r30 = *(8 + r1); // lwz @ 0x8065FB48
    return;
}