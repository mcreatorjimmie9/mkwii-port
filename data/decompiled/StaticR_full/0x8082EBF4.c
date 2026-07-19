/* Function at 0x8082EBF4, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8082EBF4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x8082EC00
    *(0xc + r1) = r31; // stw @ 0x8082EC04
    r31 = r3;
    if (==) goto 0x0x8082ec1c;
    if (<=) goto 0x0x8082ec1c;
    FUN_805E3430(); // bl 0x805E3430
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x8082EC20
    r0 = *(0x14 + r1); // lwz @ 0x8082EC24
    return;
}