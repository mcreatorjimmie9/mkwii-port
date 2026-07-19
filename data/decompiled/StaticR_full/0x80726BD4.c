/* Function at 0x80726BD4, size=56 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80726BD4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x80726BE0
    *(0xc + r1) = r31; // stw @ 0x80726BE4
    r31 = r4;
    if (==) goto 0x0x80726c40;
    r3 = r4 + 0x74; // 0x80726BF0
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80726c08;
    /* li r3, 0 */ // 0x80726C00
    /* b 0x80726c0c */ // 0x80726C04
    r3 = *(0xc + r3); // lwz @ 0x80726C08
}