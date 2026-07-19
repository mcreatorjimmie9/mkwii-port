/* Function at 0x805B602C, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805B602C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r5 = r3;
    *(0x14 + r1) = r0; // stw @ 0x805B6038
    r0 = *(0xc + r3); // lwz @ 0x805B603C
    r3 = r4;
    *(0xc + r1) = r31; // stw @ 0x805B6044
    /* li r31, 0 */ // 0x805B6048
    if (==) goto 0x0x805b605c;
    if (!=) goto 0x0x805b6074;
    r4 = *(0xc + r5); // lwz @ 0x805B605C
    r5 = *(8 + r5); // lbz @ 0x805B6060
    FUN_805E3430(); // bl 0x805E3430
    if (!=) goto 0x0x805b6074;
    /* li r31, 1 */ // 0x805B6070
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x805B6078
    r0 = *(0x14 + r1); // lwz @ 0x805B607C
}