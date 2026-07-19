/* Function at 0x80871ABC, size=172 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80871ABC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x80871AD0
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x80871AD8
    r29 = r4;
    if (!=) goto 0x0x80871aec;
    /* li r29, 0 */ // 0x80871AE4
    /* b 0x80871b40 */ // 0x80871AE8
    /* lis r31, 0 */ // 0x80871AEC
    r31 = r31 + 0; // 0x80871AF0
    if (==) goto 0x0x80871b3c;
    r12 = *(0 + r29); // lwz @ 0x80871AF8
    r3 = r29;
    r12 = *(0x28 + r12); // lwz @ 0x80871B00
    /* mtctr r12 */ // 0x80871B04
    /* bctrl  */ // 0x80871B08
    /* b 0x80871b24 */ // 0x80871B0C
    if (!=) goto 0x0x80871b20;
    /* li r0, 1 */ // 0x80871B18
    /* b 0x80871b30 */ // 0x80871B1C
    r3 = *(0 + r3); // lwz @ 0x80871B20
    if (!=) goto 0x0x80871b10;
    /* li r0, 0 */ // 0x80871B2C
    if (==) goto 0x0x80871b3c;
    /* b 0x80871b40 */ // 0x80871B38
    /* li r29, 0 */ // 0x80871B3C
    r3 = r29;
    r4 = r30;
    FUN_80871F0C(r3, r4); // bl 0x80871F0C
    r0 = *(0x24 + r1); // lwz @ 0x80871B4C
    r31 = *(0x1c + r1); // lwz @ 0x80871B50
    r30 = *(0x18 + r1); // lwz @ 0x80871B54
    r29 = *(0x14 + r1); // lwz @ 0x80871B58
    return;
}