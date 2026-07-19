/* Function at 0x808C4CA0, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808C4CA0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x808C4CB0
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808C4CB8
    r30 = r3;
    if (==) goto 0x0x808c4d1c;
    /* lis r4, 0 */ // 0x808C4CC4
    /* li r5, 0xa30 */ // 0x808C4CC8
    r4 = r4 + 0; // 0x808C4CCC
    /* li r6, 2 */ // 0x808C4CD0
    r3 = r3 + 0x6cc; // 0x808C4CD4
    FUN_805E3430(r4, r5, r4, r6, r3); // bl 0x805E3430
    r3 = r30 + 0x430; // 0x808C4CDC
    /* li r4, -1 */ // 0x808C4CE0
    FUN_8066A1A0(r6, r3, r3, r4); // bl 0x8066A1A0
    if (==) goto 0x0x808c4d0c;
    /* addic. r3, r30, 0x54 */ // 0x808C4CF0
    if (==) goto 0x0x808c4d00;
}