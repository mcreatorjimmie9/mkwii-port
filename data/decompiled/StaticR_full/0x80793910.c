/* Function at 0x80793910, size=136 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_80793910(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x80793924
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8079392C
    r29 = r3;
    if (>=) goto 0x0x8079395c;
    /* slwi r0, r5, 2 */ // 0x80793938
    r31 = r3 + r0; // 0x8079393C
    r3 = *(0x80 + r31); // lwzu @ 0x80793940
    if (==) goto 0x0x80793960;
    if (==) goto 0x0x80793960;
    /* li r4, 0 */ // 0x80793950
    FUN_805E3430(r4); // bl 0x805E3430
    /* b 0x80793960 */ // 0x80793958
    /* li r31, 0 */ // 0x8079395C
    if (==) goto 0x0x80793984;
    r3 = r29;
    r4 = r31;
    r5 = r30;
    /* li r6, 0 */ // 0x80793974
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    r3 = r31;
    /* b 0x80793988 */ // 0x80793980
    /* li r3, 0 */ // 0x80793984
    r0 = *(0x24 + r1); // lwz @ 0x80793988
    r31 = *(0x1c + r1); // lwz @ 0x8079398C
    r30 = *(0x18 + r1); // lwz @ 0x80793990
    r29 = *(0x14 + r1); // lwz @ 0x80793994
}