/* Function at 0x805B7AB0, size=56 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805B7AB0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x1c + r1) = r31; // stw @ 0x805B7AC0
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x805B7AC8
    r30 = r4;
    if (!=) goto 0x0x805b7adc;
    FUN_805ABAFC(); // bl 0x805ABAFC
    r31 = *(0xc94 + r3); // lwz @ 0x805B7AD8
    r3 = r30;
    FUN_805E3430(r3, r4); // bl 0x805E3430
}