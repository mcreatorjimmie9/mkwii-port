/* Function at 0x806E6FF4, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806E6FF4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x806E7000
    *(0xc + r1) = r31; // stw @ 0x806E7004
    r31 = r3;
    if (==) goto 0x0x806e701c;
    if (<=) goto 0x0x806e701c;
    FUN_805E3430(); // bl 0x805E3430
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x806E7020
    r0 = *(0x14 + r1); // lwz @ 0x806E7024
    return;
}