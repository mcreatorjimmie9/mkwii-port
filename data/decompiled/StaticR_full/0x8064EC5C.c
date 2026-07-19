/* Function at 0x8064EC5C, size=168 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_8064EC5C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x8064EC74
    r29 = r3;
    r6 = *(4 + r3); // lwz @ 0x8064EC7C
    r7 = *(0x24 + r3); // lwz @ 0x8064EC80
    r0 = *(0xa + r6); // lhz @ 0x8064EC84
    r5 = r7 + r0; // 0x8064EC88
    /* lbzx r0, r7, r0 */ // 0x8064EC8C
    /* extsb. r0, r0 */ // 0x8064EC90
    if (==) goto 0x0x8064ece8;
    r3 = *(0 + r3); // lwz @ 0x8064EC98
    FUN_806A0640(); // bl 0x806A0640
    /* li r31, 0 */ // 0x8064ECA0
    /* b 0x8064ecdc */ // 0x8064ECA4
    r0 = *(0x38 + r30); // lhz @ 0x8064ECA8
    r4 = *(0x20 + r29); // lwz @ 0x8064ECAC
    r0 = r0 + r31; // 0x8064ECB0
    r5 = *(0x24 + r29); // lwz @ 0x8064ECB4
    /* slwi r0, r0, 2 */ // 0x8064ECB8
    r3 = *(0 + r29); // lwz @ 0x8064ECBC
    r6 = r4 + r0; // 0x8064ECC0
    /* lhzx r4, r4, r0 */ // 0x8064ECC4
    r0 = *(2 + r6); // lhz @ 0x8064ECC8
    r4 = r5 + r4; // 0x8064ECCC
    r5 = r5 + r0; // 0x8064ECD0
    FUN_806A0D70(); // bl 0x806A0D70
    r31 = r31 + 1; // 0x8064ECD8
    r0 = *(0x3a + r30); // lhz @ 0x8064ECDC
    if (<) goto 0x0x8064eca8;
    r0 = *(0x24 + r1); // lwz @ 0x8064ECE8
    r31 = *(0x1c + r1); // lwz @ 0x8064ECEC
    r30 = *(0x18 + r1); // lwz @ 0x8064ECF0
    r29 = *(0x14 + r1); // lwz @ 0x8064ECF4
    return;
}