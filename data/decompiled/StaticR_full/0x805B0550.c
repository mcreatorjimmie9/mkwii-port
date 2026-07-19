/* Function at 0x805B0550, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_805B0550(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805B0560
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805B0568
    r30 = r3;
    if (==) goto 0x0x805b05a8;
    /* lis r4, 0 */ // 0x805B0574
    r4 = r4 + 0; // 0x805B0578
    *(0 + r3) = r4; // stw @ 0x805B057C
    r3 = *(0x94 + r3); // lwz @ 0x805B0580
    FUN_805E3430(r4, r4); // bl 0x805E3430
    r3 = *(0x98 + r30); // lwz @ 0x805B0588
    FUN_805E3430(r4); // bl 0x805E3430
    r3 = *(0x9c + r30); // lwz @ 0x805B0590
    FUN_805E3430(); // bl 0x805E3430
    if (<=) goto 0x0x805b05a8;
    r3 = r30;
}