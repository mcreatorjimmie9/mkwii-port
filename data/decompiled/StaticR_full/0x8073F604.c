/* Function at 0x8073F604, size=172 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8073F604(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x8073F618
    *(0x14 + r1) = r29; // stw @ 0x8073F61C
    r29 = r4;
    r5 = *(0x124 + r3); // lwz @ 0x8073F624
    if (!=) goto 0x0x8073f63c;
    r0 = *(0x330 + r3); // lwz @ 0x8073F630
    if (==) goto 0x0x8073f800;
    if (!=) goto 0x0x8073f650;
    r0 = *(0x324 + r3); // lwz @ 0x8073F644
    if (==) goto 0x0x8073f800;
    if (!=) goto 0x0x8073f734;
    r0 = r4 + 6; // 0x8073F658
    /* slwi r0, r0, 2 */ // 0x8073F65C
    r30 = r3 + r0; // 0x8073F660
    r3 = *(0x318 + r30); // lwz @ 0x8073F664
    if (==) goto 0x0x8073f800;
    r3 = r3 + 0x74; // 0x8073F670
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8073f688;
    /* li r3, 0 */ // 0x8073F680
    /* b 0x8073f68c */ // 0x8073F684
    r3 = *(0xc + r3); // lwz @ 0x8073F688
    /* li r0, 0 */ // 0x8073F690
    if (==) goto 0x0x8073f6a0;
    if (!=) goto 0x0x8073f6a4;
    /* li r0, 1 */ // 0x8073F6A0
    if (==) goto 0x0x8073f800;
    r3 = *(0x318 + r30); // lwz @ 0x8073F6AC
}