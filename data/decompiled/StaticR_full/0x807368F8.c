/* Function at 0x807368F8, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807368F8(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80736908
    r30 = r3;
    r0 = *(0x4c + r3); // lwz @ 0x80736910
    if (<) goto 0x0x80736968;
    r0 = *(0x50 + r3); // lwz @ 0x8073691C
    if (<) goto 0x0x80736968;
    r3 = *(0x238 + r3); // lwz @ 0x80736928
    r3 = r3 + 0x74; // 0x8073692C
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80736944;
    /* li r3, 0 */ // 0x8073693C
    /* b 0x80736948 */ // 0x80736940
    r3 = *(0xc + r3); // lwz @ 0x80736944
    /* li r0, 0 */ // 0x8073694C
    if (==) goto 0x0x8073695c;
    if (!=) goto 0x0x80736960;
    /* li r0, 1 */ // 0x8073695C
}