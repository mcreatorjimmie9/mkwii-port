/* Function at 0x80736D08, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80736D08(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80736D18
    r30 = r3;
    r0 = *(0x4c + r3); // lwz @ 0x80736D20
    if (<) goto 0x0x80736d78;
    r0 = *(0x50 + r3); // lwz @ 0x80736D2C
    if (<) goto 0x0x80736d78;
    r3 = *(0x238 + r3); // lwz @ 0x80736D38
    r3 = r3 + 0x74; // 0x80736D3C
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80736d54;
    /* li r3, 0 */ // 0x80736D4C
    /* b 0x80736d58 */ // 0x80736D50
    r3 = *(0xc + r3); // lwz @ 0x80736D54
    /* li r0, 0 */ // 0x80736D5C
    if (==) goto 0x0x80736d6c;
    if (!=) goto 0x0x80736d70;
    /* li r0, 1 */ // 0x80736D6C
}