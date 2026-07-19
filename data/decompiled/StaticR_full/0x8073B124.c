/* Function at 0x8073B124, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8073B124(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x8073B134
    r30 = r3;
    r0 = *(7 + r3); // lbz @ 0x8073B13C
    if (!=) goto 0x0x8073b20c;
    /* lis r4, 0 */ // 0x8073B148
    r4 = *(0 + r4); // lwz @ 0x8073B14C
    r0 = *(0x10 + r4); // lbz @ 0x8073B150
    if (!=) goto 0x0x8073b20c;
    r0 = *(0x12b + r3); // lbz @ 0x8073B15C
    if (==) goto 0x0x8073b16c;
    /* b 0x8073b20c */ // 0x8073B168
    r3 = *(0x298 + r3); // lwz @ 0x8073B16C
    if (==) goto 0x0x8073b20c;
    r3 = r3 + 0x74; // 0x8073B178
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8073b190;
    /* li r3, 0 */ // 0x8073B188
    /* b 0x8073b194 */ // 0x8073B18C
    r3 = *(0xc + r3); // lwz @ 0x8073B190
}