/* Function at 0x8065A7D4, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8065A7D4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8065A7E4
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8065A7EC
    r30 = r3;
    if (==) goto 0x0x8065a810;
    /* li r4, 0 */ // 0x8065A7F8
    FUN_806498AC(r4); // bl 0x806498AC
    if (<=) goto 0x0x8065a810;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8065A814
    r30 = *(8 + r1); // lwz @ 0x8065A818
    r0 = *(0x14 + r1); // lwz @ 0x8065A81C
    return;
}