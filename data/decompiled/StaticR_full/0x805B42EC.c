/* Function at 0x805B42EC, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_805B42EC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x805B42F4
    /* lis r4, 0 */ // 0x805B42F8
    *(0x14 + r1) = r0; // stw @ 0x805B42FC
    r5 = r5 + 0; // 0x805B4300
    /* li r6, 0 */ // 0x805B4304
    *(0xc + r1) = r31; // stw @ 0x805B4308
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x805B4310
    /* li r4, 0 */ // 0x805B4314
    FUN_805CFD60(r6, r4); // bl 0x805CFD60
    if (==) goto 0x0x805b4330;
    r4 = r3;
    r3 = r31 + 0x4100; // 0x805B4328
    FUN_805B4CF4(r4, r3); // bl 0x805B4CF4
    r0 = *(0x14 + r1); // lwz @ 0x805B4330
    r31 = *(0xc + r1); // lwz @ 0x805B4334
    return;
}