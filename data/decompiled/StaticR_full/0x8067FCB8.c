/* Function at 0x8067FCB8, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_8067FCB8(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x8067FCC8
    *(8 + r1) = r30; // stw @ 0x8067FCCC
    /* li r30, 0 */ // 0x8067FCD0
    /* clrlwi r0, r30, 0x18 */ // 0x8067FCD4
    r3 = *(0 + r31); // lwz @ 0x8067FCD8
    /* mulli r0, r0, 0x920 */ // 0x8067FCDC
    r3 = r3 + r0; // 0x8067FCE0
    r12 = *(0x1720 + r3); // lwzu @ 0x8067FCE4
    r12 = *(0x10 + r12); // lwz @ 0x8067FCE8
    /* mtctr r12 */ // 0x8067FCEC
    /* bctrl  */ // 0x8067FCF0
    if (<=) goto 0x0x8067fd04;
    /* li r3, 0 */ // 0x8067FCFC
    /* b 0x8067fd14 */ // 0x8067FD00
    r30 = r30 + 1; // 0x8067FD04
    if (<) goto 0x0x8067fcd4;
    /* li r3, 1 */ // 0x8067FD10
    r0 = *(0x14 + r1); // lwz @ 0x8067FD14
    r31 = *(0xc + r1); // lwz @ 0x8067FD18
    r30 = *(8 + r1); // lwz @ 0x8067FD1C
    return;
}