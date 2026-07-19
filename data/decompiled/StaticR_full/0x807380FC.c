/* Function at 0x807380FC, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807380FC(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 4 */ // 0x8073810C
    *(8 + r1) = r30; // stw @ 0x80738110
    r3 = *(0x610 + r3); // lwz @ 0x80738114
    r30 = r3 + 0x10; // 0x80738118
    r3 = *(0 + r30); // lwz @ 0x8073811C
    if (==) goto 0x0x80738178;
    r3 = r3 + 0x74; // 0x80738128
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80738140;
    /* li r3, 0 */ // 0x80738138
    /* b 0x80738144 */ // 0x8073813C
    r3 = *(0xc + r3); // lwz @ 0x80738140
    /* li r0, 0 */ // 0x80738148
    if (==) goto 0x0x80738158;
    if (!=) goto 0x0x8073815c;
}