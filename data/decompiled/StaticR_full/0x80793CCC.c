/* Function at 0x80793CCC, size=136 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_80793CCC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x80793CE0
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80793CE8
    r29 = r3;
    if (>=) goto 0x0x80793d18;
    /* slwi r0, r5, 2 */ // 0x80793CF4
    r31 = r3 + r0; // 0x80793CF8
    r3 = *(0x80 + r31); // lwzu @ 0x80793CFC
    if (==) goto 0x0x80793d1c;
    if (==) goto 0x0x80793d1c;
    /* li r4, 0 */ // 0x80793D0C
    FUN_805E3430(r4); // bl 0x805E3430
    /* b 0x80793d1c */ // 0x80793D14
    /* li r31, 0 */ // 0x80793D18
    if (==) goto 0x0x80793d40;
    r3 = r29;
    r4 = r31;
    r5 = r30;
    /* li r6, 0 */ // 0x80793D30
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    r3 = r31;
    /* b 0x80793d44 */ // 0x80793D3C
    /* li r3, 0 */ // 0x80793D40
    r0 = *(0x24 + r1); // lwz @ 0x80793D44
    r31 = *(0x1c + r1); // lwz @ 0x80793D48
    r30 = *(0x18 + r1); // lwz @ 0x80793D4C
    r29 = *(0x14 + r1); // lwz @ 0x80793D50
}