/* Function at 0x805B9878, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805B9878(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805B9884
    r31 = r3;
    r0 = *(0xac + r3); // lwz @ 0x805B988C
    if (!=) goto 0x0x805b98b8;
    r0 = *(0xa8 + r3); // lwz @ 0x805B9898
    if (!=) goto 0x0x805b98b8;
    FUN_805DFF5C(); // bl 0x805DFF5C
    if (!=) goto 0x0x805b98b8;
    /* li r0, 4 */ // 0x805B98B0
    *(0xac + r31) = r0; // stw @ 0x805B98B4
    r0 = *(0x14 + r1); // lwz @ 0x805B98B8
    r31 = *(0xc + r1); // lwz @ 0x805B98BC
    return;
}