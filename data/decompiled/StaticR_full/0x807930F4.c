/* Function at 0x807930F4, size=136 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_807930F4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x80793108
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80793110
    r29 = r3;
    if (>=) goto 0x0x80793140;
    /* slwi r0, r5, 2 */ // 0x8079311C
    r31 = r3 + r0; // 0x80793120
    r3 = *(0x80 + r31); // lwzu @ 0x80793124
    if (==) goto 0x0x80793144;
    if (==) goto 0x0x80793144;
    /* li r4, 0 */ // 0x80793134
    FUN_805E3430(r4); // bl 0x805E3430
    /* b 0x80793144 */ // 0x8079313C
    /* li r31, 0 */ // 0x80793140
    if (==) goto 0x0x80793168;
    r3 = r29;
    r4 = r31;
    r5 = r30;
    /* li r6, 0 */ // 0x80793158
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    r3 = r31;
    /* b 0x8079316c */ // 0x80793164
    /* li r3, 0 */ // 0x80793168
    r0 = *(0x24 + r1); // lwz @ 0x8079316C
    r31 = *(0x1c + r1); // lwz @ 0x80793170
    r30 = *(0x18 + r1); // lwz @ 0x80793174
    r29 = *(0x14 + r1); // lwz @ 0x80793178
}