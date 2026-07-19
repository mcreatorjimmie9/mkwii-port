/* Function at 0x80736B00, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80736B00(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80736B10
    r30 = r3;
    r0 = *(0x4c + r3); // lwz @ 0x80736B18
    if (<) goto 0x0x80736b70;
    r0 = *(0x50 + r3); // lwz @ 0x80736B24
    if (<) goto 0x0x80736b70;
    r3 = *(0x238 + r3); // lwz @ 0x80736B30
    r3 = r3 + 0x74; // 0x80736B34
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80736b4c;
    /* li r3, 0 */ // 0x80736B44
    /* b 0x80736b50 */ // 0x80736B48
    r3 = *(0xc + r3); // lwz @ 0x80736B4C
    /* li r0, 0 */ // 0x80736B54
    if (==) goto 0x0x80736b64;
    if (!=) goto 0x0x80736b68;
    /* li r0, 1 */ // 0x80736B64
}