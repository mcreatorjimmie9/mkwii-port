/* Function at 0x807E3A94, size=148 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807E3A94(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x807E3AA8
    r29 = r3;
    r0 = *(0xac + r3); // lwz @ 0x807E3AB0
    if (==) goto 0x0x807e3b6c;
    r5 = *(8 + r3); // lwz @ 0x807E3ABC
    /* li r0, 1 */ // 0x807E3AC0
    r3 = *(0x10 + r5); // lwz @ 0x807E3AC4
    r4 = *(4 + r3); // lwz @ 0x807E3AC8
    if (==) goto 0x0x807e3ae0;
    if (==) goto 0x0x807e3ae0;
    /* li r0, 0 */ // 0x807E3ADC
    if (==) goto 0x0x807e3af0;
    r3 = *(0 + r3); // lwz @ 0x807E3AE8
    /* b 0x807e3af4 */ // 0x807E3AEC
    /* li r3, 0 */ // 0x807E3AF0
    r30 = *(0xec + r3); // lwz @ 0x807E3AF4
    r0 = *(0xc + r5); // lwz @ 0x807E3AFC
    *(8 + r1) = r0; // stw @ 0x807E3B00
    r4 = *(0x138 + r29); // lwz @ 0x807E3B04
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = r3;
    if (!=) goto 0x0x807e3b34;
    /* lis r3, 0 */ // 0x807E3B18
    /* lis r5, 0 */ // 0x807E3B1C
    r3 = r3 + 0; // 0x807E3B20
    /* li r4, 0x53 */ // 0x807E3B24
}