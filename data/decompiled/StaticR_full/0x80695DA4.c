/* Function at 0x80695DA4, size=56 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_80695DA4(int r3)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x80695DAC
    FUN_808CE220(); // bl 0x808CE220
    /* lis r3, 0 */ // 0x80695DB8
    r3 = r3 + 0; // 0x80695DBC
    if (==) goto 0x0x80695dcc;
    /* lis r3, 0 */ // 0x80695DC4
    r3 = r3 + 0; // 0x80695DC8
    r0 = *(0x14 + r1); // lwz @ 0x80695DCC
    return;
}