/* Function at 0x8078CB18, size=260 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8078CB18(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x8078CB2C
    r31 = r31 + 0; // 0x8078CB30
    *(0x18 + r1) = r30; // stw @ 0x8078CB34
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x8078CB3C
    r29 = r3;
    if (==) goto 0x0x8078cb50;
    if (!=) goto 0x0x8078cb7c;
    r3 = *(0x178 + r3); // lwz @ 0x8078CB50
    if (==) goto 0x0x8078cb7c;
    if (==) goto 0x0x8078cb68;
    r0 = *(0x90 + r3); // lwz @ 0x8078CB60
    /* b 0x8078cb6c */ // 0x8078CB64
    /* li r0, -1 */ // 0x8078CB68
    if (!=) goto 0x0x8078cb7c;
    /* li r3, 0 */ // 0x8078CB74
    /* b 0x8078cc00 */ // 0x8078CB78
    /* lis r3, 0 */ // 0x8078CB7C
    r5 = r4;
    r3 = *(0 + r3); // lwz @ 0x8078CB84
    r4 = r29 + 0x178; // 0x8078CB88
    r12 = *(0 + r3); // lwz @ 0x8078CB8C
    r12 = *(0xb0 + r12); // lwz @ 0x8078CB90
    /* mtctr r12 */ // 0x8078CB94
    /* bctrl  */ // 0x8078CB98
    /* lis r4, 0 */ // 0x8078CB9C
    /* lfs f1, 0(r31) */ // 0x8078CBA0
    r4 = *(0 + r4); // lbz @ 0x8078CBA4
    r0 = r4 + -2; // 0x8078CBA8
    if (>) goto 0x0x8078cbe4;
    if (==) goto 0x0x8078cbd8;
    if (==) goto 0x0x8078cbd8;
    if (==) goto 0x0x8078cbe0;
    if (==) goto 0x0x8078cbe0;
    /* b 0x8078cbe4 */ // 0x8078CBD4
    /* lfs f1, 0x48(r31) */ // 0x8078CBD8
    /* b 0x8078cbe4 */ // 0x8078CBDC
    /* lfs f1, 8(r31) */ // 0x8078CBE0
    if (==) goto 0x0x8078cbfc;
    r3 = *(0x178 + r29); // lwz @ 0x8078CBEC
    if (==) goto 0x0x8078cbfc;
    FUN_805E3430(); // bl 0x805E3430
    r3 = r29 + 0x178; // 0x8078CBFC
    r0 = *(0x24 + r1); // lwz @ 0x8078CC00
    r31 = *(0x1c + r1); // lwz @ 0x8078CC04
    r30 = *(0x18 + r1); // lwz @ 0x8078CC08
    r29 = *(0x14 + r1); // lwz @ 0x8078CC0C
    return;
}