/* Function at 0x80815548, size=164 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_80815548(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x8081555C
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80815564
    r29 = r3;
    if (==) goto 0x0x808155cc;
    if (==) goto 0x0x808155bc;
    /* lis r5, 0 */ // 0x80815574
    /* lis r4, 0 */ // 0x80815578
    r5 = r5 + 0; // 0x8081557C
    *(0 + r3) = r5; // stw @ 0x80815580
    r31 = *(0 + r4); // lwz @ 0x80815584
    if (==) goto 0x0x808155b0;
    /* li r0, 0 */ // 0x80815590
    *(0 + r4) = r0; // stw @ 0x80815594
    if (==) goto 0x0x808155b0;
    r3 = r31;
    /* li r4, -1 */ // 0x808155A0
    FUN_80815154(r3, r4); // bl 0x80815154
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r29;
    /* li r4, 0 */ // 0x808155B4
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x808155cc;
    r3 = r29;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x808155CC
    r3 = r29;
    r30 = *(0x18 + r1); // lwz @ 0x808155D4
    r29 = *(0x14 + r1); // lwz @ 0x808155D8
    r0 = *(0x24 + r1); // lwz @ 0x808155DC
    return;
}