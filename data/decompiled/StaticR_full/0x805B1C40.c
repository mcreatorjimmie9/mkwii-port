/* Function at 0x805B1C40, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_805B1C40(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805B1C4C
    r31 = r3;
    r0 = *(0x20 + r3); // lwz @ 0x805B1C54
    if (==) goto 0x0x805b1c80;
    r3 = r0;
    FUN_805B51E8(r3); // bl 0x805B51E8
    /* li r4, 0x2c */ // 0x805B1C68
    /* li r3, 0 */ // 0x805B1C6C
    /* li r0, -1 */ // 0x805B1C70
    *(0x10 + r31) = r4; // stw @ 0x805B1C74
    *(0x18 + r31) = r3; // stw @ 0x805B1C78
    *(0x14 + r31) = r0; // stb @ 0x805B1C7C
    r3 = *(0x24 + r31); // lwz @ 0x805B1C80
    if (==) goto 0x0x805b1c90;
    FUN_805B51E8(); // bl 0x805B51E8
    r0 = *(0x14 + r1); // lwz @ 0x805B1C90
    r31 = *(0xc + r1); // lwz @ 0x805B1C94
    return;
}