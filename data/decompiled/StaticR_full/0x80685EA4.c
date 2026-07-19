/* Function at 0x80685EA4, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80685EA4(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80685EB0
    r31 = r3;
    r0 = *(0x404 + r3); // lwz @ 0x80685EB8
    if (!=) goto 0x0x80685ee0;
    /* li r3, 0x38d0 */ // 0x80685EC4
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x80685ed8;
    FUN_80658E08(r3); // bl 0x80658E08
    *(0x404 + r31) = r3; // stw @ 0x80685ED8
    FUN_80659028(); // bl 0x80659028
}