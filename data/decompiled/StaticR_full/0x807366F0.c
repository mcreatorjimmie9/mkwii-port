/* Function at 0x807366F0, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807366F0(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80736700
    r30 = r3;
    r0 = *(0x4c + r3); // lwz @ 0x80736708
    if (<) goto 0x0x80736760;
    r0 = *(0x50 + r3); // lwz @ 0x80736714
    if (<) goto 0x0x80736760;
    r3 = *(0x238 + r3); // lwz @ 0x80736720
    r3 = r3 + 0x74; // 0x80736724
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8073673c;
    /* li r3, 0 */ // 0x80736734
    /* b 0x80736740 */ // 0x80736738
    r3 = *(0xc + r3); // lwz @ 0x8073673C
    /* li r0, 0 */ // 0x80736744
    if (==) goto 0x0x80736754;
    if (!=) goto 0x0x80736758;
    /* li r0, 1 */ // 0x80736754
}