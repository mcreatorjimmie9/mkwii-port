/* Function at 0x80794170, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80794170(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r6 = r4;
    *(0x14 + r1) = r0; // stw @ 0x80794180
    *(0xc + r1) = r31; // stw @ 0x80794184
    if (>=) goto 0x0x8079419c;
    /* slwi r0, r5, 2 */ // 0x8079418C
    r4 = r3 + r0; // 0x80794190
    r31 = r4 + 0x80; // 0x80794194
    /* b 0x807941a0 */ // 0x80794198
    /* li r31, 0 */ // 0x8079419C
    if (==) goto 0x0x807941c0;
    r5 = r6;
    r4 = r31;
    /* li r6, 0 */ // 0x807941B0
    FUN_805E3430(r5, r4, r6); // bl 0x805E3430
    r3 = r31;
    /* b 0x807941c4 */ // 0x807941BC
    /* li r3, 0 */ // 0x807941C0
    r0 = *(0x14 + r1); // lwz @ 0x807941C4
    r31 = *(0xc + r1); // lwz @ 0x807941C8
}