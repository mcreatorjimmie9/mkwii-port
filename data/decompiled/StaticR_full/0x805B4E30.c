/* Function at 0x805B4E30, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_805B4E30(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805B4E40
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805B4E48
    r30 = r3;
    if (==) goto 0x0x805b4e88;
    /* lis r4, 0 */ // 0x805B4E54
    /* li r0, 0 */ // 0x805B4E58
    r4 = r4 + 0; // 0x805B4E5C
    *(0 + r3) = r4; // stw @ 0x805B4E60
    *(4 + r3) = r0; // stw @ 0x805B4E64
    r3 = *(8 + r3); // lwz @ 0x805B4E68
    FUN_805E3430(r4); // bl 0x805E3430
    r3 = *(0xc + r30); // lwz @ 0x805B4E70
    FUN_805E3430(); // bl 0x805E3430
    if (<=) goto 0x0x805b4e88;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
}