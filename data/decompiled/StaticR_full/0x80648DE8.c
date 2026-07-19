/* Function at 0x80648DE8, size=32 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80648DE8(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80648DF4
    r31 = r3;
    FUN_805EAFB8(); // bl 0x805EAFB8
    r3 = r31 + 0x4c; // 0x80648E00
    FUN_805E3430(r3); // bl 0x805E3430
}