/* Function at 0x80792E88, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80792E88(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r5 = r4;
    /* li r4, 0 */ // 0x80792E94
    *(0x14 + r1) = r0; // stw @ 0x80792E98
    r6 = r3;
    *(0xc + r1) = r31; // stw @ 0x80792EA0
    r0 = *(0x84 + r3); // lwz @ 0x80792EA4
    /* mtctr r0 */ // 0x80792EA8
    if (<=) goto 0x0x80792edc;
    r0 = *(0x80 + r6); // lwz @ 0x80792EB4
    if (!=) goto 0x0x80792ed0;
    /* slwi r0, r4, 2 */ // 0x80792EC0
    r4 = r3 + r0; // 0x80792EC4
    r31 = r4 + 0x80; // 0x80792EC8
    /* b 0x80792ee0 */ // 0x80792ECC
    r6 = r6 + 4; // 0x80792ED0
    r4 = r4 + 1; // 0x80792ED4
    if (counter-- != 0) goto 0x0x80792eb4;
    /* li r31, 0 */ // 0x80792EDC
    if (==) goto 0x0x80792efc;
    r4 = r31;
    /* li r6, 0 */ // 0x80792EEC
    FUN_805E3430(r4, r6); // bl 0x805E3430
    r3 = r31;
    /* b 0x80792f00 */ // 0x80792EF8
    /* li r3, 0 */ // 0x80792EFC
    r0 = *(0x14 + r1); // lwz @ 0x80792F00
    r31 = *(0xc + r1); // lwz @ 0x80792F04
}