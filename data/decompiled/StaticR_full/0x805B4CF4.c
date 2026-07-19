/* Function at 0x805B4CF4, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805B4CF4(int r3, int r4, int r5, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805B4D04
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x805B4D0C
    r30 = r4;
    if (==) goto 0x0x805b4e10;
    *(4 + r3) = r4; // stw @ 0x805B4D18
    r0 = *(8 + r4); // lhz @ 0x805B4D1C
    r3 = r0 rlwinm 2; // rlwinm
    FUN_805E3430(); // bl 0x805E3430
    *(8 + r31) = r3; // stw @ 0x805B4D28
    r3 = *(4 + r31); // lwz @ 0x805B4D2C
    r0 = *(8 + r3); // lhz @ 0x805B4D30
    r3 = r0 rlwinm 2; // rlwinm
    FUN_805E3430(); // bl 0x805E3430
    *(0xc + r31) = r3; // stw @ 0x805B4D3C
    /* li r9, 0 */ // 0x805B4D40
    r5 = *(4 + r31); // lwz @ 0x805B4D44
}