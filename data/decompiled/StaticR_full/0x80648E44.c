/* Function at 0x80648E44, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80648E44(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80648E54
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80648E5C
    r30 = r3;
    if (==) goto 0x0x80648e90;
    /* li r4, 0 */ // 0x80648E68
    r3 = r3 + 0x4c; // 0x80648E6C
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x80648E78
    FUN_805EB2DC(r4, r3, r3, r4); // bl 0x805EB2DC
    if (<=) goto 0x0x80648e90;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
}