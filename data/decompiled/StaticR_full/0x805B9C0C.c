/* Function at 0x805B9C0C, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_805B9C0C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805B9C18
    r31 = r3;
    r0 = *(0xac + r3); // lwz @ 0x805B9C20
    if (==) goto 0x0x805b9c3c;
    FUN_805DF7A0(); // bl 0x805DF7A0
    FUN_805DF090(); // bl 0x805DF090
    /* li r0, 0 */ // 0x805B9C34
    *(0xac + r31) = r0; // stw @ 0x805B9C38
    r0 = *(0x14 + r1); // lwz @ 0x805B9C3C
    r31 = *(0xc + r1); // lwz @ 0x805B9C40
    return;
}