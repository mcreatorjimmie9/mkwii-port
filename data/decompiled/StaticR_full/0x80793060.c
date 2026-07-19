/* Function at 0x80793060, size=136 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_80793060(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x80793074
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8079307C
    r29 = r3;
    if (>=) goto 0x0x807930ac;
    /* slwi r0, r5, 2 */ // 0x80793088
    r31 = r3 + r0; // 0x8079308C
    r3 = *(0x80 + r31); // lwzu @ 0x80793090
    if (==) goto 0x0x807930b0;
    if (==) goto 0x0x807930b0;
    /* li r4, 0 */ // 0x807930A0
    FUN_805E3430(r4); // bl 0x805E3430
    /* b 0x807930b0 */ // 0x807930A8
    /* li r31, 0 */ // 0x807930AC
    if (==) goto 0x0x807930d4;
    r3 = r29;
    r4 = r31;
    r5 = r30;
    /* li r6, 0 */ // 0x807930C4
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    r3 = r31;
    /* b 0x807930d8 */ // 0x807930D0
    /* li r3, 0 */ // 0x807930D4
    r0 = *(0x24 + r1); // lwz @ 0x807930D8
    r31 = *(0x1c + r1); // lwz @ 0x807930DC
    r30 = *(0x18 + r1); // lwz @ 0x807930E0
    r29 = *(0x14 + r1); // lwz @ 0x807930E4
}