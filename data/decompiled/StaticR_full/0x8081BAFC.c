/* Function at 0x8081BAFC, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8081BAFC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8081BB0C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8081BB14
    r30 = r3;
    if (==) goto 0x0x8081bb38;
    /* li r4, 0 */ // 0x8081BB20
    FUN_80648E44(r4); // bl 0x80648E44
    if (<=) goto 0x0x8081bb38;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8081BB3C
    r30 = *(8 + r1); // lwz @ 0x8081BB40
    r0 = *(0x14 + r1); // lwz @ 0x8081BB44
    return;
}