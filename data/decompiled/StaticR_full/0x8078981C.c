/* Function at 0x8078981C, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8078981C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8078982C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80789834
    r30 = r3;
    if (==) goto 0x0x80789854;
    FUN_805E3430(); // bl 0x805E3430
    if (<=) goto 0x0x80789854;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80789858
    r30 = *(8 + r1); // lwz @ 0x8078985C
}