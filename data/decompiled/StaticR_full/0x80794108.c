/* Function at 0x80794108, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80794108(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r6 = r4;
    *(0x14 + r1) = r0; // stw @ 0x80794118
    *(0xc + r1) = r31; // stw @ 0x8079411C
    if (>=) goto 0x0x80794134;
    /* slwi r0, r5, 2 */ // 0x80794124
    r4 = r3 + r0; // 0x80794128
    r31 = r4 + 0x80; // 0x8079412C
    /* b 0x80794138 */ // 0x80794130
    /* li r31, 0 */ // 0x80794134
    if (==) goto 0x0x80794158;
    r5 = r6;
    r4 = r31;
    /* li r6, 0 */ // 0x80794148
    FUN_805E3430(r5, r4, r6); // bl 0x805E3430
    r3 = r31;
    /* b 0x8079415c */ // 0x80794154
    /* li r3, 0 */ // 0x80794158
    r0 = *(0x14 + r1); // lwz @ 0x8079415C
    r31 = *(0xc + r1); // lwz @ 0x80794160
}