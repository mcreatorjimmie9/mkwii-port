/* Function at 0x807944E8, size=136 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_807944E8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x807944FC
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80794504
    r29 = r3;
    if (>=) goto 0x0x80794534;
    /* slwi r0, r5, 2 */ // 0x80794510
    r31 = r3 + r0; // 0x80794514
    r3 = *(0x80 + r31); // lwzu @ 0x80794518
    if (==) goto 0x0x80794538;
    if (==) goto 0x0x80794538;
    /* li r4, 0 */ // 0x80794528
    FUN_805E3430(r4); // bl 0x805E3430
    /* b 0x80794538 */ // 0x80794530
    /* li r31, 0 */ // 0x80794534
    if (==) goto 0x0x8079455c;
    r3 = r29;
    r4 = r31;
    r5 = r30;
    /* li r6, 0 */ // 0x8079454C
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    r3 = r31;
    /* b 0x80794560 */ // 0x80794558
    /* li r3, 0 */ // 0x8079455C
    r0 = *(0x24 + r1); // lwz @ 0x80794560
    r31 = *(0x1c + r1); // lwz @ 0x80794564
    r30 = *(0x18 + r1); // lwz @ 0x80794568
    r29 = *(0x14 + r1); // lwz @ 0x8079456C
}